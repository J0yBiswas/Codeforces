#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

main()
{
    string s;
    int c=0;
    cin>>s;
    sort(s.begin(),s.end());

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1]){
            c++;
        }
    }

    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
