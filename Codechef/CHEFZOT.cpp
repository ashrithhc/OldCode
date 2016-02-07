#include <cstdio>
 
int main()
{
int N, temp, count = 0, final_count = 0;
 
scanf("%d", &N);
 
	while(N--)
	{
		scanf("%d", &temp);
		if(temp) count++;
		else count = 0;
		if(count > final_count) final_count = count;
	}
	printf("%d\n", final_count);
 
return 0;
} 