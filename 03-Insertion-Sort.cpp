#include <iostream>
using namespace std;

int main() 
{
    /* size of array */
    int n = 6;
    
    /* unsorted array */
    int arr[n] = {6,5,2,4,1,3};
    
    /* insertion sort */
    for (int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0 && temp<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    /* sorted array */
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
 
    return 0;
}

// YouTube - Code Mine
