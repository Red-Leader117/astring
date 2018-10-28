#ifndef ASTRING_H
#define ASTRING_H

#define DEBUG 1

#include "string.h"

#ifdef DEBUG
#include <Arduino.h>
#endif

class Astr {
private:
    int *m_length = nullptr;
    char *m_string = nullptr;

public:
    Astr(const char *string);
    ~Astr();

    char charAt(const int &n) const;
    int length() const { return *m_length; }
};

#endif
