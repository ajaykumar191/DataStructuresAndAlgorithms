#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>&arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;
    }
    if(arr[0]>arr[n-1]) return false;
    return true;
}
int main(){
    
    vector<int>arr = {1, 2, 3, 4, 5};
    if(isSorted(arr)){
        cout<<"The arrays is sorted!"<<endl;
    }else{
        cout<<"The array is not sorted!"<<endl;
    }
    return 0;
}