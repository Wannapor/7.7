#include <stdio.h>

int main(void) {
  char name[100];
  int temp[7][2] = {40,30,39,28,38,27,37,26,36,25,35,24,42,23};
  int Max, Min;
  float SumH, SumL;
  int midH, midL;
  int row,column,tale,i,num;
  printf("Enter your name : ");
  scanf("%s",name);
  printf("Hello %s\n",name);
  printf("********************************\n");
 
  for(i=0; i<14; i++)
  {
  if(Min>temp[i][i])
  Min=temp[i][i];
 
  else if (Max<temp[i][i])
  Max=temp[i][i];
  }
  printf("High Temp Monday : %d\n",temp[i][i]);
  printf("Low Temp Monday : %d\n",temp[i][i]);
 
 
  return 0;
}