#include <cstdio>
 
int main()
{
int T, i;
long long int temp;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%lld", &temp);
	if(temp%2) printf("%lld\n", temp-1);
	else printf("%lld\n", temp);
	}
 
 
return 0;
}
 