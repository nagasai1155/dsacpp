#include<bits/stdc++.h>
using  namespace std; 

int main(){



    //find the enter char is vowel or consonant


    char ch;
    cout<<"Enter the character  in lower case letters : ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonant";
    }

    return 0;
}