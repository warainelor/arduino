void setup(){
	pinMode(9, OUTPUT);
}

void loop(){
	// smooth speed increasing
  for (int pwm = 0; pwm <= 255; ++pwm) {
  	analogWrite(9, pwm);
    delay(20);
  }
  
  	// smooth speed decreasing
  for (int pwm = 255; pwm >= 0; --pwm) {
  	analogWrite(9, pwm);
    delay(20);
  }
}