#include <iostream>
using namespace std;

    void revese(int arr[], int size)
    {
    int start = 0;
    int end = size - 1;
        while(start<=end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

    void print_array(int arr[],int size)
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }



int main()
{   int size;
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    revese(arr,size);
    print_array(arr,size);
    
    return 0;
}
