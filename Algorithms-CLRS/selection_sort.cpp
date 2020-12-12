#include<bits/stdc++.h>
using namespace std;


void selection_sort(vector<int> &vec){
    int n = vec.size();
    for(int i =0;i<n-1;i++){
        int smallest = i;
         for(int j=i+1;j<n;j++){
             if(vec[smallest] > vec[j]){
                smallest = j;
             }
         }
         swap(vec[i],vec[smallest]);
         
    }
}

int main(){
    vector<int> vec = {33,2,55,6,7,1};
    selection_sort(vec);
    for(int x:vec){
        cout<<x<<" ";
    }
    return 0;
}
