#include<bits/stdc++.h>
using namespace std;


void bubblesorts(vector<int>& vec){
    int n =vec.size();
    for(int i = 0; i<n;i++){
        for(int j = n-1;j>=i+1;j--){
            if(vec[j]<vec[j-1]){
                swap(vec[j],vec[j-1]);
            }
        }
    }
}

int main(){
    vector<int> vec = {101,2,34,5,6};
    bubblesorts(vec);
    for(int x: vec){
        cout<<x<<" "<<endl;
    }
}