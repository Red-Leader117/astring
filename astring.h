#ifndef ASTRING_H
#define ASTRING_H

class Astr {
private:
    int m_length;

public:
    Astr(const int &length) : m_length(length) {}

    int length() const
    {
        return m_length;
    }
};

#endif
