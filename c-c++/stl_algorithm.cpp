#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,3,5,7,9,11,13,14,19};
    if((binary_search(arr.begin(),arr.end(),22))){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0 ;
}