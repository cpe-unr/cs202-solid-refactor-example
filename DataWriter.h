//
// Created by Keith Lancaster on 4/15/21.
//

#ifndef SOLID_DATAWRITER_H
#define SOLID_DATAWRITER_H


#include "IDataWriter.h"

class DataWriter : public IDataWriter {
public:
    void writeData() override;
};


#endif //SOLID_DATAWRITER_H
