#include <cstdio>
#include <vector>
using namespace std;
 
vector <int> complete, chef, cook;
 
void kitchen(int n)
{
int i, k=0, p;
 
	for(i=0; i<n; i++)
	{
	if(complete[i]) continue;
	if(k%2) cook.push_back(i+1);
	else chef.push_back(i+1);
	k++;
	}
 
	if(k%2) {p=k/2; k=k/2+1;}
	else p=k=k/2;
 
	for(i=0; i<k; i++)
	printf("%d ", chef[i]);
	printf("\n");
 
	for(i=0; i<p; i++)
	printf("%d ", cook[i]);
	printf("\n");
 
}
 
int main()
{
int T, n, m, i, j, temp;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%d %d", &n, &m);
 
	chef.clear();
	cook.clear();
	complete.clear();
	for(j=0; j<n; j++)
	complete.push_back(0);
 
	for(j=0; j<m; j++)
	{
	scanf("%d", &temp);
	complete[temp-1] = 1;
	}
 
	kitchen(n);
	}
 
return 0;
}