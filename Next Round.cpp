#include<bits/stdc++.h>

using namespace std;


int main(){
    int a,b,t[100],count=0;

    cin>>a>>b;

    for(int i=0;i<a;i++)
    {
        cin>>t[i];

        }
        for(int i=0;i<a;i++){

        if(t[i]>=t[b-1] && t[i]!=0){
            count++;
        }
    }

    cout<<count<<endl;

}
