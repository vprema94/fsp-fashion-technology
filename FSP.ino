#include <Adafruit_NeoPixel.h>

#define PIN 2
#define LED_COUNT 3

Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

int led1 = A5;
int led2 = A4;
int led3 = A3;
int led4 = A2;
int led5 = 11;
int led6 = 10;
int led7 = 9;
int led8 = 3;

int i = 0;

int lightPattern[44][8] = 
{
  {HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW},
  {LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
  {LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW},
  {LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
  {LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW},
  {LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW},
  {LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW},
  {LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH},
  {LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW},
  {LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW},
  {LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW},
  {LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
  {LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW},
  {LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
  {HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW},
  {LOW, LOW, LOW, HIGH, HIGH, LOW, LOW, LOW},
  {LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW},
  {LOW, HIGH, LOW, LOW, LOW, LOW, HIGH, LOW},
  {HIGH, LOW, LOW, LOW, LOW, LOW, LOW, HIGH},
  {LOW, HIGH, LOW, LOW, LOW, LOW, HIGH, LOW},
  {LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW},
  {LOW, LOW, LOW, HIGH, HIGH, LOW, LOW, LOW},
  {LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH},
  {LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW},
  {LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW},
  {LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW},
  {LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
  {LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW},
  {LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
  {HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW},
  {LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
  {LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW},
  {LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
  {LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW},
  {LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW},
  {LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW},
  {LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH},
  {HIGH, LOW, LOW, LOW, LOW, LOW, LOW, HIGH},
  {LOW, HIGH, LOW, LOW, LOW, LOW, HIGH, LOW},
  {LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW},
  {LOW, LOW, LOW, HIGH, HIGH, LOW, LOW, LOW},
  {LOW, LOW, HIGH, LOW, LOW, HIGH, LOW, LOW},
  {LOW, HIGH, LOW, LOW, LOW, LOW, HIGH, LOW},
  {HIGH, LOW, LOW, LOW, LOW, LOW, LOW, HIGH}
};

void setup() {
 leds.begin();
 leds.show();
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);
 pinMode(led8, OUTPUT);
}

void loop() {
  ledRainbow();
  ledPattern();
} 

void allLedOff(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
} 

void allLedOffTwo(){
 leds.setPixelColor(0, 0, 0, 0); 
 leds.setPixelColor(1, 0, 0, 0); 
 leds.setPixelColor(2, 0, 0, 0);
 leds.show();
}

void ledRainbow() {
 leds.setPixelColor(2, 255, 0, 0); //red
 leds.setPixelColor(1, 255, 127, 0); //orange
 leds.setPixelColor(0, 255, 255, 0); //yellow
 leds.show();
 delay(500);
 leds.setPixelColor(2, 255, 127, 0); //orange
 leds.setPixelColor(1, 255, 255, 0); //yellow
 leds.setPixelColor(0, 127, 255, 0); //green1
 leds.show();
 delay(500);
 leds.setPixelColor(2, 255, 255, 0); //yellow
 leds.setPixelColor(1, 127, 255, 0); //green1
 leds.setPixelColor(0, 0, 255, 0); //green2
 leds.show();
 delay(500); 
 leds.setPixelColor(2, 127, 255, 0); //green1
 leds.setPixelColor(1, 0, 255, 0); //green2
 leds.setPixelColor(0, 0, 255, 127); //green3
 leds.show();
 delay(500); 
 leds.setPixelColor(2, 0, 255, 0); //green2
 leds.setPixelColor(1, 0, 255, 127); //green3
 leds.setPixelColor(0, 0, 255, 255); //blue1
 leds.show();
 delay(500); 
 leds.setPixelColor(2, 0, 255, 127); //green3
 leds.setPixelColor(1, 0, 255, 255); //blue1
 leds.setPixelColor(0, 0, 127, 255); //blue2
 leds.show();
 delay(500); 
 leds.setPixelColor(2, 0, 255, 255); //blue1
 leds.setPixelColor(1, 0, 127, 255); //blue2
 leds.setPixelColor(0,  0, 0, 255); //blue3
 leds.show();
 delay(500); 
 leds.setPixelColor(2, 0, 127, 255); //blue2
 leds.setPixelColor(1,  0, 0, 255); //blue3
 leds.setPixelColor(0, 127, 0, 255); //purple
 leds.show();
 delay(500);
 leds.setPixelColor(2, 0, 0, 255); //blue3
 leds.setPixelColor(1, 127, 0, 255); //purple
 leds.setPixelColor(0, 255, 0, 255); //pink1
 leds.show();
 delay(500); 
 leds.setPixelColor(2, 127, 0, 255); //purple
 leds.setPixelColor(1, 255, 0, 255); //pink1
 leds.setPixelColor(0, 255, 0, 127); //pink2
 leds.show();
 delay(500); 
 leds.setPixelColor(2, 255, 0, 255); //pink1
 leds.setPixelColor(1, 255, 0, 127); //pink2
 leds.setPixelColor(0, 255, 0, 0); //red
 leds.show();
 delay(500); 
 leds.setPixelColor(2, 255, 0, 127); //pink2
 leds.setPixelColor(1, 255, 0, 0); //red
 leds.setPixelColor(0, 255, 127, 0); //orange
 leds.show();
 delay(500);
 allLedOffTwo();
}; 

void ledPattern() {
  i = 0;
  while(i < 44) {
    digitalWrite(led1, lightPattern[i][0]);
    digitalWrite(led2, lightPattern[i][1]);
    digitalWrite(led3, lightPattern[i][2]);
    digitalWrite(led4, lightPattern[i][3]);
    digitalWrite(led5, lightPattern[i][4]);
    digitalWrite(led6, lightPattern[i][5]);
    digitalWrite(led7, lightPattern[i][6]);
    digitalWrite(led8, lightPattern[i][7]);
    delay(200);
    i++;
  }
  allLedOff();
 }
