#include<iostream>
#include<string>

using namespace std;

int TotalNum(int *arr[],int size){
   
  int total = 0 ;

  for(int i = 0; i < size; i++){
      total += *(arr[i]);
  }

  return total;

}

void check(){
  int total = 0;

  cout<<&total<<endl;
}

int main(){

 int number[10] = {1,20,23,24,23,24,2,4,23,42};

  for(int i = 0; i < 10; i++){
   cout<<number[i]<<endl;
  }

 cout<<"\n"<<TotalNum(&number,10)<<endl;

 check();
 check();
 check();
 check();
 check();

    return 0;
}