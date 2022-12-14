//header file dedicated to ultrasonic sensor code.

const int trigPin = 3;
const int echoPin = 2;
long duration = 0;

//calculates distance from buggy to obstacle in cm.
long ultrasound(int trig, int echo){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  return (duration*0.034)/2;
}
