#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
using namespace std;
 
stack <string> stck;
 
void getONP(string str)
{
int i;
string t1, t2, t3;
 
	for(i=0; str[i] != '\0'; i++)
	{
	t1 = string(1, str[i]);
	if(str[i] != ')') stck.push(t1);
	else
	{
		t1 = stck.top();
		stck.pop();
		t2 = stck.top();
		stck.pop();
		t3 = stck.top();
		stck.pop();
		stck.pop();
		stck.push(t3+t1+t2);
	}
	}
cout<<stck.top()<<endl;
}
 
int main()
{
int T, i;
string temp;
 
scanf("%d", &T);
 
	for(i=0; i<T; i++)
	{
	cin>>temp;
	getONP(temp);
	}
 
return 0;
}