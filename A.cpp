#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

class Bmi{
	
	public:
		Bmi(float a,float b){
			setHeight(a);
			setMass(b);
   		 }
		
		void setHeight(float a){
			height = a;
		}
		void setMass(float b){
			mass = b;	
		}
		void getBmi(){
			bmi =(int) ((mass/(height*height))*100.0+0.5)/100.0;	
			
		}
		float getHeight(){
			return height;
		}
		float getMass(){
			return mass;
		}
		float returnBmi(){
			return bmi;

		}
		string getCategory(){
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
  
	private:	
		float height;
		float mass;
		float bmi;
    
    
};




int main(){

	float a,b;
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);

	}
	while(inFile>>a>>b){
		if(a==0&&b==0)
			break;
		else{
			a=a/100;
			Bmi bmi1(a,b);
			bmi1.getBmi();
			outFile<<bmi1.returnBmi()<<"\t"<<bmi1.getCategory()<<endl;
			
		
		}
	}
	
	inFile.close();
	outFile.close();	
	return 0;
}
