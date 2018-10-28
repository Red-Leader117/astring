#include "astring.h"

#define DEBUG 1

Astr::Astr(const char *string){
    int *m_length = new int;
    *m_length = strlen(string);
#ifdef DEBUG
	Serial.print("Length: ");
	Serial.println(*m_length);
#endif
    char *m_string = new char[*m_length + 1];
    for(int index = 0; index < *m_length - 1; ++index){
        m_string[index] = string[index];
#ifdef DEBUG
	    Serial.print(string[index]);
	    Serial.print(' ');
	    Serial.println(m_string[index]);
#endif
    }
    m_string[*m_length] = '\0';
}

Astr::~Astr(){
    delete m_length;
    delete[] m_string;

    m_length = nullptr; // Shouldn't need to do this, but just cover ourselves
    m_string = nullptr;
#ifdef DEBUG
	Serial.println("Destroyed");
#endif
}

char Astr::charAt(const int &n) const {
    if (n < 0 || n >= *m_length - 1){
        return '\0';
    } else {
        return m_string[n];
    }
}