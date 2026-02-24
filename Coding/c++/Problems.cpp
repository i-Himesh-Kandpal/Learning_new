#include<iostream>
#include<string>

using namespace std;



int main(){

//  int age = 10;
//  int &ref = age;

//  ref = 20;

//  cout<<"ref = "<<ref<<", age = "<<age<<endl;
  
   //  int *ref;
   //  int a = 10;
   //  int &ref = a;

   //  ref = 20;
   //  cout << "a = " << a << ", ref = " << ref << endl;

    int* *ptr;
    int age = 20;
    ptr = &age;

    cout<<*ptr;

    return 0;
}
