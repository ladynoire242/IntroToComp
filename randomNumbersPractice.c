#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
  printf("What is the max value for the random number: ");
  int maxValue = 0;
  scanf("%d",&maxValue);
  
  srand(time(NULL));
  int randomNumber1 = rand()% maxValue+1;
  int randomNumber2 = rand()% maxValue+1;

  int answer1 = randomNumber1 + randomNumber2;
  int answer2 = randomNumber1 - randomNumber2;
  int answer3 = randomNumber1 * randomNumber2;
  float answer4 = randomNumber1 / randomNumber2;
  
  printf("%d + %d = %d\n", randomNumber1,randomNumber2,answer1);
  printf("%d - %d = %d\n", randomNumber1,randomNumber2,answer2);
  printf("%d * %d = %d\n", randomNumber1,randomNumber2,answer3);
  printf("%d / %d = %g\n", randomNumber1,randomNumber2,answer4);
  
  return 0;
}