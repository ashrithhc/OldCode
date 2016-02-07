#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
 
int feedback(string str)
{
int i;
 
	for(i=0; str[i+2] != '\0'; i++)
	{
	if((str[i] == '1') && (str[i+1] == '0') && (str[i+2] == '1')) return 1;
	else if((str[i] == '0') && (str[i+1] == '1') && (str[i+2] == '0')) return 1;
	}
return 0;
}
 
int main()
{
int T, i;
string temp;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	cin>>temp;
	if(feedback(temp)) printf("Good\n");
	else printf("Bad\n");
	}
 
return 0;
}