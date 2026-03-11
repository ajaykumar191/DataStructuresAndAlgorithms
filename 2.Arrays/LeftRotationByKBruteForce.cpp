#include<bits/stdc++.h>
using namespace std;
void leftRotationByK(vector<int>&arr,int k){
    vector<int>temp;
    int n = arr.size();
    k = k%n;
    for(int i=k;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    arr = temp;
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    int k = 3;
    cout<<"Before rotation ";
    for(int a:arr){
        cout<<a<<" ";
    }
    leftRotationByK(arr,k);
    cout<<endl;
    cout<<"After rotation ";
    for(int a:arr){
        cout<<a<<" ";
    }
    return 0;
}