#include<bits/stdc++.h>
using namespace std;
int findSecondLargestNumber(vector<int>arr){
    int n = arr.size();
    if(n==0 || n==1) return -1;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int a:arr){
        if(a>largest){
            secondLargest = largest;
            largest = a;
        }else if(a>secondLargest && a<largest){
            secondLargest = a;
        }
    }
    return secondLargest;
}
int findSecondSmallestNumber(vector<int>arr){
    int n = arr.size();
    if(n==0 || n==1) return -1;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for(int a:arr){
        if(a<smallest){
            secondSmallest = smallest;
            smallest = a;
        }else if(secondSmallest>a && smallest<a){
            secondSmallest = a;
        }
    }
    return secondSmallest;
}
int main(){
    vector<int>arr ={1, 2, 4, 6, 7, 5};
    int n = arr.size();
    cout<<"The second largest number is "<<findSecondLargestNumber(arr)<<endl;
    cout<<"The second smallest number is "<<findSecondSmallestNumber(arr)<<endl;
    return 0;
}