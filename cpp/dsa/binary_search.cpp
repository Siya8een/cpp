// binary search
 #include <bits/stdc++.h>//instead of all

#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int size, int element){
    int start=0;
    int end=size-1;

    int mid=(end+start)/2;
    int i=0;

    while(start<=end && arr[mid] != element){
        mid = start+(end-start)/2;
        if(arr[mid]<element){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
    }
    if (arr[mid] == element){
        return mid;
    }
    else{
        return -1;
    }
};

int main(){
    int element;
    cout<<"enter element to be searched";cin>>element;
    int size;
    cout<<"enter size";cin>>size;
    int i=0;
    int arrelement;
    vector<int> arr;
    cout<<"enter array elements";
    for(i=0;i<size;i++){
        cin>>arrelement;
        arr.push_back(arrelement);
    }

    binarySearch(arr,  size,  element);
    return 0;
}