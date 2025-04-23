void setup() {
	pinMode(13, OUTPUT);	// set 13 pin to output
}

void loop() {
	digitalWrite(13, HIGH); // turn on LED
  	delay(1000);            // wait for 1 sec
  	digitalWrite(13, LOW);  // turn off LED
  	delay(1000);            // wait for 1 sec
}