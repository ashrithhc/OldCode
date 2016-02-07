#include <cstdio>
#include <vector>
using namespace std;
 
int tri[100][100], tri_right[100][100];
 
int triangle(int N, int i, int j)
{
int left, right;
	if (i+1 >= N) return tri[i][j];
 
	if(j==0) left = triangle(N, i+1, j);
	else left = tri_right[i][j-1];
 
	right = triangle(N, i+1, j+1);
	tri_right[i][j] = right;
 
	if(left > right) return (tri[i][j] + left);
	else return (tri[i][j] + right);
}
 
int main()
{
int T, i, j, k, N;
 
scanf("%d", &T);
 
	for(k=0; k<T; k++)
	{
	scanf("%d", &N);
		for(i=0; i<N; i++)
		for(j=0; j<=i; j++)
		scanf("%d", &tri[i][j]);
	printf("%d\n",triangle(N, 0, 0));
	}
return 0;
}