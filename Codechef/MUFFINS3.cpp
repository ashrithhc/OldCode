#include <cstdio>
 
int main()
{
int T, i;
long long int N;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%lld", &N);
 
	printf("%lld\n", (N/2) + 1);
	}
 
 
return 0;
}