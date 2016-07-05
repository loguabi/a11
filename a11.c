#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
void swap(char *x,char *y)
{
char temp= *x;
*x=*y;
*y=temp;
}
void findNext(char number[], int n);
{
int i,j;
for(i=n-1;i>0;i--)
if(number[i]>number[i-1])
break;
if(i==0)
{
cout<<"Next no is not possible";
return ;
}
int a=number[i-1];j<n;j++;
if(number[j]>b && number[j]<number[smallest])
smallest=j;
swap(&number[smallest], &number[i-1]);
sort(number+i,number+n);
cout<<"Next no is possible";
return ;
}
int main()
{
char digits[]="563747";
int n=strlen(gigits);
findNext(digits,n);
return 0;
}
