#include <Arduino.h>
#include "astring.h"

void testCond(const char *func, const bool &condition){
	Serial.print(func);
	Serial.print(": ");
	Serial.println(condition ? "Passed" : "Failed");
}

void setup() {

	Serial.begin(9600);

	// charAt();
	Astr s1 = Astr("Hello, World");

}

void loop() {}
