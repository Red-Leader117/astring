#include <Arduino.h>
#include "astring.h"

void setup() {
	Serial.begin(9600);

	Astr s = Astr("Hello, World");
	Serial.println(s.charAt(1));
}

void loop() {}
