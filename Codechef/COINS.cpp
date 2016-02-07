#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
 
map <int, long long> hashfunc;
 
long long max(int a, long long b)
{
	return ((a>b)?a:b);
}
 
long long getChange(int N)
{
	if(!N) return 0;
	else if(hashfunc[N]) return hashfunc[N];
 
	hashfunc[N] = max(N, getChange(N/2) + getChange(N/3) + getChange(N/4));
	return hashfunc[N];
}
 
int main()
{
int N;
	while(cin>>N)
	{
	cout<<getChange(N)<<endl;
	}
 
return 0;
}