#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Sahil Srivastava
 * @date 2026-02-19
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */


// Define touch sensor digital pin (Use pin 2)
int touchPin = 5;
int ledPin = 13;
void setup() {
    pinMode(touchPin,INPUT);
    pinMode(ledPin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int state = digitalRead(touchPin);
    if(state==1){
        digitalWrite(13,1);
        Serial.println("ToUcH");
    }
    else{
        digitalWrite(13,0);
        Serial.println("UnToUcHeD");
    }
}
