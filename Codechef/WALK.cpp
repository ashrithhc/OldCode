#include <cstdio>
#include <vector>
using namespace std;
 
vector <int> arr;
 
void check_velocity()
{
int count = 0;
 
	for(int i=arr.size()-1; i>=0; i--)
	{
	if(count+1 >= arr[i]) count++;
	else count = arr[i];
	}
 
printf("%d\n", count);
}
 
int main()
{
int T, N, temp;
 
scanf("%d", &T);
 
	while(T--)
	{
	scanf("%d", &N);
 
	arr.clear();
	for(int i=0; i<N; i++)
	{
	scanf("%d", &temp);
	arr.push_back(temp);
	}
 
	check_velocity();
	}
 
 
 
return 0;
}