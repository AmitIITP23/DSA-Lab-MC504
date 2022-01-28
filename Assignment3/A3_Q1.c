/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
Question: You are given a string S of length N, Each character of the string is either 0 or 1.
Now, you need to select the largest substring in which the count of 0 in the string ismore than the count of 1. 
Print the maximum possible length of the subarray in theoutput.

Time Complexity: O(n*n)


*******************************************************************************/
#include<stdio.h>
int main(){

    printf("Enter size of array: ");
    int size;
    scanf("%d",&size);
    int s[size];
    int index=0;
    do{
        scanf("%d", &s[index++]);
        
    }
    while (getchar() != '\n' && index < size);
    s[size];
    printf("Your array is: ");
    for (int i = 0; i < index; i++) {
        printf("%d  ", s[i]);
    }
    printf("\n");
    
    int zero=0;
    int one = 0;
    int i=0;
    int j=0;
    int ans=0;
    int temp=0;
    for (i=0;i<size;i++){
        for(j=i;j<size;j++){
            if(s[j]==0){
                zero+=1;
                // printf("%c zero",s[j]);
            }
            if(s[j]==1){
                one+=1;
                // printf("%c one",s[j]);
            }
            if(zero>one && j-i+1>ans){
                ans=j-i+1;
                // printf("%d ",temp);
                
            }
            // if(j-i+1>ans){
            //     ans=j-i+1;
            // }
            
        }
        zero=0;
        one=0;
        temp=0;
    }
    printf("%d ",ans);
    return 0;
}