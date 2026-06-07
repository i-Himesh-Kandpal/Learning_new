#include<iostream>
#include<vector>

using namespace std;

int main(){

    //Two Sum

    vector<int> num = {2,3,5,4,-5,-8,9};
    int target = 0; 

    cout<<"Enter target : ";
    cin>>target;
    
    int i , j;

    for( i = 0; i < num.size();i++){

        for( j = 0; j < 3;j++){

       if(num[i] + num[j]== target){
        
        cout<<"\n---> "<<"num["<<i<<"]"<<" + "<<"num["<<j<<"] : "<<num[i]+num[j]<<endl;

          }
       }
    }
  
    return 0;
}

    
