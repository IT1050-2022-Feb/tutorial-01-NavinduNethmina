/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark01, mark02;
   float average;
   
   printf("enter mark 01:");
   scanf("%d", &mark01);
   
  printf("enter mark 02:");
  scanf("%d", &mark02);
   
   average = (mark01 + mark02)/2.0;
   
   printf("average: %f ",average );
  
  return 0;
}

