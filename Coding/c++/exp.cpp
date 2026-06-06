#include<iostream>
#include<vector>

using namespace std;

int main(){

    int num[5] = {1,2,5,7,3};
    int target = 9;

    for(int i = 0; i <= num[4];i++){

        for(int j = 0; j<= num[4];j++){
      num[i] + num[j] == target;
        
        if(num[i]+num[j] == target){
            cout<<"num["<<i<<"]"<<" + "<<"num ["<<j<<"]"<<" : "<<target<<endl;
        }
    } 
    }
  
    return 0;
}

    
