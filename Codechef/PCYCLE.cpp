#include <cstdio>
#include <vector>
#include <map>
using namespace std;
 
vector <int> arr, out_arr;
map <int, int> hashfunc;
 
int walks(int N, int i)
{
 
	while(1)
	{
	out_arr.push_back(arr[i]);
	if(hashfunc[arr[i]] == 0)
		{
		hashfunc[arr[i]] = 1;
		i = arr[i]-1;
		}
	else
		{
		for(i=2; i<=N; i++)
		if(hashfunc[i]==0)
			{
			hashfunc[i] = 1;
			out_arr.push_back(i);
			return 1 + walks(N, i-1);
			}
		return 1;
		}
	}
 
}
 
int main()
{
int N, i, temp;
 
scanf("%d", &N);
 
	for(i=0; i<N; i++)
	{
	scanf("%d", &temp);
	arr.push_back(temp);
	}
 
hashfunc[1] = 1;
out_arr.push_back(1);
printf("%d\n", walks(N, 1-1));
 
	for(i=0; i<out_arr.size(); i++)
	{
	printf("%d ", out_arr[i]);
	hashfunc[out_arr[i]]++;
	if(hashfunc[out_arr[i]] > 2) printf("\n");
	}
 
return 0;
}