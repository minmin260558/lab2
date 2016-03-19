#include<iostream>
#include<fstream>
#include<cstdlib>
#include"a.h"
using namespace std;
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
                        BMI bmi1(a,b);
                        bmi1.getBMI();
                        outFile<<bmi1.returnBMI()<<"\t"<<bmi1.getCategory()<<endl;


                }
        }

        inFile.close();
        outFile.close();
        return 0;
}
