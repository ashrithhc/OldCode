#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
vector <int> arr;
 
int mobster(int N, int demand, int i)
{
int temp;
	if(i<N)
	{
 
	if( arr[i] < demand)
		{
		temp = mobster(N, demand-arr[i], i+1);
		if(temp) return temp;
		}
 
	else if( arr[i] == demand) return 1;
 
	else if( arr[i] > demand) return 0;
 
	temp = mobster(N, demand, i+1);
	return temp;
	}
return 0;
}
 
int main()
{
int T, i, k, temp, N, demand;
 
scanf("%d", &T);
 
	for(k=0; k<T; k++)
	{
		scanf("%d %d", &N, &demand);
 
		arr.clear();
		for(i=0; i<N; i++)
		{
		scanf("%d", &temp);
		arr.push_back(temp);
		}
		if(demand == 0) {printf("Yes\n"); continue;}
 
		sort(arr.begin(), arr.end());
		temp = mobster(N, demand, 0);
		if(temp == 1) printf("Yes\n");
		else printf("No\n");
	}
 
 
return 0;
}