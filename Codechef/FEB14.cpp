#include <cstdio>
#include <map>
using namespace std;
 
map <int, int> hashthis;
 
int main()
{
int N, Q, temp;
 
scanf("%d", &N);
int arr[N+2], hf[N+2], hfr[N+2], subarr[N+1][N+1];
 
 
	for(int i=0; i<N; i++)
	scanf("%d", &arr[i]);
 
	//hf[i] stores the number of elements <= i to the left (i included, hence min value is 1).
	for(int i=0; i<N; i++)
	{
	hf[i]=0;
	for(int j=i; j>=0; j--)
	if(arr[j] >= arr[i]) hf[i]++;
	else break;
	}
 
	//hfr[i] stores the number of elements >i to the right. min value is 0.
	for(int i=0; i<N; i++)
	{
	hfr[i]=0;
	for(int j=i+1; j<N; j++)
	if(arr[j] >= arr[i]) hfr[i]++;
	else break;
	}
 
scanf("%d", &Q);
	for(int i=0; i<Q; i++)
	{
	scanf("%d", &temp);
 
	//storing all subarray starting(i) and ending(j) index to avoid duplication of array.
	for(int i=0; i<N; i++)
	for(int j=0; j<N; j++)
	subarr[i][j]=0;
 
	int count=0;
	for(int index=0; index<N; index++)
	{
	if(arr[index]==temp)
		{
		for(int j=index-hf[index]+1; j<=index; j++)
		if(subarr[j][index]) continue;
		else {count++; subarr[j][index]=1;}
 
		for(int j=index+1; j<=index+hfr[index]; j++)
		if(subarr[index][j]) continue;
		else {count++; subarr[index][j]=1;}
 
		for(int j=index-hf[index]+1; j<=index; j++)
		for(int k=index+1; k<=index+hfr[index]; k++)
		if(subarr[j][k]) continue;
		else {count++; subarr[j][k]=1;}
		}
	}
	printf("%d\n", count);
	}
 
return 0;
}
 
//	if(arr[j]==temp) count += hf[j] + hfr[j]; //adds the no. of subarrays ONLY either to left or to right of "temp".
//	if ((arr[j]==temp) && (hf[j]>1) && (hfr[j])) count += (hf[j]-1)*hfr[j]; //If 'arr[j]' has both left and right subarrays, mixing them.
 
 