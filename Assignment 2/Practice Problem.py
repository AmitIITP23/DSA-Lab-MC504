/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
Practice Problem: Given an array of integers containing duplicate elements. The task is to find the
sum of all odd occurring elements in the given array. That is the sum of all such
elements whose frequency is odd in the array.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    int ourArray[size];
    int frequency[size];
    int i=0;
    int value;
    while(i<size){
        scanf("%d",&value);
        ourArray[i]=value;
        frequency[i]=1;
        i+=1;
    }
    for(i=0;i<size;i++){
        int j;
        for (j=i+1;j<size;j++){
            if(ourArray[i]==ourArray[j] && frequency[j]!=-1){
                frequency[i]+=1;
                frequency[j]=-1;
            }
        }
    }
    i=0;
    int ans=0;
    while(i<size){
        if(frequency[i]%2==1 && frequency[i]>0){
            ans+=(ourArray[i]*frequency[i]);
        }
        i+=1;
    }
    printf("Answer is: %d\n",ans);
    return 0;
}
