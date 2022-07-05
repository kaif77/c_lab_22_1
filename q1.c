#include <stdio.h>

int main()
{

    int arr_max = 10;
    int ranmax[arr_max];
    int user_data = 0;
    int maximum_number = 0;
    int total_value = 0;
    float avg = 0;

    for (int i = 0; i < arr_max; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &ranmax[i]);
    }

    // print
    printf("You Entered\n");
    for (int x = 0; x < arr_max; x++)
    {
        printf("%d ", ranmax[x]);
    }

    // find maximum number
    for (int y = 0; y < arr_max; y++)
    {
        if (maximum_number < ranmax[y])
        {
            maximum_number = ranmax[y];
        }
    }

    // print maximum value
    printf("\nMaximum value: %d\n", maximum_number);

    // search a value
    int flag = 0;
    printf("Enter number to search in array: ");
    scanf("%d", &user_data);
    for (int a = 0; a < arr_max; a++)
    {
        if (user_data == ranmax[a])
        {
            flag = 1;
            printf("\n Value found: %d at index: %d\n", user_data, a);
        }
    }

    if (flag == 0)
    {
        printf("Value Not Found\n");
    }

    // average value
    for (int i = 0; i < arr_max; i++)
    {
        total_value += ranmax[i];
    }
    avg = total_value / arr_max;
    printf("Average: %f\n", avg);
    return 0;
}