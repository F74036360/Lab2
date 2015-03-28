main6: BMI.o main6.o
	g++ -o BMI main6.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

main6.o: main6.cpp BMI.h
	g++ -c main6.cpp

clean:
	rm BMI*.o
