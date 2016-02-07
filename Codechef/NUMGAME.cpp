#include <cstdio>
 
int main()
{
int T, i;
long long int temp;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%lld", &temp);
	if(temp%2) printf("BOB\n");
	else printf("ALICE\n");
//	if(winner1(temp, temp/2, 0) == 1) printf("ALICE\n");
//	else printf("BOB\n");
	}
 
 
return 0;
}