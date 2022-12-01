#include <stdio.h>

main()
{
    int mas[7];
    printf("Введите 7 элементов массива:\n");

    for(int i=0;i<7;i++)
    {
        scanf("%i",&mas[i]);
    }

    for(int i=0;i<7;i++)
    {
        printf("%2i",mas[i]);
    }
}