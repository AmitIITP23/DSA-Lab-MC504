#include<stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for (int j=low;j<=high-1;j++){
        if(a[j]<pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);

}
void quickSort(int a[], int low, int high){
    if(low<high){
        int pi=partition(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}

int main(){
    int sizeOfGreedArray;
    printf("Enter size of Greed Array: ");
    scanf("%d",&sizeOfGreedArray);
    printf("Enter space separated greed values: ");
    int greed[sizeOfGreedArray];
    int i=0;
    for(i=0;i<sizeOfGreedArray;i++){
        scanf("%d",&greed[i]);
    }
    int noOfCookies;
    printf("Enter no of cookies: ");
    scanf("%d",&noOfCookies);
    int size[noOfCookies];
    printf("Enter size of cookies(space separated): ");
    for(i=0;i<noOfCookies;i++){
        scanf("%d",&size[i]);
    }
    quickSort(greed,0,sizeOfGreedArray-1);
    quickSort(size,0,noOfCookies-1);
    int x=0;
    int y=0;
    int finalAns=0;
    while (x<sizeOfGreedArray && y<noOfCookies)
    {
        if (greed[x]<=size[y]){
            x++;
            y++;
            finalAns++;
        }
        else{
            y++;
        }
        
    }
    printf("Final Answer: %d ",finalAns);
    
    

    
    return 0;
}