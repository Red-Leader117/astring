#include <Arduino.h>
#include "astring.h"

void setup() {
	Serial.begin(9600);

	Astr s = Astr(10);
	Serial.println(s.length());
}

void loop() {}
