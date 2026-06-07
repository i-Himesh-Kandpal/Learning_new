#include<iostream>
#include<vector>

using namespace std;

int main(){

    //Two Sum

    vector<int> num = {2,3,5,4};
    int target = 0; 

    cout<<"Enter target : ";
    cin>>target;

    for(int i = 0; i < num.size();i++){

      int Target_possibilty = 0;
      
        for(int j = i+1; j < num.size();j++){

        cout<<"j : "<<j<<" "<<endl;
        cout<<"\n---> "<<"num["<<i<<"]"<<" + "<<"num["<<j<<"] : "<<num[i]+num[j]<<endl;

        cout<<"-----"<<endl;
       if( num[i] + num[j] == target && i != j){

       Target_possibilty++;
        cout<<"\n---> "<<"num["<<i<<"]"<<" + "<<"num["<<j<<"] : "<<num[i]+num[j]<<endl;
         
    }
          cout<<"===="<<endl;
       
        }
       
        if(Target_possibilty > 0){
        break;
       
    }
    
}
  
    return 0;
}

    
