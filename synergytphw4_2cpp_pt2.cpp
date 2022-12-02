#include <stdio.h>

main()
{
    int n = 0;
    int mas[100];

    while ((n < 1) || (n > 100))
    {
        printf("Ведите олличество элементов массива от 1 до 100 включительно ");
        scanf("%i",&n);
    }
    
    printf("Вводите значения массива последоватенльно через Enter \n");

    for(int i=0;i<n;i++)
    {
        scanf("%i",&mas[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%2i",mas[i]);
    }
}