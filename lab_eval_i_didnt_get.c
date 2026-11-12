#include <stdio.h>
int main()
{
    int n,ans=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int sum1 =0;
        int sum2 =0;
        for(int j=0;j<i;j++)
        {
            sum1 += arr[j];
        }
        for(int k=i+1;k<n;k++)
        {
            sum2 += arr[k];
        }
        if(sum1 == sum2)
        {
            ans = i;
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}