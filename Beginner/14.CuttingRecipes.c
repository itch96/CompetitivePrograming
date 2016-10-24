#include <stdio.h>
int main()
{
int t,n,cnt;
scanf("%d\n",&t);


while(t--)
{
scanf("%d",&n);
int ar[n];
for(int i=0;i<n;i++)
scanf("%d",&ar[i]);


for(int i=1000;i>1;i--)
{
cnt=0;
for(int j=0;j<n;j++)
{
if((ar[j]%i)==0)
cnt++;
}
if(cnt==n)
{
for(int k=0;k<n;k++)
ar[k]=ar[k]/i;
}
}
for(int i=0;i<(n-1);i++)
printf("%d ",ar[i]);
printf("%d",ar[n-1]);
printf("\n");

}
return 0;
}
