
#include<iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1); 
  
    for (int j = low; j <= high- 1; j++) 
    { 

        if (arr[j] <= pivot) 
        { 
            i++;
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("n"); 
} 
  
int main() 
{ 
    int arr[1000]; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    

    for (int i = 0; i < 1000; i++) {
        int random_integer = rand()%(100-0 + 1) + 0;;
        arr[i] = random_integer;
    }
    

    quickSort(arr, 0, n-1); 
    printf("Sorted array: n"); 
    printArray(arr, n); 
    return 0; 
} 