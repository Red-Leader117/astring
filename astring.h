#ifndef ASTRING_H
#define ASTRING_H

#include "string.h"

class Astr {
private:
    int *m_length = new int;
    char *m_string = nullptr;

public:
    Astr(const char *string);
    ~Astr();

    char charAt(const int &n) const;
    int length() const;

};

#endif
