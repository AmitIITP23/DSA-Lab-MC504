/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
M.Tech (Mathematics & Computing)
Assignment 0: Date 14 Jan 2022

Question No: 8
In the Fibonacci series,the next number is the sumof previous two numbersfor example 1, 1, 2,3, 5, 8, 13, 21 etc. 
Consider the first two numbers of the fibonacci series as 1 and 1.
Write a C program to tell only the last 2 digits of the Nth number of Fibonacci series.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int first=1;
    int second=1;
    int n;
    printf("Enter the number of terms in Fibonacci Series: ");
    scanf("%d",&n);
    int i;
    int temp;
    for (i=3; i<=n; i++){
        temp=first+second;
        //printf("%d ",temp);
        first=second;
        second= temp;
    }
    printf("\n");
    printf("the last 2 digits of the %dth number of Fibonacci series: %d",n,temp%100);
}
