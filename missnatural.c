#include<stdio.h>
int main()
{int i,j,N,k=0;
printf("enter the N value\n");
scanf("%d",&N);
int a[N-1];
printf("enter array elements\n");
printf("arr[]= ");
for(i=0;i<N-1;i++)
scanf("%d",&a[i]);
for(j=0;j<N-1;j++)
k=k+a[j];
printf("%d is missing number",N*(N+1)/2-k);
return 0;
}
