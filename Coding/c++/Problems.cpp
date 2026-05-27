#include<iostream>
#include<string>

using namespace std;

class person {
    public:
    string name;
    int age;

    person(){
        cout<<"hello, i am parent contructor"<<endl;
    }

    person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void get_info(){
    cout<<"Name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
   }

~person(){
    cout<<"person deconstructor!"<<endl;
}

};

class student : public person{
public:

int roll;

student(){
    cout<<"hello, i am child contructor"<<endl;
}

 student(int roll ) : person(name , age){
    this->roll = roll;

 }

void getinfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"roll : "<<roll<<endl;
}

~student(){
    cout<<"deconstructor student !"<<endl;
}

};

int main(){

    person p1("himesh",20); 
    student s1(234); 
    //  student s2;
     
    //  s2.name = "himesh";
    //  s2.roll = 23432;
    //  s2.age = 23;

    p1.get_info();
    cout<<"\n--------------------------------------\n";
    s1.getinfo();



    return 0;
}