#include "astring.h"

Astr::Astr(const char *string){
    *m_length = strlen(string);
    m_string = new char[*m_length + 1];
    for(int index = 0; index < (*m_length - 1); ++index){
        m_string[index] = string[index];
    }
    m_string[*m_length] = '\0';
}

Astr::~Astr(){
    delete m_length;
    delete[] m_string;

    // Shouldn't need to do this, but just cover ourselves
    m_length = nullptr;
    m_string = nullptr;
}

char Astr::charAt(const int &n) const {
    if (n < 0 || n >= *m_length - 1){
        return '\0';
    } else {
        return *(m_string + n);
    }
}

int Astr::length() const {
    return *m_length;
}