#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&arr){
    int left = 0;
    int n = arr.size();
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[left]){
            left++;
            arr[left] = arr[j];
        }

    }
    return left;
}
int main(){
    vector<int>arr = {0,0,1,1,1,2,2,3,3,4};
    cout<<"The length is "<<removeDuplicates(arr);
    return 0;
}