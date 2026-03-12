#include<bits/stdc++.h>
using namespace std;
int missingNum(vector<int>&arr){
    int n = arr.size()+1;
    long long sum = 0;
    for(int a:arr){
        sum+=a;
    }
    long long totalSum = (n*(n+1))/2;

    return (int) totalSum - sum;
}
int main(){
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};  
    cout << missingNum(arr);  
    return 0;
}