#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&arr){
    set<int>st;
    for(int a:arr){
        st.insert(a);
    }
    int index = 0;
    for(auto i:st){
        arr[index] = i;
        index++;
    }
    return st.size();
}
int main(){
    vector<int>arr = {0,0,1,1,1,2,2,3,3,4};
    cout<<"The length is "<<removeDuplicates(arr);
    return 0;
}