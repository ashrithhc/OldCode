#include <cstdio>
 
int main()
{
int A, B, diff;
 
scanf("%d %d", &A, &B);
 
diff = A-B;
 
if(diff%10 > 5) printf("%d\n", diff-4);
else printf("%d\n", diff+1);
 
return 0;
}