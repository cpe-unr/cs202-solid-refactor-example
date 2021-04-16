//
// Created by Keith Lancaster on 4/15/21.
//

#ifndef SOLID_WAVMANAGER_H
#define SOLID_WAVMANAGER_H


#include <cstdint>
#include "CSVWriter.h"
#include "Processor.h"
#include "IProcessor.h"
#include <iostream>

class WavManager {
public:
    WavManager( IProcessor& processor,IDataWriter &dataWriter) :
        processor(processor),dataWriter(dataWriter) {
    }

private:
    std::string info;
    uint8_t *buffer = nullptr;
    IProcessor& processor;
    IDataWriter& dataWriter;
public:
    void exportData();
    void loadBuffer();
    void processBuffer();
};


#endif //SOLID_WAVMANAGER_H
