#include <stdio.h>
int main(void) 
{
int x;
scanf("%d",&x);
int a[x],i,j,t;
for(i=0;i<x;i++)
{
scanf("%d ",&a[i]);
}
for(i=0;i<x;i++)
{
for(j=i+1;j<x;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<x;i++)
{
printf("%d",a[i]);
}
return 0;
}
