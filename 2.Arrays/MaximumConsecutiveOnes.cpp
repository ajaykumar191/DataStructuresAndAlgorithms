#include<bits/stdc++.h>
using namespace std;
int maximumConsecutiveOnes(vector<int>arr){
    int maxi = 0;
    int count = 0;
    for(int a:arr){
        if(a==1){
            count++;
        }else{
            maxi = max(maxi,count);
            count = 0;
        }
    }
    maxi = max(maxi,count);
    return maxi;
}
int main(){
    vector<int>arr = {1,1,0,1,1,1};
    cout<<"The maximum consecutive ones are "<<maximumConsecutiveOnes(arr);
    return 0;
}