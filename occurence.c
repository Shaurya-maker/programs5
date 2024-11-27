#include<stdio.h>
int main()
{int s=0,n,i,j,k;
printf("enter array size\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the number to get how many times it occur in array\n");
scanf("%d",&k);
for(i=0;i<n;i++)
if(a[i]==k)
s++;
printf("%d is the no of times %d occured in array",s,k);
return 0;
}
