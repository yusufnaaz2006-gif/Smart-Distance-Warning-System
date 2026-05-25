#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define TRIG 9
#define ECHO 10
#define BUZZER 8
#define LED 7

LiquidCrystal_I2C lcd(0x27, 16, 2);

long duration;
int distance;

void setup() {

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Distance Meter");
  delay(2000);

  lcd.clear();
}

void loop() {

  // Trigger pulse
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG, LOW);

  // Read echo
  duration = pulseIn(ECHO, HIGH);

  // Calculate distance
  distance = duration * 0.034 / 2;

  // LCD display
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Distance:");

  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print(" cm");

  // Warning logic
  if(distance < 15) {

    digitalWrite(LED, HIGH);

    digitalWrite(BUZZER, HIGH);
    delay(100);

    digitalWrite(BUZZER, LOW);
    delay(100);

  }
  else if(distance < 30) {

    digitalWrite(LED, HIGH);

    digitalWrite(BUZZER, HIGH);
    delay(400);

    digitalWrite(BUZZER, LOW);
    delay(400);

  }
  else {

    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW);

  }
}
