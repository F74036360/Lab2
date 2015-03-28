#include <iostream>
#include <string>
#include "BMI.h"
using namespace std;

double BMI::vbmi(double cm,double kg)
		{
			double vbmi;
			vbmi=kg/((cm/100)*(cm/100));
			return vbmi;
		}

string BMI::sbmi()
		{   
		    double v=weight/(height*height/10000);
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

void BMI::getdata(double h,double m){
			height=h;
			weight=m;
		}	

