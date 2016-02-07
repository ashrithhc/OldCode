#include <cstdio>
 
void chamber(int N, long long A, int K)
{
int k=0;
 
	while(A>0)
	{
	if(k==K) break;
	printf("%d ", (int)A%(N+1));
	A /= (N+1);
	k++;
	}
 
	while(k<K)
	{
	printf("0 ");
	k++;
	}
	printf("\n");
}
 
int main()
{
int N, K, flag = 0;
long long int i, A;
 
scanf("%lld %d %d", &A, &N, &K);
 
chamber(N, A, K);
 
return 0;
}
 