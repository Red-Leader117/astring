#include "astring.h"

Astr::Astr(const char* string)
{
    *m_length = strlen(string);
    *m_lengthT = *m_length + 1;

    *m_numBlocks = (*m_lengthT / StrBLock::BLOCK_SIZE) + 1;
    m_ptrs = new StrBLock* [*m_numBlocks];

    int currentBlock = 0;
    int currentBlockIndex = 0;
    m_ptrs[currentBlock] = new StrBLock();
    for (int i = 0; i < *m_lengthT; ++i){
        
        if(currentBlockIndex == StrBLock::BLOCK_SIZE){
            ++currentBlock;
            m_ptrs[currentBlock] = new StrBLock();
            currentBlockIndex = 0;
        }
        
        m_ptrs[currentBlock]->set(string[i], currentBlockIndex);
        

        ++currentBlockIndex;
    }
}
    
Astr::~Astr(){
    for (int i = 0; i < *m_numBlocks; ++i){
        delete m_ptrs[i];
        m_ptrs[i] = nullptr;
    }
    delete [] m_ptrs;
    delete m_length;
    delete m_lengthT;
    delete m_numBlocks;
}
