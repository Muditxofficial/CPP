#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    while(n>0){
        string str;
        cin >> str;
        x = str.length();
        if(x>10){
            cout << str[0] << x-2 << str[x-1]<<"\n";
        }
        else{
            cout << str<<"\n";
        }
        n--;
    }
    

    return 0;
}