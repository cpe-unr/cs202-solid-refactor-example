#include <climits>
//
// Created by Keith Lancaster on 4/15/21.
//

#include "WavManager.h"

void WavManager::exportData() {
    dataWriter.writeData();
}

void WavManager::loadBuffer() {

}

void WavManager::processBuffer() {
    processor.doTheThingYouDoNow();
}


