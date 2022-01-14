/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
M.Tech (Mathematics & Computing)
Assignment 0: Date 14 Jan 2022

Question No: 6
TheArmstrong number isa number that is equal tothe sum of cubes of its digits.  
Write the Cprogram to check whether the number is Armstrong or not.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int temp=x;
    int checker=0;
    int d;
    while(temp!=0){
        d=temp%10;
        checker+=(d*d*d);
        temp=temp/10;
    }
    if(x==checker){
        printf("Given number is an armstrong number");
    }
    else{
        printf("Given number is not an armstrong numer");
    }
}
