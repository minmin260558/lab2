#include<string>
using namespace std;
class Bmi {
public:
	Bmi(float a,float b);
	void setHeight(float a);
	void setMass(float b);	
	void getBmi();
	float getHeight();
	float getMass();
	float returnBmi();
	string getCategory();
private:
	float height;
	float mass;
	float bmi;
};
