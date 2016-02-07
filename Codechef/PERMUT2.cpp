#include <cstdio>
#include <vector>
#include <map>
using namespace std;
 
vector <int> arr;
map <int, int> hashtab;
 
int main()
{
int N, i, flag, temp;
	while(1)
	{
	scanf("%d", &N);
	if(N==0) break;
 
	flag = 0;
	arr.clear();
	for(i=0; i<N; i++)
	{
	scanf("%d", &temp);
	arr.push_back(temp);
	hashtab[arr[i]] = i+1;
	}
 
	for(i=1; i<=N; i++)
	if(arr[i-1] != hashtab[i]) flag = 1;
 
	if(flag) printf("not ambiguous\n");
	else printf("ambiguous\n");
	}
return 0;
}