#include <cstdio>
 
int main()
{
int n, k, i, count = 0;
long long int temp;
 
scanf("%d %d", &n, &k);
 
	for(i=0; i<n; i++)
	{
	scanf("%lld", &temp);
	if(temp%k == 0) count++;
	}
 
printf("%d\n", count);
 
return 0;
}