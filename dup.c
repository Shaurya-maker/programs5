#include<stdio.h>
int main()
{int s=0,n,i,j,k,x=0;
printf("enter array size\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(j!=i&&a[i]==a[j])
a[j]=0;
for(i=0;i<n;i++)
if(a[i]!=0)
s++;
int b[s];
for (k=0;k<n;k++)
if(a[k]!=0)
b[x++]=a[k];
for(i=0;i<s;i++)
printf("%d",b[i]);
return 0;
}


