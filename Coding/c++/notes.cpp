#include<iostream>
#include<string.h>

using namespace std;

class student{
    private:
    long phn = 9041120005;

    public:
    string name;
    string department;
    int roll;

    student(string name, string department, int roll){
     this -> name = name;
     this -> department = department;
     this -> roll = roll;
    }

    student(student &obj){
        this->name = obj.name;
        this->department = obj.department;
        this->roll = obj.roll;
    }

    void getinfo(){
        cout<<"\nName : "<<name<<endl;
        cout<<"Department : "<<department<<endl;
        cout<<"Roll : "<<roll<<endl;
    }

    void change_department(string New_department){
        department = New_department;

        cout<<"\nDepartment changed : "<<endl;
    }


    long get(){
      return phn;
    }
};

class teacher{
    public:

    string name;
    int* salaryptr;

    teacher(string name, int salary){
     this->name = name;
      salaryptr = new int;
     *salaryptr = salary;
    }

    teacher(teacher &obj){
        this->name = obj.name;
        salaryptr = new int;
        *salaryptr = *obj.salaryptr;
    }

    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"salary : "<<*salaryptr<<endl;
    }

    ~teacher(){
        delete salaryptr;
        cout<<"\n------Done------\n";
    }
};

int main(){

    teacher t1("Hemu",2500000);
    // teacher t2(t1);

    t1.getinfo();
    // *(t2.salaryptr) = 400000;
    // t1.getinfo();


  student s1("himesh","B.C.A",12345);
  student s2(s1);

  s1.getinfo();
  s2.name = "himani";
  s1.getinfo();

cout<<endl;

 return 0;
}
