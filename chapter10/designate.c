//
// Created by harold on 2017/12/25.
//
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {22,28,[2] = 31,30,31,[4] = 29,[5]=6};
    int i;
    for(i =1 ; i <= MONTHS; i++)
    {
        printf("%2d %d\n",i,days[i-1]);
    }
    return 0;
}
