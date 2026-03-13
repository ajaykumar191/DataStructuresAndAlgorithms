#include<bits/stdc++.h>
using namespace std;
vector<int>twoSum(vector<int>&arr,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        int num = arr[i];

        if(mp.find(target-num)!=mp.end()){
            return {i,mp[target-num]};
        }
        mp[num] = i;
    }
    return {};
}
int main(){
    vector<int>arr = {2,7,11,15};
    int target = 9;
    vector<int>res = twoSum(arr,target);
    if(res.size()>1){
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    cout<<"No tow numbers found that add up to the sum target.."<<endl;
    return 0;
}