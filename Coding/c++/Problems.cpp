#include<iostream>
#include<string>

using namespace std;

//Abstract
class shape{
 virtual void draw() = 0;
};

class circle : public shape{
public:
    void draw(){
        cout<<"Drawing a circle"<<endl;
    }
};

int main(){

    circle c1;

    c1.draw();
}

