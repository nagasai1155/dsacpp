//freq of char in given string
#include<iostream>
using namespace std;
int main()
{
char str[100]="brittoanand";
int i;
int freq[256]={0};

for(i=0;str[i]!='\0';i++)
{
freq[str[i]]++;
}

for(i=0;i<256;i++)
{
if(freq[i]!=0)
{
cout<<char(i)<<"="<<freq[i]<<endl;
}
}
}