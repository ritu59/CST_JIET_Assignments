
#include <iostream> 
using namespace std; 
int findSingle(int arr[], int arr_size) 
    { 
        int result= arr[0]; 
        for (int i = 1; i < arr_size; i++) 
            result = result ^ arr[i]; 
        return result; 
    } 
int main() 
    {
    	int arr[ ]={10,12,12,34,45};
        int n = sizeof(arr) / sizeof(arr[0]); 
        cout << "Element occurring once is " 
             << findSingle(arr, n); 
        return 0;
    }
