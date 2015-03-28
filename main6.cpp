#include <iostream>
#include <string>
#include <fstream>//to use files
#include <cstdlib>//about exit command
#include "BMI.h"//including BMI class
using namespace std;
int main() {
	BMI fat;//create a object of BMI class named fat
	double h,m,a;//to read data from file.in
	string b;//to get the return string of category and output it to file.out
	ifstream inFile("file.in",ios::in);
    if(!inFile) {
        cerr<< "Failed opening\n"<<endl;
        exit(1);
    }
    ofstream outfile("file.out",ios::out);
	if(!outfile){
		cerr<<"Failed opening\n"<<endl;
		exit(2);
	}  
	while(inFile>>h>>m){//first read data will be allocated in variable h and weight will be the value of m
		fat.getdata(h,m);//call function from class BMI
		a=fat.vbmi(h,m);//BMI value
		b=fat.sbmi();//BMI category
		if (h==0||m==0)break;//to prevent functions get a zero ornan value
		outfile<<a<<"\t"<<b<<endl;//output to file.out
	}
	cout<<endl;
	return 0;
}
