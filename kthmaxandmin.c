#include<stdio.h>
int main()
{int i,j,t,n,s;
printf("enter the kth value\n");
scanf("%d",&s);
printf("enter array size\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
for(j=0;j<n-1;j++)
if(a[j]>a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
if(s>0&&s<=n)
printf("the  %dth min is %d and the %dth max is %d",s,a[s-1],s,a[n-s]);
else 
printf("invalid k");
return 0;
}
