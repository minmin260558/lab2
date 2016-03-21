#include<string>
using namespace std;
class Bmi {
public:
	Bmi(float a,float b);
	void setBmi(float a,float b);
	void getBmi();
	float returnBmi();
	string getCategory();
private:
	float height;
	float mass;
	float bmi;
};
