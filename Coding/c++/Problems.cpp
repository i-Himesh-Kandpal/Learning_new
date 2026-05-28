#include<iostream>
#include<string>

using namespace std;

//PolyMorphism
class parent{
    public:

    void getinfo(){
        cout<<"kaise ho"<<endl;
    }
};

class child : public parent{
    public:

    void getinfo(){
        cout<<"kaisn"<<endl;
    }
};

int main(){

    // parent p1;
    child c1;

    c1.getinfo();

    return 0;
}