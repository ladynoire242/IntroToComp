#include <stdio.h>

int main(void) {
  printf("%u", -1); 
  printf("%d", '0');  
  printf("%E", 123.45); 
  printf("%d", +1);
  printf("12%2d45", 3);  

  return 0;
}