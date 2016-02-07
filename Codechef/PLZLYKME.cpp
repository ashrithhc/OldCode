#include <cstdio>
 
void checkifalive(long long int L, long long D, long long int S, long long int C)
{
int j;
 
	for(j=1; j<=D; j++)
	{
	if(S>=L) {printf("ALIVE AND KICKING\n"); return;}
	S = S + S*C;
	}
printf("DEAD AND ROTTING\n");
}
 
int main()
{
int T, i;
long long int L, D, S, C;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%lld %lld %lld %lld", &L, &D, &S, &C);
	checkifalive(L, D, S, C);
	}
 
 
return 0;
}