#include <stdio.h>
int pass =0,fail=0;
void thermal_test(int durability,int temp)
{
    printf("Processing Thermal Test....\n");
    for(int i=0;i<temp;i++)
    {
        durability = durability - (durability%10 + 5);
    }
     if(durability >=20)
        {
            printf("[PASS] Engine Valve survived ! Final Durability : %d\n",durability);
            pass++;
        }
        else
        {
            printf("[FAIL] Engine Valve melted during testing !\n");
            fail++;
        }
}
void kinetic_test(int durability,int temp)
{
    printf("Processing Kinetic Test....\n");
    for(int i=0;i<temp;i++)
    {
        if(durability % 2 == 0)
        {
            durability = durability - (durability/2);
        }
        else if(durability % 2 == 1)
        {
            durability = durability - 15;
        }
    }
    if(durability >=30)
    {
        printf("[PASS] Hull Plate survived ! Final Durability: %d\n",durability);
        pass++;
    }
    else
    {
        printf("[FAIL] Hull Plate shattered during testing !\n");
        fail++;
    }
}
int main()
{
    int component = -1, durability = 0, cycles = 0; 
    printf("Welcome to Aerospace tester\n");
    while (component != 0)
    {
        printf("\nEnter Component Type (1=Valve, 2=Hull, 0=Exit) : ");
        scanf("%d", &component);
        if (component == 0) {
            break;
        }
        if (component == 1 || component == 2) {
            printf("Enter Base Durability : ");
            scanf("%d", &durability);
            printf("Enter Test Cycles : ");
            scanf("%d", &cycles);
            
            if(component == 1) {
                thermal_test(durability, cycles);
            } else {
                kinetic_test(durability, cycles);
            }
        } 
        else {
            printf("Invalid input! Please choose 1, 2, or 0.\n");
        }
    }
    printf("\nShutting down...\n");
    printf("---DailyFactoryReport---\n");
    printf("Total Components Passed : %d\n", pass);
    printf("Total Components Failed : %d\n", fail);
    
    return 0;
}
