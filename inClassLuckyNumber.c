#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  char* playerName = '\0';
  printf("\nWhat is your name player? : ");
  scanf("%s",&playerName);

  printf("\nWhat is the maxium value for the lucky numbers?: ");
  int maxValue = 0;
  scanf("%d", &maxValue);

  srand(time(NULL));
  int playerLuckyNumber = rand()% maxValue+1;
  int computerLuckyNumber = rand()% maxValue+1;

  printf("_____________________________________________________________________________");
  printf("\n|\tPlayer's Lucky Number\t|");
  printf("\tComputer's Lucky Number\t|");
  printf("\t\tWinner\t\t\t\t|\n");
  printf("_____________________________________________________________________________");
  printf("\n|\t%d \t\t\t\t\t|",playerLuckyNumber);
  printf("\t\t%d\t\t\t\t\t|",computerLuckyNumber);
  
  //This code block prints out the results of the lucky numbers.
if( playerLuckyNumber > computerLuckyNumber)
  {
    printf("\t%s Wins!\t\t\t\t|\n",&playerName);
  }
    else if(playerLuckyNumber < computerLuckyNumber)
    {
      printf("\t\tComputer Wins!\t\t\t\t|\n");
    } //This if statement prints out whether the computer or the player wins.
  printf("_____________________________________________________________________________\n");

  
  return 0;
}