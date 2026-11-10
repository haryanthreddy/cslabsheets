#include <stdio.h>
#include <string.h>
int luhn(char b[], int n)
{
    int sum = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        int digit = b[i] - '0';
        if ((n - 1 - i) % 2 == 1) {
            digit *= 2;
            if (digit > 9) {
                digit = (digit % 10) + (digit / 10);
            }
        }
        sum += digit;
    }

    if (sum % 10 == 0)
    {
        return 1;
    }
    else
    {
        printf("INVALID CARD\n");
    }
    return 0;
}

int main()
{
    int n;
    char arr[20];
    printf("-----Welcome to Secure payment gateway-----\n");
    printf("Please enter your credit card number :: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    printf("processing\n");
    n = strlen(arr);
    int ans = luhn(arr,n);
    if(n == 15 && ((arr[0] == '3' && arr[1] == '4') || arr[0] == '3' && arr[1] == '7') && ans == 1)
    {
        printf("AMEX\n");
    }
     else if(n == 16 && ((arr[0] == '5' && arr[1] == '1') || arr[0] == '5' && arr[1] == '2') || (arr[0] == '5' && arr[1] == '3') ||(arr[0] == '5' && arr[1] == '4') ||(arr[0] == '5' && arr[1] == '5') && ans ==1)
    {
        printf("Master card \n");
    }
    else if((n == 13 || n == 16) && arr[0]=='4'&& ans == 1)
    {
        printf("Visa\n");
    }
    else if(ans == 1)
    {
        printf("other card\n");
    }
    return 0;
}