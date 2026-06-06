#include<iostream>
#include<vector>

using namespace std;

int main(){

    int num[5] = {1,2,5,7,3};
    int target = 9;
    int temp;

    for(int i = 0; i <= num[4];i++){

        for(int j = 0; j<= num[4];j++){
       temp = num[i] + num[j];
        
        if(temp == target){
            cout<<"num["<<i<<"]"<<" + "<<"num ["<<j<<"]"<<" : "<<target<<endl;
        }
    } 
    }
  
    cout<<temp;
    
    return 0;
}

    
