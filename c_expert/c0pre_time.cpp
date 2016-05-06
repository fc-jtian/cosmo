#include <stdio.h>
#include <time.h>

int main()
{
    time_t biggest=0x7FFFFFFF;
    //ctime()函数把参数转换为当地时间
    printf("biggest = %s \n", ctime(&biggest));
    return 0;
}