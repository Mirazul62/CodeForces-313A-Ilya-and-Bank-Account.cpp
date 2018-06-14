#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,e;
    cin>>n;
    if(n>=0)
        cout<<n;
    else
    {

        a=n/10;
        e=n%10;
        b=(n/100)*10+e;

        if(a>b)
            cout<<a;
        else
            cout<<b;
    }

}
