#include<iostream>
#include<vector>

using namespace std;

int main(){

    int i , j;
    int num[5] = {2,3,5,6,8};
    int target = 10;
     
    for( i = 0; i < 5;i++){

        int temp = 0;

        for( j = 0; j < 5;j++){
                  
       temp = 0;
       temp = num[i] + num[j]; 
         
         }
 cout<<temp<<endl;
          if(temp == target){

            cout<<"\nnum["<<i<<"]"<<" + "<<"num ["<<j<<"]"<<" : "<<num[i] + num[j]<<endl;

            break;
          } 
         
    }
  
    return 0;
}

    
