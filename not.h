#ifndef __NB_NOT
#define __NB_NOT

#include "mbed.h"
#include "nworkbench.h"

class nBlock_NOT: public nBlockSimpleNode<1> {
public:
    void triggerInput(nBlocks_Message message);
};

#endif
