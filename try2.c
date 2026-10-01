#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int target =0;
    scanf("%d",&target);
    int found =0,num=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==target)
        {
            found =1;
            num = i;
            break;
        }
    }
    if(found)
    {
       printf("found at index: %d\n",num);
    }
    else
    {
       printf("not found\n");
    }
    return 0;
}
