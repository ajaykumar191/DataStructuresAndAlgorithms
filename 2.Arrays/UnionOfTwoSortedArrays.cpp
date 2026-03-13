#include<bits/stdc++.h>
using namespace std;
vector<int>unionOfArrays(vector<int>arr1,int n,vector<int>arr2,int m){
    vector<int>res;
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(res.empty() || res.back()!=arr1[i]){
                res.push_back(arr1[i]); 
            }
            i++;
        }else{
            if(res.empty() && res.back()!=arr2[j]){
                res.push_back(arr2[j]);    
            }
            j++;
        }
    }
    while(i<n){
        if(res.empty() || res.back()!=arr1[i]){
            res.push_back(arr1[i]);
        }
        i++;
    }
     while(j<m){
        if(res.empty() && res.back()!=arr2[j]){
            res.push_back(arr2[j]);
        }
        j++;
    }
    return res;
}
int main(){
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};
    int n = arr1.size();
    int m = arr2.size();

    vector<int>res = unionOfArrays(arr1,n,arr2,m);
    for(int r:res){
        cout<<r<<" ";
    }
}