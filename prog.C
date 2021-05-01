#include<stdio.h>
#include <math.h>
int main(){
  int arr[7],s=0,i=0,c,d;
  printf("Think a number between 0 to 1000 and I will recover that with asking 9 questions \n" );
  printf("Question 1: Devide that number by 2 if the result is 0 enter 0 if answer is 1 enter 1\n" );
  scanf("%d\n", &arr[0] );
  printf("Question 2: Devide that number by 4 if the result is less or equal to 2 enter 0 else 1\n" );
  scanf("%d\n", &arr[1] );
  printf("Question 3: Devide that number by 8 if the result is less or equal to 4 enter 0 else 1\n");
  scanf("%d\n", &arr[2] );
  printf("Question 4: Devide that number by 16 if the result is less or equal to 8 enter 0 else 1\n" );
  scanf("%d\n", &arr[3] );
  printf("Question 5: Devide that number by 32 if the result is less or equal to 16 enter 0 else 1\n" );
  scanf("%d\n", &arr[4] );
  printf("Question 6: Devide that number by 64 if the result is less or equal to 32 enter 0 else 1\n" );
  scanf("%d\n", &arr[5] );
  printf("Question 7: Devide that number by 128 if the result is less or equal to 64 enter 0 else 1\n" );
  scanf("%d\n", &arr[6] );
  printf("Question 8: Devide that number by 256 if the result is less or equal to 128 enter 0 else 1\n" );
  scanf("%d\n", &arr[7] );
  printf("Question 9: Devide that number by 512 if the result is less or equal to 256 enter 0 else 1\n" );
  scanf("%d\n", &arr[8] );
  printf("Question 10: Devide that number by 512 if the result is less or equal to 256 enter 0 else 1\n" );
  scanf("%d\n", &arr[9] );
  for(i=0;i<10;i++){
    c=pow(2,i);
    d=arr[i];
    s=s+(c*d);
  }
  printf("Your number is %d\n", s );
  return(0);
}
