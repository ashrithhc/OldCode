#include <cstdio>
 
int main()
{
int req;
float bal;
 
scanf("%d %f", &req, &bal);
 
if((req%5 != 0) || ((float)req > (bal-0.5))) printf("%.2f\n", bal);
else printf("%.2f\n", (bal - (float)req - 0.5));
 
return 0;
}