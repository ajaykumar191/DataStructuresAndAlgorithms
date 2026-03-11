#include<bits/stdc++.h>
using namespace std;
void moveZeros(vector<int>&arr){
    int left = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[left],arr[i]);
            left++;
        }
    }
}
int main(){
    vector<int>arr = {0,1,0,3,12};
    moveZeros(arr);
    for(int i:arr){
        cout<<i<<" ";
    }
}