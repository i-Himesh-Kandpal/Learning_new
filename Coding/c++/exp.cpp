#include<iostream>

using namespace std;

int* prepareSomthing (int *n){
   
    int num = 23;
    n = &num;

    return n;
}

int main(){

 int n ;

 n = 2;

 cout<<prepareSomthing(&n);
 cout<<n;

 int arr[5];
 int* p = arr;
 cout<<p[10];

    return 0;
}

    
