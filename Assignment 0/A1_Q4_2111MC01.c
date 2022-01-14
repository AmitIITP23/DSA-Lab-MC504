/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
M.Tech (Mathematics & Computing)
Assignment 0: Date 14 Jan 2022

Question No: 4
Given the temperature in Fahrenheit, write a C program to display it in degree celsius. 
Use the standard mathematical formula for conversion of temperature.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float Fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheit);
    printf("In Fahrenheit: %.2f \n",Fahrenheit);
    float Celcius;
    Celcius = (Fahrenheit - 32.0) * 5.0 / 9.0;
    printf ("In Celcius: %.4f", Celcius);
}
