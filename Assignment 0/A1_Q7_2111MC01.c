/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
M.Tech (Mathematics & Computing)
Assignment 0: Date 14 Jan 2022

Question No: 7
Given a number, Write a C program to print the reverse of the number.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Input: %d\n",x);
    int rev=0;
    int mul=1;
    int d;
    while(x!=0){
        d=x%10;
        rev=(rev*10)+d;
        x=x/10;
    }
    printf("Output: %d",rev);
}
