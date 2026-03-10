#include<bits/stdc++.h>
using namespace std;
void merge(int low,int mid,int high,vector<int>&arr){
    int left = low;
    int right = mid+1;

    vector<int>temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }

}
void mergerSort(int low,int high,vector<int>&arr){
    if(low<high){
        int mid = (low+high)/2;
        mergerSort(low,mid,arr);
        mergerSort(mid+1,high,arr);
        merge(low,mid,high,arr);
    }
    
}
int main(){
    vector<int>arr = {3,1,5,2,7};
    cout<<"Before Sorting ";
    for(int i:arr){
        cout<<i<<" ";
    }

    mergerSort(0,arr.size()-1,arr);

    cout<<"After Sorting ";
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}