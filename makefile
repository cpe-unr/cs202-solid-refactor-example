wavy: main.cpp wavmanager.o csvwriter.o processor.o datawriter.o
	g++ -std=c++11 main.cpp wavmanager.o csvwriter.o datawriter.o processor.o -o wavy

wavmanager.o: wavmanager.cpp wavmanager.h Processor.h CSVWriter.h
	g++ -std=c++11 -c wavmanager.cpp

processor.o: Processor.cpp Processor.h
	g++ -std=c++11 -c Processor.cpp

csvwriter.o: CSVWriter.cpp CSVWriter.h
	g++ -std=c++11 -c CSVWriter.cpp

datawriter.o: DataWriter.cpp DataWriter.h
	g++ -std=c++11 -c DataWriter.cpp -o datawriter.o