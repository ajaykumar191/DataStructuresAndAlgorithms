#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>&arr,int target){
    
    for(int i=0;i<arr.size();i++){
        if(arr[i] ==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr = {0,1,0,3,12};
    cout<<"The index of the given elemet is "<< linearSearch(arr,12);
    
}