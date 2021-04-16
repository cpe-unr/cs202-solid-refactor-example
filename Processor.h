//
// Created by Keith Lancaster on 4/15/21.
//

#ifndef SOLID_PROCESSOR_H
#define SOLID_PROCESSOR_H


#include "IProcessor.h"

class Processor : public IProcessor{
public:
    void doTheThingYouDoNow() override;
};


#endif //SOLID_PROCESSOR_H
