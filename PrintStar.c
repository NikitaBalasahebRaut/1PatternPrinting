/*
 Problem statement :
 Write a program which accept number from user and display below patternwill display b:
 
 Input :    5
 Output :   *   *   *   *   *
 
 Input : 2
 Output : *    *
 
 Input : -6
 Output : * *   *       *   *   *
 
 */

/*
        iNo -> 6

        1   2   3   4   5   6

        *   *   *   *   *   *
*/

void Pattern(int iValue)
{
  int iCnt = 0;
  
  if(iValue < 0)
  { 
    iValue = -iValue;
  }
  
  for(iCnt = 1; iCnt <= iValue; iCnt++)
  {
    printf("* \t");
   }
}

#include<stdio.h>

int main()
{
 int no = 0;
 
 printf("Enter The Number\n");
 scanf("%d",&no);
 
 Pattern(no);


return 0;
}