#include<bits/stdc++.h>
using namespace std;
int findSecondLargestNumber(vector<int>arr){
    int n = arr.size();
    if(n==0 || n==1) return -1;
    sort(arr.begin(),arr.end());
    return arr[n-2];
}
int findSecondSmallestNumber(vector<int>arr){
    int n = arr.size();
    if(n==0 || n==1) return -1;
    sort(arr.begin(),arr.end());
    return arr[1];
}
int main(){
    vector<int>arr ={1, 2, 4, 6, 7, 5};
    int n = arr.size();
    cout<<"The second largest number is "<<findSecondLargestNumber(arr)<<endl;
    cout<<"The second smallest number is "<<findSecondSmallestNumber(arr)<<endl;
    return 0;
}