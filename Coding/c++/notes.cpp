#include<iostream>
#include<string.h>

using namespace std;

class bca {
    private:
        int phn[10] ;

    public:
         
        bca(string N, int r, float M){

            Name = N;
            roll = r;
            Marks = M;
        }

        void getinfo(){

            cout<<"\n----Student Info----\n";
            cout<<"Name : "<<Name<<endl;
            cout<<"Roll num : "<<roll<<endl;
            cout<<"Marks : "<<Marks<<endl;
        }

       string Name ;
       int roll;
       float Marks;
};


int main(){

    bca s1("himesh kandpal",8901,9.4);
    bca s2("tushar",8902,9.7);

    s1.getinfo();
    s2.getinfo();
     

   
    return 0;
}