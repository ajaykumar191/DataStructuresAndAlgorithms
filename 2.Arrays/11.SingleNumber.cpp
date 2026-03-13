#include<bits/stdc++.h>
using namespace std;
int findSingleNumber(vector<int>&arr){
    int xoor = 0;
    for(int a :arr){
        xoor = xoor^a;
    }
    return xoor;
}
int main(){
    vector<int>arr = {4,1,2,1,2};
    cout<<"The single number is "<<findSingleNumber(arr);
    return 0;
}