#include <iostream>
#include <string>

using namespace std;
 
int main(){

  // Lamda 
  auto preparedchai = [](int cups){
    cout << "preparing "<< cups << " cups of tea"<<endl;
  };    

  preparedchai(4);
 

  return 0;
}
