#include<bits/stdc++.h>
using namespace std;

int _mergeSort(vector<int>& vec,vector<int>& temp,int low, int high); 
int mergeInversion(vector<int>& vec,vector<int>& temp, int low,int mid, int high); 
 
int mergeSort(vector<int>& vec, int array_size) 
{ 
    vector<int> temp(array_size);
    return _mergeSort(vec, temp, 0, array_size - 1); 
}

int _mergesort(vector<int>& vec,vector<int>& temp,int low,int high){
    int inv_count=0;
    if(high>low){
        int mid = (high-low)/2;
        inv_count += _mergeSort(vec, temp,low, mid); 
        inv_count += _mergeSort(vec, temp,mid + 1, high); 
        inv_count += mergeInversion(vec, temp, low,mid + 1,high); 
    }
    return inv_count;
}




int mergeInversion(vector<int>& vec,vector<int>& temp,int low,int mid,int high){
    int i,j,k;
    i=low;
    j=high;
    k=low;
    int inv_count = 0;
    while((i<=mid-1)&&(j<=high)){
        if(vec[i]<=vec[j]){
            temp[k++]=vec[i++];
        }else{
            temp[k++]=vec[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while(i<=mid-1){
        temp[k++]=vec[i++];
    }
    while(j<=high){
        temp[k++]=vec[j++];
    }
    for(int i=low;i<=high;i++){
        vec[i]=temp[i];
    }
    return inv_count;
}

int main(){
    vector<int> arr = {1,3,2,5,6,4,8};
    int n =arr.size();
    int ans = mergeSort(arr,n);
    cout<< "number of inversions are:"<<endl;
    return 0;
}