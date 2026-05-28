#include<iostream>
#include<string>

using namespace std;

//Static Keywords
class A{
    public:
    A(){
        cout<<"Constructor"<<endl;
    }

    ~A(){
        cout<<"Destructor"<<endl;
    }
};

int main(){

if(true){
    static A a1;
}

cout<<"\n-------------------";

return 0;
}

