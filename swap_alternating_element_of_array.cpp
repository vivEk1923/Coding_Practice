#include <iostream>
using namespace std;

    void revese(int arr[], int size)
    {
        int temp=0;
        for(int i=0; i<=size; i+=2)
        {
            if(i+1 < size)
            swap(arr[i],arr[i + 1]);
            
            /* 
            without swap function
            
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            */
            
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
