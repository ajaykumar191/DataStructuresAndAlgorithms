#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>&arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) return false;
        }
    }
    return true;
}
int main(){
    
    vector<int>arr = {1, 6, 3, 4, 5};
    if(isSorted(arr)){
        cout<<"The arrays is sorted!"<<endl;
    }else{
        cout<<"The array is not sorted!"<<endl;
    }
    return 0;
}