#include<bits/stdc++.h>
using namespace std;
int findLarestElement(vector<int>arr){
    int maxi = INT_MIN;
    for(int a:arr){
        if(a>maxi){
            maxi = a;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr = {8, 10, 5, 7, 9};
    cout<<"The largest element is "<< findLarestElement(arr);
    
    return 0;
}