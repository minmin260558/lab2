#include "a.h"

Bmi::Bmi(float a,float b){
	setBmi(a,b);
	}

void Bmi::setBmi(float a,float b){
	bmi = 0;
	height = a;
	mass = b;	

	}

void Bmi::getBmi(){
         bmi =(int) ((mass/(height*height))*100.0+0.5)/100.0;

                }

float Bmi::returnBmi(){
         return bmi;

                }

string Bmi::getCategory(){
 		        if(bmi<15)
                	        return "Very severely underweight";
                        else if(bmi<16||bmi==15)
                                return "Severely underweight";
                        else if(bmi<18.5||bmi==16)
                                return "Underweight";
                        else if(bmi<25||bmi==18.5)
                                return "Normal";
                        else if(bmi<30||bmi==25)
                                return "Overweight";
                        else if(bmi<35||bmi==30)
                                return "Obese Class I (Moderately obese)";
                        else if(bmi<40||bmi==35)
                                return "Obese Class II (Severely obese)";
                        else if(bmi==40||bmi>40)
                                return "Obese Class III (Very severely obese)";

                }
