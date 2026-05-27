#include<iostream>
#include<vector>

using namespace std;

int main(){

   vector <int> vec = {1,2,3,4,5};

   vec.push_back(2);
   vec.pop_back();

   for(int i : vec){
    cout<<i;
   }
  cout<<"\n"<<vec.capacity();
   cout<<endl;

    return 0;
}

    
