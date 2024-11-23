#include<iostream>
#include<vector>
using namespace std;
    int duplicate(vector<int> arr,int s){
        int prev = arr[0];
        int k = 0;
        for(int i=1;i<s;i++){
            int curr = arr[i];
            if(curr != prev){
                k++;
            }
            prev = curr;
        }
        k++;
        return k;

    }
    int main(){
        vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
        int nums_size = nums.size();
        int k = nums.size() - (duplicate(nums,nums.size()));
        vector<int> expected(k,1);
        int prev = nums[0];
        int j = 0;
        for(int i=1;i<nums.size();i++){
            int curr = nums[i];
            if(curr != prev){
                expected[j] = prev;
                j++;
            }
            prev = curr;

        }
        expected[(k-1)] = nums[(nums_size - 1)];
        for(int i=0;i<expected.size();i++){
            cout<<expected[i]<<endl;
        }
        
    }