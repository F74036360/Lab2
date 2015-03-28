#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "BMI.h"
using namespace std;
int main() {
	BMI fat;
	double h,m,a;
	string b;
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
	while(inFile>>h>>m){
		fat.getdata(h,m);
		a=fat.vbmi(h,m);
		b=fat.sbmi();
		if (h==0||m==0)break;
		cout<<a<<"\t"<<b<<endl;
		outfile<<a<<"\t"<<b<<endl;
	}
	cout<<endl;
	return 0;
}
