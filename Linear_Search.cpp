#include <iostream>
using namespace std;

    int b_search(int arr[], int size, int key){
        
        for(int i=0; i<size; i++){
            if(arr[i]==key)
             return i;
            
        }
        return -1;
    }
int main()
{
    int size,key;
    cin>>size;
    int arr[100];
    
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    cin>>key;
    
    int ans=b_search(arr,size,key);
    
    if(ans==-1){
        cout<<"element is not found";
    }
    else{
        cout<<"element found at :"<<ans;
    }
    
    return 0;
}
