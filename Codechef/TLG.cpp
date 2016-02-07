#include <cstdio>
#include <vector>
using namespace std;
 
int main()
{
int N, i, P1, P2, player, lead=0, op1 = 0, op2 = 0;
 
scanf("%d", &N);
 
	for(i=0; i<N; i++)
	{
	scanf("%d %d", &P1, &P2);
	P1 += op1; P2 += op2;
	if((P1>P2) && ((P1-P2)>lead)) {player = 1; lead = P1-P2;}
	else if((P1<P2) && ((P2-P1)>lead)) {player = 2; lead = P2-P1;}
	op1 = P1; op2 = P2;
	}
 
	printf("%d %d\n", player, lead);
 
return 0;
}