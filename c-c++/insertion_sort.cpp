#include<iostream>
using namespace std;
int insertion_sort(int arr[],int size){
    for (int i = 1; i < size-1; i++)
    {
        int j = i-1;
        int current = arr[i];
        while (j >=0 && arr[j] > current)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        
        
    }
    
}
int main(){
    int arr[] = {5,3,4,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    
}