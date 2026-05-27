#include<iostream>
#include<string>

using namespace std;

class student{
public:

string name = "Himesh";

student(){
    cout<<"non parameterized"<<endl;
}

student(string name){
    this->name = name;

    cout<<"parameterized"<<endl;
}

};
    

int main(){

  
//   student s1;

   student s1("himesh");



    return 0;
}