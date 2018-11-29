#include <Arduino.h>
#include "astring.h"

void testCond(const char *func, const bool &condition){
	Serial.print(func);
	Serial.print(": ");
	Serial.println(condition ? "Passed" : "Failed");
}

void setup() {

	Serial.begin(9600);

	Astr s1 = Astr("Hello, World");

	// Length
	testCond("length()", s1.length() == 12);
	testCond("lengthT()", s1.lengthT() == 13);

	// charAt
	testCond("charAt()", s1.charAt(1) == 'e');
}

void loop() {}
