/* 
YouTube Short - 
*/

#include <iostream>
using namespace std;

int main() {

    /* size of array */
    int n = 6;
    
    /* unsorted array */
    int arr[n] = {6,4,2,1,5,3};
    
    /* bubble sort algorithm */
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    /* sorted array */
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
        
    return 0;
}
