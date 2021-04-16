#include <iostream>
#include "WavManager.h"
#include "DataWriter.h"

int main() {
    Processor p;
    DataWriter dw;
    WavManager mgr(p,dw);
    mgr.processBuffer();
    return 0;
}
