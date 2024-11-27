#include<stdio.h>
int main()
{int i,j,t,n,a[n],k;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
if(n%2==0)
for(j=0;j<n/2;j++)
{t=a[j];
a[j]=a[n-j-1];
a[n-j-1]=t;
}
else
for(j=0;j<n/2+1;j++)
{t=a[j];
a[j]=a[n-j-1];
a[n-j-1]=t;
}
printf("the changed array \n");
for(k=0;k<n;k++)
printf("%d ",a[k]);
return 0;
}
