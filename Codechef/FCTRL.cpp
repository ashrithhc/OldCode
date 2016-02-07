 
long long int simple(long long int num, int div)
{
	if(div > num) return 0;
	else return (num/div + simple(num, div*5));
}
 
int main()
{
int T, i;
long long int temp;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%lld", &temp);
	printf("%lld\n", simple(temp, 5));
	}
 
return 0;
}