#include<iostream>
#include<string>

using namespace std;

//code for New keywords
class Tea{
    protected: 
    string TeaName;
    int servings;

    public:
    Tea (string n , int serve) : TeaName(n),  servings(serve){
        cout<<"-----------"<<"\n"<<"Hello i am a constructor !"<<endl;
    }

    virtual void getInfo () const{
          cout<<"TeaName : "<< TeaName << endl;
        cout<<"Servings : "<<servings<<endl;
    }

    ~Tea(){
         cout<<"TeaName : "<< TeaName << endl;
        cout<<"Servings : "<<servings<<endl;
    }

};

class GreenTea : public Tea{
    public:

    GreenTea(int serve) : Tea("GreenTea", serve){
       cout<<"\n1-------------\nHello i am GreenTea constructor !"<<endl;
    }

    void getInfo () const override{
         cout<<"TeaName : "<< TeaName << endl;
        cout<<"Servings : "<<servings<<endl;
    }

    ~GreenTea(){
        cout<<"\n------------\nHello i am GreenTea destructor !"<<endl;
    }
};

class MasalaTea : public Tea{
    public:

    MasalaTea(int serve) : Tea("MasalaTea",serve){
        cout<<"\n-------------\nHello i am MasalaTea constructor !"<<endl;
    }

     void getInfo () const override final{
         cout<<"TeaName : "<< TeaName << endl;
        cout<<"Servings : "<<servings<<endl;
    }

    ~MasalaTea (){
        cout<<"\n------------\nHello i am MasalaTea destructor !"<<endl;
    }
};

// Final Overide

// class spicyTea : public MasalaTea{
//     spicyTea(int serve):MasalaTea("MasalaTea",serve){
//         cout<<"\n-------------\nHelspicyTea constructor !"<<endl;
//     }

//      void getInfo () const override{
//          cout<<"TeaName : "<< TeaName << endl;
//         cout<<"Servings : "<<servings<<endl
//      }
// };

int main(){

    Tea* t1 = new GreenTea(4);
    Tea* t2 = new MasalaTea(2);

    cout<<"\n____________________\n"<<endl;
    t1 -> getInfo();
    t2 -> getInfo();

    cout<<"\n____________________\n"<<endl;
    delete t1;
    delete t2;

    return 0;
}