#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &vec){
 for(int j =1;j<vec.size();j++){
     int i =j-1;
     int key = vec[j];
     while(i >=0 && vec[i]<key){
         vec[i+1]=vec[i];
         i--;
     }
     vec[i+1]=key;
 }
}

int main(){
    vector<int> vec = {11,3,2,55,6};
    insertion_sort(vec);
    for(int x:vec){
        cout<<x<<" ";
    }
    return 0;
}
