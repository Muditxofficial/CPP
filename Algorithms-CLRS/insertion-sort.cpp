#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &vec){
    for(int i=1;i<vec.size();i++){
        int key = vec[i];
        int j = i-1;
        while(vec[j]>key && j>=0){
            vec[j+1]=vec[j];
            --j;
        }
        vec[j+1] =key;

    }

}

int main(){
    vector<int> vec = {1,3,2,55,6};
    insertion_sort(vec);
    for(int x:vec){
        cout<<x<<" ";
    }
    return 0;
}