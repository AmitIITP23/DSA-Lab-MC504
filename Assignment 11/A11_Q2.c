#include<stdio.h>

struct rod
    {
        int price;
        int size;
        float pricePerUnit;
    };
void swap(struct rod* a, struct rod* b)
{
    struct rod t = *a;
    *a = *b;
    *b = t;
}
int partition(struct rod a[],int low,int high){
    struct rod pivot=a[high];
    int i=low-1;
    for (int j=low;j<=high-1;j++){
        if(a[j].pricePerUnit<pivot.pricePerUnit){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);

}
void quickSort(struct rod a[], int low, int high){
    if(low<high){
        int pi=partition(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}

int main(){
    int sizeOfArray;
    printf("Enter size of Array\n");
    scanf("%d",&sizeOfArray);
    
    struct rod data[sizeOfArray];
    int i=0;
    printf("Enter space separated each entry one by one and then press enter\n");
    for(i=0;i<sizeOfArray;i++){
        scanf("%d",&data[i].size);
        scanf("%d",&data[i].price);
        
        data[i].pricePerUnit=(float)(data[i].price)/(data[i].size);

    }

    
    quickSort(data,0,sizeOfArray-1);
    printf("Sorted according to price per unit\n");
        for(i=0;i<sizeOfArray;i++){
        printf("%d ",data[i].price);
        printf("%d ",data[i].size);
        printf("%f",data[i].pricePerUnit);
        printf("\n");

    }
    int index=sizeOfArray-1;
    int finalAns=0;
    int capacity=8;
    while (capacity>0){
        if(data[index].size<=capacity){
            capacity-=data[index].size;
            finalAns+=data[index].price;
            
        }



        index--;
        
    }
    printf("Maximum Profit: %d",finalAns);
    

    
    return 0;
    

}