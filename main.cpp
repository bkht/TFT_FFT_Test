#include "mbed.h"
#include "main.h"
#include "arm_math.h"
#include "arm_const_structs.h"
//#include <math.h>

Serial pc(USBTX, USBRX);

DigitalOut myled(LED1);

AnalogIn    Channel(A0);

Timer timer;

SPI_TFT_ILI9341     TFT(PIN_MOSI_TFT, PIN_MISO_TFT, PIN_SCLK_TFT, PIN_CS_TFT, PIN_RESET_TFT, PIN_DC_TFT, "TFT"); // mosi, miso, sclk, cs, reset, dc 

// Allows 16, 32, 64, 128, 256, 512, 1024, 2048 or 4096 samples for FFT size
//const int FFT_LEN   = 512;
const int FFT_LEN   = 1024;
//const int FFT_LEN   = 2048;
//const int bins      = 32;

const static arm_cfft_instance_f32 *S;

float samples[FFT_LEN*2];
float magnitudes[FFT_LEN];
//float freq_window[bins];

    float min = 1.0f;
    float max = 0.0f;
    float mult = 1.0f / (max - min);

    float peak_value = 0.0f;
    float peak_values[FFT_LEN];
    
void readADC(void) {
    float waitTime = (20480.0f / (float) FFT_LEN) * 10.0f; // 200uS 204 mS in total , sample 24 waves
    peak_value = 0.0f;
    for(int i = 0; i < FFT_LEN*2; i+=2)
    {
        float adc_value = Channel.read();
        if (peak_value < adc_value) {
            peak_value = adc_value;
        }
        peak_values[i/2] = adc_value;
        
        float val = (adc_value - min) * mult;
        samples[i]   = val;
        samples[i+1] = 0;
        wait_us(waitTime);
    }
}

void calcFft(void)
{
    // Run FFT on sample data.
    arm_cfft_f32(S, samples, 0, 1);
    // Calculate magnitude of complex numbers output by the FFT.
    arm_cmplx_mag_f32(samples, magnitudes, FFT_LEN);
}

void plotFftScale(void)
{
	uint16_t tftMaxY = TFT.height() - 1;
	uint16_t tftMaxX = TFT.width() - 1;
//	tftMaxX = 159;
	tftMaxY = FFT_MAX_Y;
	char txt[6];

	TFT.background(Black);
	TFT.foreground(RGB(0, 255, 0));

	for(uint16_t x = 0; x <= tftMaxX; x++)
    {
    	int frequency = (x+1)*5;

    	if ((x+1) %40 == 0) {
            sprintf(txt, "%d", frequency);
            if (frequency < 1000) {
            	TFT.locate(x-8, tftMaxY+11);
                TFT.printf(txt);
            }
            else
            if (frequency < 1500) {
            	TFT.locate(x-12, tftMaxY+11);
                TFT.printf(txt);
            }
    	}
    	if ((x+1) %20 == 0) {
            TFT.line(x, tftMaxY, x, tftMaxY+8, RGB(0, 255, 0)); // 100Hz marks, long
    	}
    	else
    	if ((x+1) %4 == 0) {
            TFT.line(x, tftMaxY, x, tftMaxY+4, RGB(0, 192, 0)); // 20Hz marks, short
    	}

    }
}

void plotFft(void)
{
	uint16_t tftMaxY = TFT.height() - 1;
	uint16_t tftMaxX = TFT.width() - 1;
//	tftMaxX = 159;
	tftMaxY = FFT_MAX_Y;

    for(uint16_t x = 0; x <= tftMaxX; x++)
    {
        int magnitudeValue = (int) ((magnitudes[x+1] / (float)FFT_LEN) * (float)tftMaxY);
        // limit to vertical
        if (magnitudeValue > tftMaxY) {
        	magnitudeValue = tftMaxY;
        }
        int y = tftMaxY - magnitudeValue;
//        if (x < tftMaxX) {
//            TFT.line(x+1, tftMaxY, x+1, 0, RGB(255, 255, 0));
//        }
        TFT.line(x, y-1, x, tftMaxY, RGB(255, 255, 255));
        TFT.line(x, y-1, x, 0, RGB(0, 0, 0));
    }
}

int main() {
    pc.baud(BAUD_RATE);
    printf("\n");
    printf("-------------------------------\n");
    printf("Starting 20180413_tft_fft_test\n");
    printf("" __DATE__ " " __TIME__ "\n");
#if defined(MBED_MAJOR_VERSION)
    printf("Using Mbed OS %d.%d.%d\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
#else
    printf("Using Mbed OS from master.\n");
#endif
    printf("-------------------------------\n");

    TFT.background(Black);
    TFT.foreground(White);
    TFT.set_orientation(LANDSCAPE);

    TFT.background(Black);
    TFT.foreground(White);
    TFT.cls();
//    wait(1);
    TFT.set_font((unsigned char*) LCD6x8);
//    TFT.locate(160, 120);
//    TFT.printf("100");
//    TFT.linespacing(4);
//
//    TFT.gotoxy(0,8);
//    TFT.background(Yellow);
//    TFT.foreground(Red);
//    TFT.printf("Hello Theuy!\n");
//
//    TFT.fillrect(160-16, 120-16, 160+32, 120+32, RGB(255,0,255));
//
//    TFT.background(Black);
//    TFT.cls();

    // Init arm_ccft_32
    switch (FFT_LEN)
    {
        case 16:
            S = & arm_cfft_sR_f32_len16;
            break;
        case 32:
            S = & arm_cfft_sR_f32_len32;
            break;
        case 64:
            S = & arm_cfft_sR_f32_len64;
            break;
        case 128:
            S = & arm_cfft_sR_f32_len128;
            break;
        case 256:
            S = & arm_cfft_sR_f32_len256;
            break;
        case 512:
            S = & arm_cfft_sR_f32_len512;
            break;
        case 1024:
            S = & arm_cfft_sR_f32_len1024;
            break;
        case 2048:
            S = & arm_cfft_sR_f32_len2048;
            break;
        case 4096:
            S = & arm_cfft_sR_f32_len4096;
            break;
    }

    // Populate some dummy sin data
    double wave = 360.0f / FFT_LEN;
    for(int16_t i = 0; i< FFT_LEN*2; i+=2)
    {
        double ifl = (double) i;
        //fast math sine table[512+1]
        double angle1 = wave*ifl*5.7f;
        double angle2 = wave*ifl*11.4f;
        double angle3 = wave*ifl*22.7f;
        double angle4 = wave*ifl*45.6f;
        double angle5 = wave*ifl*91.2f;
        double val = 0.0f;
        val += sin(angle1 * (PI / 180));
        val += sin(angle2 * (PI / 180)) / 1.41;
        val += sin(angle3 * (PI / 180)) / 2.0;
        val += sin(angle4 * (PI / 180)) / 0.8;
        val += sin(angle5 * (PI / 180)) / 0.5;
        samples[i]      = val;
        samples[i+1]    = 0;
    }

    // Run FFT on sample data.
//    arm_cfft_f32(S, samples, 0, 1);
    // Calculate magnitude of complex numbers output by the FFT.
//    arm_cmplx_mag_f32(samples, magnitudes, FFT_LEN);

    calcFft();

//    printf("\r\nThe first 20 bins:\r\n");
    int barLength = 240;
    
    float val = 1.0f;
    float factor = sqrt(sqrt(2.0));

    TFT.line(0, 239, 319, 239, RGB(255, 255, 255));

    plotFft();

//    printf("iterations: ");
//    fflush(stdout);
//    uint32_t iterations = 0;
//    timer.reset();
//    timer.start();
//    while (timer.read() < 1.0) {
//    	float value = Channel.read();
//    	iterations++;
//    }
//    printf("%d\n", iterations);	// iterations: 115204 in 1 second
//

    for(int i = 0; i < FFT_LEN*2; i+=2)
    {
        float val = Channel.read();
        if (min > val) min = val;
        if (max < val) max = val;
    }
    mult = (1.0f / (max - min)) *5.0f;

    plotFftScale();

    while(1) {

        myled = !myled; // LED is toggled
        readADC();

        calcFft();
//        myled = 0; // LED is OFF
        plotFft();

//        wait(0.5); // 200 ms
    }
}
