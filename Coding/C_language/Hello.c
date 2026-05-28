#include <stdio.h>

void phw(int count){

  phw(count - 1);

  if(count == 0){
    return;
  }
  printf("hello world !");
}

int main() {
 
 phw(5);

    return 0;
}
