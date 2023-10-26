#include <stdio.h>

int main(void) {
  int length = 0;
  int width = 0;
  
  printf("Enter the length of the rectangle: ");
  scanf("%d",&length);
  printf("Enter the width of the rectangle: ");
  scanf("%d",&width);
  
  int perimeter = 2*(length + width);
  printf("The perimeter of the rectangle is %d",perimeter);  

  int area = length * width;
  printf("\nThe area of the rectangle is %d\n",area);  
  
  return 0;
}