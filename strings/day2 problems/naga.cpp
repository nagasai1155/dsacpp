#include<bits\stdc++.h>
#include<iostream>
using namespace std;
int main()
{
char str[100]="britto anand Whai";
int length=strlen(str);

for(int i=0;i<length;i++)
{
if(i==0 || i==(length-1))
{
str[i]=toupper(str[i]);
}
else if (str[i]==' ')
{
str[i-1]=toupper(str[i-1]);
str[i+1]=toupper(str[i+1]);
}
}

cout<<str;
}