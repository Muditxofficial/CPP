#include<bits/stdc++.h>
using namespace std;

tuple<int,int,int> max_sub_crossing(vector<int>& vec,int low,int mid, int high){
    int left_sum = INT_MIN;
    int sum = 0;
    int max_left;
    for(int i = mid;i<=low;i--){
        sum += vec[i];
        if(sum > left_sum){
            left_sum = sum;
            max_left = i;
        }
    }
    int right_sum = INT_MIN;
    sum = 0;
    int max_right;
    for(int i = mid+1;i<=high;i++){
        sum += vec[i];
        if(sum > right_sum){
            right_sum=sum;
            max_right=i;
        }
    }
    return make_tuple(max_left,max_right,left_sum+right_sum);
}

int main(){
    vector<int> arr = {-16,-23,18,20,-7,12,-5,10};
    auto [max_left,max_right,sum] = max_sub_crossing(arr,0,arr.size()/2-1,arr.size()-1);
    cout<< max_left <<" "<<max_right<<" "<<sum<<endl;
    return 0;
}