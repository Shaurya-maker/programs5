#include<stdio.h>
int main()
{int i,j,t,n,a[n];
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[j]>a[j+1])
{a[j+1]=a[j+1]+a[j];
a[j]=a[j+1]-a[j];
a[j+1]=a[j+1]-a[j];
}
printf("the changed array \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
