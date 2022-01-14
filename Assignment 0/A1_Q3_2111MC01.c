/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
M.Tech (Mathematics & Computing)
Assignment 0: Date 14 Jan 2022

Question No: 3
Write a program to check whether the number is odd or even.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Input X: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("The number %d is even",x);
    }
    else{
        printf("The number %d is odd",x);
    }
}
