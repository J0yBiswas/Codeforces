#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    int c=0;
    string s;
    cin>>a;
    cin>>s;

    for(int i=0;i<a;i++)
    {
        if(s[i]==s[i+1]){
            c++;
        }
    }
    cout<<c;


}
