#include<vector>
#include<cstdio>
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
bool solve(int a,int b,int n,vector<int> &sols){
    int A,B;
    int d = extendedEuclid(a,n,A,B);
    if(b % d != 0){
        return false;
    }
    sols = vector<int> (d,0);
    sols[0] = A*(b/d);
    for(int i = 1;i<d;i++){
        sols[i] = sols[i-1] + (n/d);
    }
    for (int i = 0; i < d; ++i) {
        sols[i] = (sols[i] % n + n) % n;
    }
    return true;

}
int main()
{
    vector<int> sols;
    int a= 14,b=30,n=100;
    if(solve(a,b,n,sols)){
        for(int x : sols){
            printf("%d,",x);
        }
        printf("\n");

    }else{
        printf("not solvable");
    }



}