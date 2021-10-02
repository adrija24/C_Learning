#include<stdio.h>
void main()
{
int *a;
int n,m;
int i;
printf("Enter the number of elements");
scanf("%d",&n);
a=(int*)calloc(n,sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("The resized value");
scanf("%d",&m);
a=(int*)realloc(a,m*sizeof(int));

for(i=0;i<m;i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<m;i++)
{
printf("%d",a[i]);
}
}
