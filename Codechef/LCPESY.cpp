#include <cstdio>
#include <iostream>
#include <map>
#include <string>
using namespace std;
 
map <char, int> hashfunc, hf;
 
void getNumber(string S, string K)
{
	for(int i=0; i<S.length(); i++)
	hashfunc[S[i]]++;
 
	for(int i=0; i<K.length(); i++)
	hf[K[i]]++;
 
	int count=0;
	for(char ch='a'; ch<='z'; ch++)
	count += (hashfunc[ch]>hf[ch]) ? hf[ch] : hashfunc[ch];
 
	for(char ch='A'; ch<='Z'; ch++)
	count += (hashfunc[ch]>hf[ch]) ? hf[ch] : hashfunc[ch];
 
	for(char ch='0'; ch<='9'; ch++)
	count += (hashfunc[ch]>hf[ch]) ? hf[ch] : hashfunc[ch];
 
printf("%d\n", count);
}
 
int main()
{
int T;
string S, K;
 
scanf("%d", &T);
 
	while(T--)
	{
	hashfunc.clear();
	hf.clear();
	cin>>S;
	cin>>K;
	getNumber(S, K);
	}
 
return 0;
}