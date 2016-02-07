#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
vector <int> pies, racks;
 
void max_pies(int N)
{
int i, j=0, count=0;
 
	for(i=0; i<N; i++)
	{
		while(j<N)
		{
		if(pies[i]<=racks[j]) {count++; j++; break;}
		j++;
		}
	if(j>=N) break;
	}
printf("%d\n", count);
}
 
int main()
{
int T, i, k, temp, N;
 
scanf("%d", &T);
 
	for(k=0; k<T; k++)
	{
		scanf("%d", &N);
 
		pies.clear();
		for(i=0; i<N; i++)
		{
		scanf("%d", &temp);
		pies.push_back(temp);
		}
 
		racks.clear();
		for(i=0; i<N; i++)
		{
		scanf("%d", &temp);
		racks.push_back(temp);
		}
 
		sort(pies.begin(), pies.end());
		sort(racks.begin(), racks.end());
 
		max_pies(N);
	}
 
return 0;
}
 