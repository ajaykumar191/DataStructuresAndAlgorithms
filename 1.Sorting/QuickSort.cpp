#include<bits/stdc++.h>
using namespace std;
int partition(int low,int high,vector<int>&arr){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int low,int high,vector<int>&arr){
    if(low<high){
        int partitionIndex = partition(low,high,arr);
        quickSort(low,partitionIndex-1,arr);
        quickSort(partitionIndex+1,high,arr);
    }
}
int main(){

    vector<int>arr = {3,1,5,2,7};
    cout<<"Before Sorting ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    quickSort(0,arr.size()-1,arr);

    cout<<"After Sorting ";
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}