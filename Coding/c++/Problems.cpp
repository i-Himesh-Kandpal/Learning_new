#include<iostream>
#include<string>

using namespace std;

class student{
public:
    string name;
    int roll;

};

class teacher : public student {
public:
    int age;
};

class TA :  public student{
public:
    string dept;
};
    

int main(){

  TA t1;

  t1.name = "Himesh";
  t1.roll = 2356;
  t1.dept = "BCA";

  cout<<"Name : "<<t1.name<<endl;
  cout<<"Dept : "<<t1.dept<<endl;
  



    return 0;
}