// Time Complexity: O(log n)
// Space Complexity: O(log n) due to stack size in recursive implementation

#include <stdio.h> 
  
// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{   
    // while(l <= r){                   // WROTE MY ITERATIVE APPROACH AND THEN CHANGED TO RECURSIVE
    //     int mid = (l+r)/2;
    //     if(arr[mid] == x)
    //         return mid;
    //     else if(arr[mid] >= x)
    //         r = mid - 1;
    //     else 
    //         l = mid + 1;
    // }
    // return -1;

    if (l > r)              // BASE CONDITION
        return -1;

    int mid = (l + r)/2;

    if(arr[mid] == x)
        return mid;
    else if(arr[mid] >= x)
        return binarySearch(arr, l, mid - 1, x);
    else
        return binarySearch(arr, mid + 1, r, x);
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 