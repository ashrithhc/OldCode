#include <cstdio>
 
int getMenu(int N)
{
if(N > 4095) return 2 + getMenu(N-4096);
 
int count = 0;
	while(N>0)
	{
	if(N%2 == 1) count++;
	N /= 2;
	}
return count;
}
 
int main()
{
int T, i, N;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%d", &N);
	printf("%d\n", getMenu(N));
	}
 
return 0;
}