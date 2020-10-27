#include<bits/stdc++.h>
using namespace std;

int extendedEuclid(int a,int b,int &x,int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1, y1, gcd = extendedEuclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}



int main()
{
    int a = 98, b = 78, x, y, gcd;

    if(a < b) swap(a, b);

    gcd = extendedEuclid(a, b, x, y);
    cout << "GCD: " << gcd << ", x = " << x << ", y = " << y << endl;


    return 0;

}

