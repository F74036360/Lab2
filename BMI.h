#include <string>
using namespace std;
class BMI{
	private:
	    double height,weight;
	public:
	    double vbmi(double cm,double kg);//get value of BMI
	    string sbmi();//get category of BMI
            void getdata(double h,double m);//get data from file.in
};
