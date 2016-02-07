#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
 
vector <int> arr;
map <int, int> hashfunc;
 
int main()
{
int N1, N2, N3, i, temp, count = 0;
 
scanf("%d %d %d", &N1, &N2, &N3);
 
	for(i=0; i<N1+N2+N3; i++)
	{
	scanf("%d", &temp);
	hashfunc[temp]++;
	if(hashfunc[temp] == 1) arr.push_back(temp);
	}
 
sort(arr.begin(), arr.end());
 
	for(i=0; i<arr.size(); i++)
	if(hashfunc[arr[i]] >= 2) count++;
	printf("%d\n", count);
 
	for(i=0; i<arr.size(); i++)
	if(hashfunc[arr[i]] >=2) printf("%d\n", arr[i]);
 
return 0;
}