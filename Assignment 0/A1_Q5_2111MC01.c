/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
M.Tech (Mathematics & Computing)
Assignment 0: Date 14 Jan 2022

Question No: 5
Write a C program to display the sum of n natural numbers.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a natural number: ");
    scanf("%d",&x);
    
    int ans= x*(x+1)/2;
    printf("Sum: ");
    printf("%d",ans);
}
