//main file that runs when program is called.

#include <Servo.h>
#include "motors.h"
#include "servo.h"
#include "ultrasonic.h"

int go = 1;
int i = 0;
long cm = 0;

void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  servo1.attach(10);

  Serial.begin(9600);
}

void loop() {
//  if (state == 1){
//    clockwise();
//  }
//  else if (state == 0){
//    anticlockwise();
//  }
//
//  delay(1000);
//
//  if (i % 2 == 0){
//    state = 1;
//  }
//  else {
//    state = 0;
//  }
//  i++;

  cm = ultrasound(trigPin, echoPin);

  if (cm <= 10){
    i = 0;
    forward();
  }
  else if (cm > 10){
    i++;
    freeze();
    //calculate distance after turning.
      if (i == 1){
        clockwise();
      }
      else if (i == 2){
        anticlockwise();
        anticlockwise();
      }
      else if (i == 3){
        anticlockwise();
        i = 0;
      }
  }
}
