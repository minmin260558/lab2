#include<string>
using namespace std;
class BMI {
public:
	BMI(float a,float b);
	void setBMI(float a,float b);
	void getBMI();
	float returnBMI();
	string getCategory();
private:
	float height;
	float mass;
	float bmi;
};
