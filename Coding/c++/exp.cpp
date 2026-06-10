#include<iostream>
#include<vector>

using namespace std;
// "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"
int main(){

    //Two Sum

    vector<int> num = {2,3,5,4};
    int target = 0;

    cout<<"Enter target : ";
    cin>>target;

    for(int i = 0; i < num.size();i++){

        for(int j = i+1; j < num.size();j++){

       if( num[i] + num[j] == target && i != j){

        cout<<"\n---> "<<"num["<<i<<"]"<<" + "<<"num["<<j<<"] : "<<num[i]+num[j]<<endl;

            }
        }
   }

    return 0;
}
