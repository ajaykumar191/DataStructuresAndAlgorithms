#include<bits/stdc++.h>
using namespace std;
int findLarestElement(vector<int>arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];
}
int main(){
    vector<int> arr = {8, 10, 5, 7, 9};
    cout<<"The largest element is "<< findLarestElement(arr);
    
    return 0;
}