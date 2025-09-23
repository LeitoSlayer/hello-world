#include <stdio.h>

int main(){
  int myAge;
  int *ptr = &myAge;
  printf("%p",ptr);
  return 0;
}
