#include<iostream>
using namespace std;
int bubble_sort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    
}
int main(){
    int array[10] = {3,5,2,1,0,6,7,9,8,4};
    int size = sizeof(array)/sizeof(array[0]);
    bubble_sort(array,size);
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    
}