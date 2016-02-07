#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
 
vector <int> arr;
 
int main()
{
int T, i, temp;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	scanf("%d", &temp);
	arr.push_back(temp);
	}
 
sort(arr.begin(), arr.end());
 
	for(i=0; i<T; i++)
	printf("%d\n", arr[i]);
 
return 0;
}
 