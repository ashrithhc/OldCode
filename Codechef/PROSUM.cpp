#include <cstdio>
#include <vector>
using namespace std;
 
int main()
{
int T, N, temp, arr_count=0, two_count=0;
long long sum;
 
scanf("%d", &T);
 
	while(T--)
	{
	scanf("%d", &N);
 
	arr_count=0;
	two_count=0;
	for(int i=0; i<N; i++)
	{
	scanf("%d", &temp);
	if ((temp != 1) && (temp != 0)) arr_count++;
	if(temp == 2) two_count++;
	}
 
	arr_count--;
	sum = ((long long)arr_count * (long long)(arr_count+1)) / 2;
 
	two_count--;
	sum = sum - ((long long)two_count * (long long)(two_count+1) / 2);
 
	printf("%lld\n", sum);
	
	}
 
return 0;
}