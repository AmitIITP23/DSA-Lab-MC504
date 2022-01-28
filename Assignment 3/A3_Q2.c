/******************************************************************************

Name: Amit Kumar Singh
Roll No: 2111MC01
Question: Implement the Merge sort algorithm in C. 
Take the input array to be ofhomogeneous numeric type. 
Input should be user defined.Also comment on the time and space complexity of the algorithm.

Time Complexity: O(n*(log n))
Space Complexity: O(n)

*******************************************************************************/

#include <stdio.h>
void merge(int arr[], int p, int q, int r){
    //Make two temporary arrays L & M of size n1 & n2 respectively
    // p & r are extreme points and q is mid point
    int n1=q-p+1;
    int n2=r-q;
    int L[n1], M[n2];
    for (int i = 0; i < n1; i++){
        L[i] = arr[p + i];
        
    }
    for (int j = 0; j < n2; j++)
    {
        M[j] = arr[q + 1 + j];
        
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    //Place elements at their correct position accordingly
    while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  //Store remaining elements as it is once we exhaust all elements of either L or M
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}
int main()
{
    printf("Enter size of array: ");
    int size;
    scanf("%d",&size);
    int arr[size];
    int index=0;
    do{
        scanf("%d", &arr[index++]);
        
    }
    while (getchar() != '\n' && index < size);
    arr[size];
    printf("Your array is: ");
    for (int i = 0; i < index; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    mergeSort(arr, 0, size - 1);

    printf("Sorted array: \n");
    for (int i = 0; i < index; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
    
}
