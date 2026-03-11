#include<bits/stdc++.h>
using namespace std;
void leftRotationByK(vector<int>&arr,int k){
    
    int n = arr.size();
    k = k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
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