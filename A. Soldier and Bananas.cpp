#include<bits/stdc++.h>
using namespace std;

int main()
{

    int k,n,w,sum=0;

    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)

    {
         sum=sum+i;
    }
    int d=sum*k;

    int r=d-n;

    if(r<0)
    {
        cout<<"0";
    }
    else{

    cout<<r;
}
}

