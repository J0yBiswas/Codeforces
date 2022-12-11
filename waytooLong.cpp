#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
	char t[101];
	int a;

	cin>>a;

	for(int i=0;i<a;i++)
	{
		cin>>t;
		if (strlen(t) <= 10)
		{
			printf("%s\n", t);
		}
		else
		{
			printf("%c%d%c\n", t[0], strlen(t) - 2, t[strlen(t) - 1]);
		}
	}
	return 0;
}
