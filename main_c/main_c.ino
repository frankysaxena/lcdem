
// Example Energia code to demonstrate LCD Screen Emulator
// Upload this code to your MSP430G2553 Launchpad using Energia
// Before runing the Processing Sketch.
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
Serial.print("back,0,0,0\r\n");     // Paint Background R=100,G=100,B=100

// Read Analogue value from pin P1.5 and used this to control x the position of a Rectangle
int sensorValue = analogRead(A5);
Serial.print("rect,");
Serial.print(sensorValue >> 1);
Serial.print(",520,50,20\r\n");
delay(20);        // delay in between reads for stability
}


