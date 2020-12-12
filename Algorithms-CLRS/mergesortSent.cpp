#include<bits/stdc++.h>
using namespace std;

void merge(int mid,int high,int low,vector<int> &vec){
    int n1 = mid -low + 1;
    int n2 = high - mid;

    vector<int> arr(n1 + 1);
    vector<int> arr2(n2+1);

        for(int i = 0;i<n1;i++){
        arr[i]=vec[i+low];
        }
        for(int i = 0;i<n2;i++){
            arr2[i] = vec[mid+i+1];
        }
    arr[n1] = INT_MAX;
    arr2[n2] = INT_MAX;
    int i,j=0;
        for(int k = low;k<=high;k++){
            if(arr[i]<=arr2[j]){
            vec[k]=arr[i]; 
            i++;
            }else{
                vec[k]=arr[j];
                j++;
            }
        }
}

void merge_sort(vector<int>& vec,int high,int low){
    if(high > low){
    int mid = (high+low)/2;
    merge_sort(vec,low,mid);
    merge_sort(vec,mid+1,high);
    merge(mid,high,low,vec);
}
}

int main(){
    vector<int> vec = {1,2,4,5,-1,3};
    
    merge_sort(vec,5,0);
    for(int x:vec){
        cout<<x<<" ";
    }
;
}