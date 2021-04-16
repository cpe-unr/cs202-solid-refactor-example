//
// Created by Keith Lancaster on 4/15/21.
//

#ifndef SOLID_CSVWRITER_H
#define SOLID_CSVWRITER_H


#include "IDataWriter.h"

class CSVWriter : public IDataWriter {
private:
public:
    void setFileName();

    void writeData() override ;
};


#endif //SOLID_CSVWRITER_H
