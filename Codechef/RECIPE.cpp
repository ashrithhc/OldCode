#include <cstdio>
#include <vector>
using namespace std;
 
vector <int> ingred, div;
 
void reduce(int N, int min)
{
int i, j, flag;
 
	for(i=2; i<=min/2; i++)
	if(min%i==0) div.push_back(i);
	div.push_back(min);
 
	for(i=div.size()-1; i>=0; i--)
	{
	flag = 1;
		for(j=0; j<N; j++)
		if(ingred[j] % div[i]) {flag=0; break;}
	if(flag) break;
	}
 
if(flag) flag = div[i];
else flag = 1;
 
	for(i=0; i<N; i++)
	printf("%d ", (int)ingred[i]/flag);
	printf("\n");
}
 
int main()
{
int T, N, i, j, temp, min;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%d", &N);
 
	ingred.clear();
	div.clear();
	for(j=0; j<N; j++)
	{
	scanf("%d", &temp);
	ingred.push_back(temp);
	if(j==0) min = temp;
	if(temp < min) min = temp;
	}
	reduce(N, min);
	}
 
return 0;
}