/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
M.Tech (Mathematics & Computing)
Assignment 0: Date 14 Jan 2022

Question No: 2
Given two numbers, write a C program to swap the given numbers.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter Y: ");
    scanf("%d",&y);
    printf("Original X and Y\n");
    printf("X = %d, Y= %d \n",x,y);
    
    int temp;
    temp=x;
    x=y;
    y=temp;
    
    printf("After Swapping: \n");
    printf("X= %d, Y= %d",x,y);
}
