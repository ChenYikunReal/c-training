#include <stdio.h>
#include <time.h>

/**
 * 时间函数
 * @return
 */
int main ()
{
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "%s", asctime (timeinfo) );

    return 0;
}
