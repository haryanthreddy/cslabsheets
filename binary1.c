#include <stdio.h>
int main()
{
    int n,found =0,count =0;
    scanf("%d",&n);
    int arr[n];
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        int left =0;
        int right = n-1;
        while(left<=right)
        {
            int mid = left + (right -left)/2;
            if(arr[mid]==target)
            {
            	found =i;
            	count++;
            	break;
            }
            else if(mid <target)
            {
            	left = mid +1;
            }
            else
            {
            	right = mid -1;
            }
        }
    }
    printf("found at %d\n",found);
    printf("appeared : %d times\n",count);
    return 0;
}
