/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
M.Tech (Mathematics & Computing)
Assignment 0: Date 14 Jan 2022

Question No: 1 Write a program in C to take three numbers from the user and print the largest and smallest number.
INPUT:First number: 12
     Second number: 56
     Third number: 94.7
     
OUTPUT:Largest number: 94.7
       Smallest number: 12

Assumption: All three numbers are different

*******************************************************************************/

#include <stdio.h>

int main()
{
    float firstNumber, secondNumber, thirdNumber;
    printf("Enter First Number: ");
    scanf("%f",&firstNumber);
    
    printf("Enter Second Number: ");
    scanf("%f",&secondNumber);
    
    printf("Enter Third Number: ");
    scanf("%f",&thirdNumber);
    
    if (firstNumber > secondNumber && firstNumber > thirdNumber){
        printf("Largest No: %.2f \n",firstNumber);
        if (secondNumber < thirdNumber){
            printf("Smallest No: %.2f \n",secondNumber);
        }
        else{
            printf("Smallest No: %.2f \n",thirdNumber);
        }
    }
    else if (secondNumber > firstNumber && secondNumber > thirdNumber){
        printf("Largest No: %.2f \n",secondNumber);
        if (firstNumber < thirdNumber){
            printf("Smallest No: %.2f \n",firstNumber);
        }
        else{
            printf("Smallest No: %.2f \n",thirdNumber);
        }
    }
    else {
        printf("Largest No: %f \n",thirdNumber);
        if (firstNumber < secondNumber){
            printf("Smallest No: %.2f \n",firstNumber);
        }
        else{
            printf("Smallest No: %.2f \n",secondNumber);
        }
    }
    
    
    
    
}
