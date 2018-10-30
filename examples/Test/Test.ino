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

	testCond("charAt()", s1.charAt(2) == 'l');
	testCond("charAt() error", s1.charAt(-1) == '\0');

	// length();
	testCond("length()", s1.length() == 12);
/*
	// compareTo();
	s1 = Astr("Cucumber");
	Astr s2 = Astr("Cucumber");

	testCond("compareTo()", s1.compareTo(s2) == 0);

	s2 = Astr("Cucuracha");
	testCond("compareTo() 2", s1.compareTo(s2) < 0);
	Serial.println(s1.compareTo(s2));

	s2 = Astr("Cucua");
	testCond("compareTo() 3", s1.compareTo(s2) > 0);
	Serial.println(s1.compareTo(s2));
*/
}

void loop() {}
