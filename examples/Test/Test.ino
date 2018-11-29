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

	// c_str
	{
		char testBuffer[s1.lengthT()];
		s1.c_str(testBuffer, s1.lengthT());
		testCond("c_str()", testBuffer == "Hello, World");
	}
	{
		char testBuffer[5];
		s1.c_str(testBuffer, 5);
		testCond("c_str()", testBuffer == "Hello");
	}
}

void loop() {}
