main7: timer7.o main7.o
	g++ -o main7 main7.o timer7.o

timer7.o: timer7.cpp timer7.h
	g++ -c timer7.cpp

main7.o: main7.cpp timer7.h
	g++ -c main7.cpp

clean:
	rm main7 *.o
