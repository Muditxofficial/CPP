#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],n[10],m[10],mi[10],i,size,M=1,Y=0;
    cout<<"Enter the size of array :";
    cin>>size;

    cout<<"Enter the values of a :";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the values of n :";
    for(i=0;i<size;i++)
    {
        cin>>n[i];
    }


    for(i=0;i<size;i++)
    {
        M=M*n[i];

    }
    cout<<"\nM = "<<M;
    for(i=0;i<size;i++)
    {
        m[i]=M/n[i];
        cout<<"\nm"<<i<<"= "<<m[i];
    }

    for(i=0;i<size;i++)
    {
        mi[i]=m[i]%n[i];
        cout<<"\nm"<<i<<" inverse = "<<mi[i];
    }

    for(i=0;i<size;i++)
    {
        Y=Y+(a[i]*m[i]*mi[i]);
    }
    cout<<"\n\nY = "<<Y;
    Y=Y%M;
    cout<<"\n\nChinese Remainder(Y MOD M) :-"<<Y;

}