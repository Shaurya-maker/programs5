#include<stdio.h>
int main()
{int i,j,t,n,a[n],k;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
for(j=0;j<n-1;j++)
if(a[j]<a[j+1])
{a[j+1]=a[j+1]+a[j];
a[j]=a[j+1]-a[j];
a[j+1]=a[j+1]-a[j];
}
printf("the changed array \n");
for(k=0;k<n;k++)
printf("%d ",a[k]);
return 0;
}
