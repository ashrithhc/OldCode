#include <cstdio>
#include <algorithm>
using namespace std;
 
long long int arr, sol[5], n;
 
int main()
{
int T, i, j;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%lld", &n);
 
	for(j=0; j<n; j++)
	scanf("%lld", &arr);
 
	sol[i] = (n*n) - ( ( n*(n+1)) / 2) ;
	}
 
	for(i=0; i<T; i++)
	printf("%lld\n", sol[i]);
 
return 0;
}
 