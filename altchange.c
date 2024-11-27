#include<stdio.h>
int main()
{int i,j,k,n,t;
printf("enter array size\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n-1;j+=2)
{t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
printf("the changed array \n");
for(k=0;k<n;k++)
printf("%d ",a[k]);
return 0;
}
