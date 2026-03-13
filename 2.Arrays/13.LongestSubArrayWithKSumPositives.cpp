#include<bits/stdc++.h>
using namespace std;
int findLongestSubArryaWithSumK(vector<int>&nums,int k){
    int l = 0;
    int r = 0;
    int n = nums.size();
    long long sum = 0;
    int maxLen = 0;
    while(r<n){
        sum+=nums[r];
        while(sum>k &&l<r){
            sum-=nums[l];
            l++;
        }
        if(sum==k){
        maxLen = max(maxLen,r-l+1);
        }
        r++;
    }
    return maxLen;   
    
}
int main(){

    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout<<"The longest Subarrya with K Sum is "<<findLongestSubArryaWithSumK(nums,k);
}