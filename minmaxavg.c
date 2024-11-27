#include<stdio.h>
int main()
{int i,j,t,n,a[n],s;
printf("enter array size\n");
scanf("%d",&n);
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
for(j=0;j<n;j++)
s=s+a[j];
printf("the min is %d and the max is %d and avg is %d",a[0],a[n-1],s/n);
return 0;
}
