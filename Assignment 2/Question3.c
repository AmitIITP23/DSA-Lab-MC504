/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
Ques3: Write a C program to delete all the duplicates in an integer array. Note that after
deleting a duplicate all the numbers will be shifted one position to the left.
Also compute the time complexity for the code written by you in Big O notation.
Write this as a comment in your source code file.

*******************************************************************************/
#include<stdio.h>
int main(){
    int size;
    int ourArray[size];
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    int i=0;
    int value;
    printf("Enter %d space separated integers: \n",size);
    while (i<size)
    {
        scanf("%d",&value);
        ourArray[i]=value;
        i+=1;
    }
    printf("Original Array is:  \n");
    for (i=0;i<size;i++){
        printf("%d ", ourArray[i]);
    }
    for(i=0;i<size;i++){
        int j;
        for (j=i+1;j<size;j++){
            if(ourArray[i]==ourArray[j]){
                int k;
                for(k=j;k<size-1;k++){
                    ourArray[k]=ourArray[k+1];
                }
                size-=1;
                j-=1;
            }
        }
    }
    printf("\n");
    printf("After removing duplicates array will be:  \n");
    for (i=0;i<size;i++){
        printf("%d ", ourArray[i]);
    }
    
    return 0;
}
