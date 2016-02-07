#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
 
void oneCase(string S, int len)
{
int i;
	for(i=1; i<len; i++)
	S[i]='0';
	S[0] = '1';
cout<<S<<'1'<<endl;
}
 
void getPalin(string S, int len)
{
int i, j, temp, flag = 0;
 
	for(i=0; i<len; i++)
	if(S[i] != '9') {flag=1; break;}
 
	if(!flag) {oneCase(S, len); return;}
 
	i = len-1;
	while(1)
	{
	if(S[i] < '9') {S[i]++; break;}
	else {S[i] = '0'; i--;}
	}
 
if(len%2==0) temp = len/2 - 1;
else temp = len/2;
i = 0;
 
	while(i<=temp)
	{
	if(S[i] >= S[len-1-i]) {S[len-1-i] = S[i]; i++; continue;}
	else if(S[i] < S[len-1-i])
		{
		int p = i;
		while(1)
		if(S[len-2-p] != '9'){S[len-2-p]++; break;}
		else {S[len-2-p]='0'; p++;}
		i++;
		}
	}
 
	for(i=0; i<=temp; i++)
	S[len-1-i] = S[i];
cout<<S<<endl;
}
 
int main()
{
int T, i;
string S;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	cin>>S;
	getPalin(S, S.length());
	}
 
return 0;
}
 