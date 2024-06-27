//check the give chracter alphabet or not  in c++

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        cout<<"alphabet";
    }
    else
    {
        cout<<"not alphabet";
    }
    return 0;
}



