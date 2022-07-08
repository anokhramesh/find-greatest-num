#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1;// int type variable num1
    int num2;// int type variable num2
    int num3;// int type variable num3
    int num4;// int type variable num4
    printf("Enter num1\n");//prompt user to Enter the value of num1
    scanf("%d",&num1);// store the value of user input to variable num1
    printf("Enter num2\n");//prompt user to Enter the value of num2
    scanf("%d",&num2);// store the value of user input to variable num2
    printf("Enter num3\n");//prompt user to Enter the value of num3
    scanf("%d",&num3);// store the value of user input to variable num3
    printf("Enter num4\n");//prompt user to Enter the value of num4
    scanf("%d",&num4);// store the value of user input to variable num4

if(num1 > num2 && num1>num3 && num1 > num4 )//checking num1 is greater than num2 , num3 and num4
{
    printf("num1 is greatest\n");// display the result on console
}
if(num2 > num1 && num2>num3 && num2 > num4)//checking num2 is greater than num1,num3 and num4
{
    printf("num2 is greatest\n");// display the result on console
}
if(num3 > num1 && num3>num2 && num3 > num4)//checking num3 is greater than num1,num2 and num4
{
    printf("num3 is greatest\n");// display the result on console
}
if(num4 > num1 && num4 > num2 && num4 > num3)//checking num4 is greater than num1,num2 and num3
{
    printf("num4 is greatest\n");// display the result on console}
}
    return 0;
}
