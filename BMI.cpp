#include <iostream>
#include <string>//because of using type string
#include "BMI.h"//which contains BMI class
using namespace std;

double BMI::vbmi(double cm,double kg)//function to get BMI value
		{
			double vbmi;
			vbmi=kg/((cm/100)*(cm/100));//to calculate tje BMI value in type double
			return vbmi;
		}

string BMI::sbmi()//function to get BMI category
		{   
		    double v=weight/(height*height/10000);//value of BMI
		    string category;
		    if(v<15){
		    	category="Very severely underweight";
		    }
		    else if(v<16&&v>15){
		    	category="Severely underweight"; 
		    }
		    else if(v<18.5&&v>16){
		    	category="Underweight"; 
		    }
		    else if(v<25&&v>18.5){
		    	category="Normal"; 
		    }
		    else if(v<30&&v>25){
		    	category="Overweight"; 
		    }
		    else if(v<35&&v>30){
		    	category="Obese Class I (Moderately obese)"; 
		    }
		    else if(v<40&&v>35){
		    	category="Obese Class II (Severely obese)"; 
		    }
		    else category="Obese Class III (Very severely obese)";
		    return category;
		}	

void BMI::getdata(double h,double m){//read data from file.in and usd them in functions
			height=h;
			weight=m;
		}	

