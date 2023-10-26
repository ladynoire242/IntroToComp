#include <stdio.h> 
int main(void) { 
  int fav_number = 0;       
  int birth_year = 0;      
  printf("Enter your favorite number: ");       
  scanf("%d", &fav_number);    
  printf("Enter your birth year: ");      
  scanf("%d", &birth_year);  
  
  int integer1 = 0;
  int integer2 = 0;
  printf("\nEnter a number: ");
  scanf("%d",&integer1);
  printf("Enter another number: ");
  scanf("%d",&integer2);
  
  int sum = integer1 + integer2;  
  printf("\nSum of the two entered numbers are: %d\n",sum); 
  
  return 0;
} 