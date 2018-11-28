#ifndef ASTRING_H
#define ASTRING_H

#include <string.h>

class StrBLock {
public:
    static const int BLOCK_SIZE = 16;

private:
    char m_block[BLOCK_SIZE];

public:
    StrBLock(){}

    void set(char chr, int &index){
        m_block[index] = chr;
    }
};

class Astr
{
private:
    int *m_length = new int;
    int *m_lengthT = new int;
    int *m_numBlocks = new int;
    StrBLock** m_ptrs = nullptr;

public:
    Astr(const char* string);
    
    ~Astr();
};

#endif
