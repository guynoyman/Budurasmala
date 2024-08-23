  //#define FASTLED_ESP8266_NODEMCU_PIN_ORDER //Uncomment for ESP-12E Boards
#include "FastLED.h"


#define NUM_LEDS 200
#define DATA_PIN 22
#define BRIGHTNESS  200

CRGB leds[NUM_LEDS];

byte mainarray[8][25][3];
byte a8x25[8][25][3];

int DELAY;

void Lotus_1_1();
void Lotus_1_2();
void Lotus_1_3();
void Lotus_1_4();
void Lotus_1_5();
void Lotus_2_1();
void Lotus_2_2();
void Lotus_3_1();
void Lotus_3_2();
void Lotus_3_3();
void Lotus_3_4();
void Lotus_3_5();
void Lotus_3_6();
void Lotus_5_1();
void Lotus_5_2();
void Lotus_6_1();
void Lotus_6_2();
void Lotus_6_3();
void Lotus_6_4();
void Lotus_6_5();
void Lotus_6_6();
void Lotus_6_7();
void Lotus_7_1();
void Lotus_7_2();
void Lotus_8_1();
void Lotus_8_2();
void Lotus_8_3();
void Lotus_8_4();
void Lotus_8_5();
void Lotus_8_6();
void Lotus_9();
void Lotus_10_1();
void Lotus_10_2();
void Lotus_10_3();
void Lotus_10_4();
void Lotus_10_5();
void Lotus_10_6();
void Lotus_10_7();
void Lotus_11();
void Lotus_12();
void Spiral_1_1();
void Spiral_1_2(); 
void Spiral_1_3();
void Spiral_1_4();
void Spiral_1_5();
void Spiral_2_1();
void Spiral_2_2();
void Spiral_2_3();
void Spiral_3_1();
void Spiral_3_2();
void Spiral_3_3();
void Spread_1();
void Spread_2_1();
void Spread_2_2();
void Spread_2_3();
void Spread_2_4();
void Spread_2_5();
void Spread_3();
void Spread_4_1();
void Spread_4_2();
void Spread_4_3();
void Spread_5();
void Spread_6();
void Spread_7_1();
void Spread_7_2();
void Spread_7_3();
void Spread_7_4();
void Spread_8();
void Spread_9();
void Spread_10_1();
void Spread_10_2();
void Spread_10_3();
void Spread_10_4();
void Spread_10_5();
void Spread_10_6();
void Spread_10_7();
void Spread_10_8();
void Spread_10_9();
void Spread_10_10();
void Spread_11_1();
void Spread_11_2();
void Spread_11_3();
void Spread_12();
void Spread_13_1();
void Spread_13_2();
void Spread_13_3();
void Spread_13_4();   
void Spread_13_5();
void Spread_13_6();
void Spread_13_7();
void Spread_13_8();
void Spread_13_9();
void Spread_13_10();
void Spread_14_1();
void Spread_14_2();
void Spread_14_3();
void Spread_14_4();
void Spread_14_5();
void Wheel_1_1();
void Wheel_1_2();
void Wheel_1_3();
void Wheel_1_4();
void Wheel_1_5();
void Wheel_1_6();
void Wheel_2();
void Wheel_4_1();
void Wheel_4_2();
void Wheel_4_3();
void Wheel_4_4();
void Wheel_4_5();
void Wheel_4_6();
void Wheel_6();
void Wheel_7_1();
void Wheel_7_2();
void Wheel_7_3();
void Wheel_7_4();
void Wheel_7_5();
void Wheel_7_6();
void Wheel_8_1();
void Wheel_8_2();
void Wheel_8_3();
void Wheel_8_4();
void Wheel_10_1();
void Wheel_10_2();
void Wheel_10_3();
void Wheel_10_4();
void Wheel_11_1();
void Wheel_11_2();
void Wheel_11_3();
void Wheel_11_4();
void Wheel_12_1();
void Wheel_12_2();
void Wheel_12_3();
void Wheel_12_4();
void Wheel_13_1();
void Wheel_13_2();
void Wheel_13_3();
void Wheel_13_4();
void Wheel_14_1();
void Wheel_14_2();
void Wheel_14_3();
void Wheel_14_4();
void Wheel_15_1();
void Wheel_15_2();
void Wheel_15_3();
void Wheel_15_4();
void Wheel_15_5();
void Wheel_15_6();


void setup() {
  delay(2000);
  FastLED.setBrightness( BRIGHTNESS );
  DELAY = 110;
  
  // Uncomment one of the following lines for your leds arrangement.
  // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  // FastLED.setBrightness(CRGB(255,255,255));
  // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);

  // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, 9, 10, RGB>(leds, NUM_LEDS);

  // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);

}

void loop() 
{

//In step by step designs, say the function as abc(x,y); [x - DELAY, y - Repeats]
//In array functions, after mentioning the function, put pt8x25(z, x); [z - direction as 0 - up, 1 - down, 2 - left, 3 - right]

for (int u = 0; u < 2; u++) {
    Lotus_1_1();
    pt8x25(0, DELAY);
    Lotus_1_2();
    pt8x25(0, DELAY);
    Lotus_1_3();
    pt8x25(0, DELAY);
    Lotus_1_4();
    pt8x25(0, DELAY);
    Lotus_1_5();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8); 

    for (int u = 0; u < 2; u++) {
    Lotus_2_1();
    pt8x25(0, DELAY);
    Lotus_2_2();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8); 

    for (int u = 0; u < 2; u++) {
    Lotus_3_1();
    pt8x25(0, DELAY);
    Lotus_3_2();
    pt8x25(0, DELAY);
    Lotus_3_3();
    pt8x25(0, DELAY);
    Lotus_3_4();
    pt8x25(0, DELAY);
    Lotus_3_5();
    pt8x25(0, DELAY);
    Lotus_3_6();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    Lotus_4(DELAY, 2);

    for (int u = 0; u < 2; u++) {
    Lotus_5_1();
    pt8x25(0, DELAY);
    Lotus_5_2();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);  

    for (int u = 0; u < 2; u++) {
    Lotus_6_1();
    pt8x25(0, DELAY);
    Lotus_6_2();
    pt8x25(0, DELAY);
    Lotus_6_3();
    pt8x25(0, DELAY);
    Lotus_6_4();
    pt8x25(0, DELAY);
    Lotus_6_5();
    pt8x25(0, DELAY);
    Lotus_6_6();
    pt8x25(0, DELAY);
    Lotus_6_7();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);
 
    for (int u = 0; u < 2; u++) {
    Lotus_7_1();
    pt8x25(0, DELAY);
    Lotus_7_2();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);
    
    for (int u = 0; u < 2; u++) {
    Lotus_8_1();
    pt8x25(0, DELAY);
    Lotus_8_2();
    pt8x25(0, DELAY);
    Lotus_8_3();
    pt8x25(0, DELAY);
    Lotus_8_4();
    pt8x25(0, DELAY);
    Lotus_8_5();
    pt8x25(0, DELAY);
    Lotus_8_6();
    pt8x25(0, DELAY);    
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 2; u++) {
    Lotus_9();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 2; u++) {
    Lotus_10_1();
    pt8x25(0, DELAY);
    Lotus_10_2();
    pt8x25(0, DELAY);
    Lotus_10_3();
    pt8x25(0, DELAY);
    Lotus_10_4();
    pt8x25(0, DELAY);
    Lotus_10_5();
    pt8x25(0, DELAY);
    Lotus_10_6();
    pt8x25(0, DELAY);
    Lotus_10_7();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 6; u++) {
    Lotus_11();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 6; u++) {
    Lotus_12();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 1; u++) {
    Spiral_1_1();
    pt8x25(2, DELAY);
    Spiral_1_2();
    pt8x25(2, DELAY);
    Spiral_1_3();
    pt8x25(2, DELAY);
    Spiral_1_4();
    pt8x25(2, DELAY);
    Spiral_1_5();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 10);

    for (int u = 0; u < 1; u++) {
    Spiral_2_1();
    pt8x25(3, DELAY);
    Spiral_2_2();
    pt8x25(3, DELAY);
    Spiral_2_3();
    pt8x25(3, DELAY);
    }
    shiftsteps8x25(3, DELAY, 15);

    for (int u = 0; u < 1; u++) {
    Spiral_3_1();
    pt8x25(2, DELAY);
    Spiral_3_2();
    pt8x25(2, DELAY);
    Spiral_3_3();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 15);

    Spread_1(DELAY, 3);

    for (int u = 0; u < 2; u++) {
    Spread_2_1();
    pt8x25(0, DELAY);
    Spread_2_2();
    pt8x25(0, DELAY);
    Spread_2_3();
    pt8x25(0, DELAY);
    Spread_2_4();
    pt8x25(0, DELAY);
    Spread_2_5();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 5; u++) {
    Spread_3();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_4_1();
    pt8x25(0, DELAY);
    Spread_4_2();
    pt8x25(0, DELAY);
    Spread_4_3();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_5();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_6();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 2; u++) {
    Spread_7_1();
    pt8x25(0, DELAY);
    Spread_7_2();
    pt8x25(0, DELAY);
    Spread_7_3();
    pt8x25(0, DELAY);
    Spread_7_4();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_8();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_9();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_10_1();
    pt8x25(0, DELAY);
    Spread_10_2();
    pt8x25(0, DELAY);
    Spread_10_3();
    pt8x25(0, DELAY);
    Spread_10_4();
    pt8x25(0, DELAY);
    Spread_10_5();
    pt8x25(0, DELAY);
    Spread_10_6();
    pt8x25(0, DELAY);
    Spread_10_7();
    pt8x25(0, DELAY);
    Spread_10_8();
    pt8x25(0, DELAY);
    Spread_10_9();
    pt8x25(0, DELAY);
    Spread_10_10();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_11_1();
    pt8x25(0, DELAY);
    Spread_11_2();
    pt8x25(0, DELAY);
    Spread_11_3();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_12();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_13_1();
    pt8x25(0, DELAY);
    Spread_13_2();
    pt8x25(0, DELAY);
    Spread_13_3();
    pt8x25(0, DELAY);
    Spread_13_4();
    pt8x25(0, DELAY);
    Spread_13_5();
    pt8x25(0, DELAY);
    Spread_13_6();
    pt8x25(0, DELAY);
    Spread_13_7();
    pt8x25(0, DELAY);
    Spread_13_8();
    pt8x25(0, DELAY);
    Spread_13_9();
    pt8x25(0, DELAY);
    Spread_13_10();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);

    for (int u = 0; u < 3; u++) {
    Spread_14_1();
    pt8x25(0, DELAY);
    Spread_14_2();
    pt8x25(0, DELAY);
    Spread_14_3();
    pt8x25(0, DELAY);
    Spread_14_4();
    pt8x25(0, DELAY);
    Spread_14_5();
    pt8x25(0, DELAY);
    }
    shiftsteps8x25(0, DELAY, 8);
  
    for (int u = 0; u < 1; u++) {
    Wheel_1_1();
    pt8x25(2, DELAY);
    Wheel_1_2();
    pt8x25(2, DELAY);
    Wheel_1_3();
    pt8x25(2, DELAY);
    Wheel_1_4();
    pt8x25(2, DELAY);
    Wheel_1_5();
    pt8x25(2, DELAY);
    Wheel_1_6();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);
  
    for (int u = 0; u < 3; u++) {
    Wheel_2();
    pt8x25(3, DELAY);
    }
    shiftsteps8x25(3, DELAY, 25);

    //Wheel_3 does not exist

    for (int u = 0; u < 1; u++) {
    Wheel_4_1();
    pt8x25(2, DELAY);
    Wheel_4_2();
    pt8x25(2, DELAY);
    Wheel_4_3();
    pt8x25(2, DELAY);
    Wheel_4_4();
    pt8x25(2, DELAY);
    Wheel_4_5();
    pt8x25(2, DELAY);
    Wheel_4_6();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

    //Wheel_5 does not exist

    for (int u = 0; u < 3; u++) {
    Wheel_6();
    pt8x25(3, DELAY); //don't change the direction
    }
    shiftsteps8x25(3, DELAY, 25); 

    for (int u = 0; u < 1; u++) {
    Wheel_7_1();
    pt8x25(2, DELAY);
    Wheel_7_2();
    pt8x25(2, DELAY);
    Wheel_7_3();
    pt8x25(2, DELAY);
    Wheel_7_4();
    pt8x25(2, DELAY);
    Wheel_7_5();
    pt8x25(2, DELAY);
    Wheel_7_6();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

    for (int u = 0; u < 1; u++) {
    Wheel_8_1();
    pt8x25(2, DELAY); //don't change the direction
    Wheel_8_2();
    pt8x25(2, DELAY);
    Wheel_8_3();
    pt8x25(2, DELAY);
    Wheel_8_4();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

    //Wheel_9 does not exixt

    for (int u = 0; u < 1; u++) {
    Wheel_10_1();
    pt8x25(2, DELAY); //don't change the direction
    Wheel_10_2();
    pt8x25(2, DELAY);
    Wheel_10_3();
    pt8x25(2, DELAY);
    Wheel_10_4();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

    for (int u = 0; u < 1; u++) {
    Wheel_11_1();
    pt8x25(2, DELAY);//don't change the direction
    Wheel_11_2();
    pt8x25(2, DELAY);
    Wheel_11_3();
    pt8x25(2, DELAY);
    Wheel_11_4();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

    for (int u = 0; u < 1; u++) {
    Wheel_12_1();
    pt8x25(2, DELAY);//don't change the direction
    Wheel_12_2();
    pt8x25(2, DELAY);
    Wheel_12_3();
    pt8x25(2, DELAY);
    Wheel_12_4();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

    for (int u = 0; u < 1; u++) {
    Wheel_13_1();
    pt8x25(2, DELAY);//don't change the direction
    Wheel_13_2();
    pt8x25(2, DELAY);
    Wheel_13_3();
    pt8x25(2, DELAY);
    Wheel_13_4();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

    for (int u = 0; u < 1; u++) {
    Wheel_14_1();
    pt8x25(2, DELAY);
    Wheel_14_2();
    pt8x25(2, DELAY);
    Wheel_14_3();
    pt8x25(2, DELAY);
    Wheel_14_4();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

    for (int u = 0; u < 1; u++) {
    Wheel_15_1();
    pt8x25(2, DELAY);
    Wheel_15_2();
    pt8x25(2, DELAY);
    Wheel_15_3();
    pt8x25(2, DELAY);
    Wheel_15_4();
    pt8x25(2, DELAY);
    Wheel_15_5();
    pt8x25(2, DELAY);
    Wheel_15_6();
    pt8x25(2, DELAY);
    }
    shiftsteps8x25(2, DELAY, 25);

  
}



































void clearmainarray() {
  for (byte z1 = 0; z1 < 8; z1++) {
    for (byte z2 = 0; z2 < 25; z2++) {
      for (byte z3 = 0; z3 < 3; z3++) {
        mainarray[z1][z2][z3] = 0;
      }
    }
  }
}
void cleara8x25() {
  for (byte z1 = 0; z1 < 8; z1++) {
    for (byte z2 = 0; z2 < 25; z2++) {
      for (byte z3 = 0; z3 < 3; z3++) {
        a8x25[z1][z2][z3] = 0;
      }
    }
  }
}

void display() {
  for (byte qq = 0; qq < 25; qq++) {
    if (qq % 2 == 0) {
      for (byte q = 0; q < 8; q++) {
        leds[q + (qq * 8)] = CRGB(mainarray[q][qq][0], mainarray[q][qq][1], mainarray[q][qq][2]);
      }
    }
    else {
      for (byte q = 0; q < 8; q++) {
        leds[q + (qq * 8)] = CRGB(mainarray[7 - q][qq][0], mainarray[7 - q][qq][1], mainarray[7 - q][qq][2]);
      }
    }
  }
  FastLED.show();
}


void up() {
  for (byte i = 0; i < 7; i++) {
    for (byte j = 0; j < 25; j++) {
      mainarray[i][j][0] = mainarray[i + 1][j][0];
      mainarray[i][j][1] = mainarray[i + 1][j][1];
      mainarray[i][j][2] = mainarray[i + 1][j][2];
    }
  }
}
void down() {
  for (byte i = 7; i > 0; i++) {
    for (byte j = 0; j < 25; j++) {
      mainarray[i][j][0] = mainarray[i - 1][j][0];
      mainarray[i][j][1] = mainarray[i - 1][j][1];
      mainarray[i][j][2] = mainarray[i - 1][j][2];
    }
  }
}
void moveleft() {
  for (byte j = 0; j < 24; j++) {
    for (byte i = 0; i < 8; i++) {
      mainarray[i][j][0] = mainarray[i][j + 1][0];
      mainarray[i][j][1] = mainarray[i][j + 1][1];
      mainarray[i][j][2] = mainarray[i][j + 1][2];
    }
  }
}

void moveright() {
  for (byte j = 24; j > 0; j--) {
    for (byte i = 0; i < 8; i++) {
      mainarray[i][j][0] = mainarray[i][j - 1][0];
      mainarray[i][j][1] = mainarray[i][j - 1][1];
      mainarray[i][j][2] = mainarray[i][j - 1][2];
    }
  }
}

void setbottomrow(byte x) {
  for (byte i = 0; i < 25; i++) {
    mainarray[7][i][0] = a8x25[x][i][0];
    mainarray[7][i][1] = a8x25[x][i][1];
    mainarray[7][i][2] = a8x25[x][i][2];
  }
}

void settoprow(byte x) {
  for (byte i = 0; i < 25; i++) {
    mainarray[0][i][0] = a8x25[7 - x][i][0];
    mainarray[0][i][1] = a8x25[7 - x][i][1];
    mainarray[0][i][2] = a8x25[7 - x][i][2];
  }
}

void setleftcolumn(byte x) {
  for (byte i = 0; i < 8; i++) {
    mainarray[i][0][0] = a8x25[i][24 - x][0];
    mainarray[i][0][1] = a8x25[i][24 - x][1];
    mainarray[i][0][2] = a8x25[i][24 - x][2];
  }
}

void setrightcolumn(byte x) {
  for (byte i = 0; i < 8; i++) {
    mainarray[i][24][0] = a8x25[i][x][0];
    mainarray[i][24][1] = a8x25[i][x][1];
    mainarray[i][24][2] = a8x25[i][x][2];
  }
}


void pt8x25(int d, int sp) {
  if (d == 0) {
    for (byte hh = 0; hh < 8; hh++) {
      setbottomrow(hh);
      display();
      delay(sp);
      up();
    }
  }
  if (d == 1) {
    for (byte hh = 0; hh < 8; hh++) {
      settoprow(hh);
      display();
      delay(sp);
      down();
    }
  }
  else if (d == 2) {
    for (byte hh = 0; hh < 25; hh++) {
      setrightcolumn(hh);
      display();
      delay(sp);
      moveleft();
    }
  }
  else if (d == 3) {
    for (byte hh = 0; hh < 25; hh++) {
      setleftcolumn(hh);
      display();
      delay(sp);
      moveright();
    }
  }
}


void shiftsteps8x25(int d, int sp, byte steps) {
  if (d == 0) {
    for (byte i = 0 ; i < 25; i++) {
      mainarray[7][i][0] = 0;
      mainarray[7][i][1] = 0;
      mainarray[7][i][2] = 0;
    }
    for (byte hh = 0; hh < steps; hh++) {
      display();
      delay(sp);
      up();
    }
  }
  if (d == 1) {
    for (byte i = 0 ; i < 25; i++) {
      mainarray[0][i][0] = 0;
      mainarray[0][i][1] = 0;
      mainarray[0][i][2] = 0;
    }
    for (byte hh = 0; hh < steps; hh++) {
      display();
      delay(sp);
      down();
    }
  }
  else if (d == 2) {
    for (byte i = 0; i < 8; i++) {
      mainarray[i][24][0] = 0;
      mainarray[i][24][1] = 0;
      mainarray[i][24][2] = 0;
    }
    for (byte hh = 0; hh < steps; hh++) {
      display();
      delay(sp);
      moveleft();
    }
  }
  else if (d == 3) {
    for (byte i = 0 ; i < 8; i++) {
      mainarray[i][0][0] = 0;
      mainarray[i][0][1] = 0;
      mainarray[i][0][2] = 0;
    }
    for (byte hh = 0; hh < steps; hh++) {
      display();
      delay(sp);
      moveright();
    }
  }
}
