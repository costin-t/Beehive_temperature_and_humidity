#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define screen_width 128
#define screen_height 64
#include <DHT.h>
#define DHTPIN 7
#define DHTTYPE DHT22
DHT dht (DHTPIN, DHTTYPE);

int chk;
float hum;
float temp;
int PowerPin = 10;

Adafruit_SSD1306 display(screen_width, screen_height);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  digitalWrite(PowerPin, HIGH);
  dht.begin();
}

void loop(){
  hum = dht.readHumidity();
  temp= dht.readTemperature();
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print("Umiditate: ");
  display.print(hum);
  display.print ("%");
  display.setCursor(0, 35);
  display.print ("Temp:");
  display.print (temp);
  display.display();
  }
