#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
int temp=*a;
*a=*b;
*b=temp;
}

void bubblesort(int arr[], int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
swap(&arr[j],&arr[j+1]);
}
}
}
}
void display(int arr[],int len)
{
for(int i=0;i<len;i++)
{
cout<<arr[i]<<" ";
}
}
int main()
{
int arr[]={10,5,25,20,25,60,15};
int len=sizeof(arr)/sizeof(arr[0]);

bubblesort(arr,len);

display(arr,len);

return 0;
}