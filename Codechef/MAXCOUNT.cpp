#include <cstdio>
#include <map>
#include <vector>
using namespace std;
 
vector <int> arr;
map <int, int> hashfunc;
 
int main()
{
int T, i, N, j, temp, num;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%d", &N);
 
	arr.clear();
	for(j=0; j<N; j++)
	{
	scanf("%d", &temp);
	if(hashfunc[temp]==0) arr.push_back(temp);
	hashfunc[temp]++;
	}
 
	temp = 0;
	for(j=0; j<arr.size(); j++)
	{
	if(hashfunc[arr[j]] >= temp)
		{
		if((hashfunc[arr[j]] == temp) && (arr[j] > num)) continue;
		temp = hashfunc[arr[j]];
		num = arr[j];
		}
	}
 
	printf("%d %d\n", num, temp);
 
	for(j=0; j<arr.size(); j++)
	hashfunc[arr[j]] = 0;
	}
 
return 0;
}