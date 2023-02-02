#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int an=0,d=0;
    string s;
    cin>>a;
    cin>>s;

    for(int i=0;i<a;i++)
    {
        if(s[i]=='A')
        {
            an++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
    }
    if(an>d)
    {
        cout<<"Anton";
    }
    else if(an<d)
    {
        cout<<"Danik";
    }
    else if(an==d)
    {
        cout<<"Friendship";
    }



}
