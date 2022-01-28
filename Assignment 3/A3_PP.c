/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
Question: Given an array A[ ] you have to find the number of subarrays whose sum is aneven number.

Time Complexity: O(n*n)

**************************************************************************************/
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int A[size];
    printf("Enter the elements of array:");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    
    int ans = 0;

    for (int i=0; i<size; i++)
    {
        int sum = 0;
        for (int j=i; j<size; j++)
        {
            sum = sum + A[j];
            if (sum % 2 == 0)
                    ans++;
        }
    }
     
     printf("Ans is: %d",ans);
          
    return 0;
}