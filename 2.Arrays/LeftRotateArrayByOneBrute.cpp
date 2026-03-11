#include<bits/stdc++.h>
using namespace std;
void leftRotateByOne(vector<int>&arr){
    vector<int>temp;
    int n = arr.size();
    for(int i=1;i<n;i++){
        temp.push_back(arr[i]);
    }
    temp.push_back(arr[0]);
    arr = temp;
}
int main(){
    vector<int>arr = {1, 2, 3, 4, 5};
    cout<<"Before rotation ";
    for(int a:arr){
        cout<<a<<" ";
    }
    leftRotateByOne(arr);
    cout<<endl;
    cout<<"After rotation ";
    for(int a:arr){
        cout<<a<<" ";
    }
    return 0;
}