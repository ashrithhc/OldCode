#include <cstdio>
#include <vector>
#include <map>
using namespace std;
 
vector <long long int> arr, hashfunc1;
//map <long long int, long long int> hashfunc;
long long int hashfunc[5000001], tempfunc[5000001];
 
void findMinimum(long long int K)
{
long long int N=arr.size();
long long int countl=N+1, countr=N+1, countml=N+1, countmr=N+1, temp;
 
	//Both at RIGHT
	temp = N+1;
	for(long long int i=N-1; i>=0; i--)
	{
		if((arr[i]<K) && (hashfunc[K - arr[i]]) && (arr[i] != K-arr[i]))
			{
			if(hashfunc[K - arr[i]] != i+1) temp = ((N-hashfunc[K-arr[i]]+1) > (N-i)) ? (N-hashfunc[K-arr[i]]+1) : (N-i);
//			else if(tempfunc[K - arr[i]] != i+1) temp = ((N-tempfunc[K-arr[i]]+1) > (N-i)) ? (N-tempfunc[K-arr[i]]+1) : (N-i);
			}
		if(temp < countr) countr = temp;
	}
 
	//One at LEFT, check at RIGHT
	temp = N+1;
	for(long long int i=0; i<N-1; i++)
	{
		if((arr[i]<K) && (hashfunc[K - arr[i]]) && (arr[i] != K-arr[i]))
			{
			if(hashfunc[K - arr[i]] != i+1) temp = (i+1 > (N-hashfunc[K-arr[i]]+1)) ? (i+1) : (N-hashfunc[K-arr[i]]+1);
//			else if(tempfunc[K - arr[i]] != i+1) temp = (i+1 > (N-tempfunc[K-arr[i]]+1)) ? (i+1) : (N-tempfunc[K-arr[i]]+1);
			}
		if(temp < countml) countml = temp;
	}
 
	//Change hash to Left-preferred
	for(long long int i=N-1; i>=0; i--)
	hashfunc[arr[i]] = 0;
 
	for(long long int i=N-1; i>=0; i--)
	{
	if(hashfunc[arr[i]]!=0) tempfunc[arr[i]] = hashfunc[arr[i]];
	else tempfunc[arr[i]] = i+1;
	hashfunc[arr[i]] = i+1;
	}
 
	//One at RIGHT, check at LEFT
	temp = N+1;
	for(long long int i=N-1; i>=0; i--)
	{
		if((arr[i]<K) && (hashfunc[K - arr[i]]) && (arr[i] != K-arr[i]))
			{
			if(hashfunc[K - arr[i]] != i+1) temp = (hashfunc[K-arr[i]] > (N-i)) ? hashfunc[K-arr[i]] : (N-i);
//			else if(tempfunc[K - arr[i]] != i+1) temp = (tempfunc[K-arr[i]] > (N-i)) ? tempfunc[K-arr[i]] : (N-i);
			}
		if(temp < countmr) countmr = temp;
	}
 
	//Both at LEFT
	temp = N+1;
	for(long long int i=0; i<N-1; i++)
	{
		if((arr[i]<K) && (hashfunc[K - arr[i]]) && (arr[i] != K-arr[i]))
			{
			if(hashfunc[K - arr[i]] != i+1) temp = (i+1 > hashfunc[K-arr[i]]) ? (i+1) : hashfunc[K-arr[i]];
//			else if(tempfunc[K - arr[i]] != i+1) temp = (i+1 > tempfunc[K-arr[i]]) ? (i+1) : tempfunc[K-arr[i]];
			}
		if(temp < countl) countl = temp;
	}
 
	long long something = min(min(countl, countr), min(countml, countmr));
	if(something == N+1) something = -1;
 
printf("%lld\n", something);
}
 
int main()
{
long long int N, K, temp;
scanf("%lld %lld", &N, &K);
 
	for(long long int i=0; i<N; i++)
	hashfunc[i] = 0;
//	hashfunc.push_back(0);
 
	for(long long int i=0; i<N; i++)
	{
	scanf("%lld", &temp);
	arr.push_back(temp);
	if(hashfunc[temp]!=0) tempfunc[temp] = hashfunc[temp];
	else tempfunc[temp] = i+1;
	hashfunc[temp] = i+1;
	}
 
	findMinimum(K);
 
return 0;
}
 