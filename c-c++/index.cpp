#include <iostream>
#include <vector>
using namespace std;
int index(int arr[],int size){
    vector<int> result;
    vector<int> temp;
    for(int i = 0; i<size; i++){
        temp[i] = arr[i];
    }
    for(int j = 0; j<size; j++){
        for(int k = j; k<size; k++){
            if(temp[j] >= temp[k]){
                swap(temp[j],temp[k]);
            }
        }
        cout<<" "<<temp[j];
    }
    cout<<endl;

    for(int l = 0; l<size; l++){
        for(int k =l; k<size; k++){
            if(arr[l] == temp[k]){
                result[l] = k;

            }
        }
        cout<<" "<<result;
    }
}
int main(){
    int array[] = {37,12,28,9,100,56,80,5,12};
    int size = sizeof(array)/sizeof(array[0]);
    index(array,size);
}