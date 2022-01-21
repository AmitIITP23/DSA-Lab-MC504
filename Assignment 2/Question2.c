/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
Ques2: Read a positive integer value, and compute the following sequence: If the number
is even, halve it; if it is odd, multiply by 3 and add 1. Repeat this process until the
value is 1, printing out each value. Finally print out how many of these operations
you performed. If the input value is less than 1, print a message containing the
word “Error”.
Time Complexity: if n is in form of 2^x then complexity would be O(logn) otherwise it cant be predicted.

*******************************************************************************/
#include<stdio.h>
int main(){
    int n;
    int ans=0;
    printf("Please enter Initial value: ");
    scanf("%d",&n);
    if(n<0){
        printf("Error");
        return 0;
    }
    printf("Initial value is %d: \n", n);
    while (n!=1)
    {
        ans+=1;
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3)+1;
        }
        printf("Next value is %d: \n", n);
    }
    printf("%d \n",ans);
    return 0;

}
