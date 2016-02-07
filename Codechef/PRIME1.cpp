#include <cstdio>
using namespace std;
 
void getPrime(long long int N, long long int M)
{
long long int i, j, temp;
int hashfunc[M-N+2];
 
	for(i=0; i<(M-N)+1; i++)
	hashfunc[i] = 0;
 
	if (N==1) temp = 4;
	else if(N%2) temp = N+1;
	else if(N!=2) temp = N;
	else temp = N+2;
	for(i=temp; i<=M; i+=2)
	hashfunc[i-N] = 1;
 
	for(i=3; i*i<=M; i+=2)
	{
	temp = N/i;
	temp *= i;
 
	for(j=temp; j <= M; j+=i)
	if((j>=N)&&(j!=i)) hashfunc[j-N] = 1;
	}
 
	for(i=0; i<=(M-N); i++)
	if((hashfunc[i] == 0) && (i+N != 1)) printf("%lld\n", i+N);
}
 
int main()
{
int T, i, j;
long long int N, M, max = 0;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%lld %lld", &N, &M);
	getPrime(N, M);
	printf("\n");
	}
 
return 0;
}