#include <stdio.h>
#include <time.h>

/*
gmtime()获得UTC时间
asctime()时间转换为ascii码
*/
int main()
{
    time_t biggest = 0x7FFFFFFF;
    printf("biggest = %s \n", asctime(gmtime(&biggest)));
    return 0;
}