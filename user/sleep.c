#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    int sleep_time;

    if(argc <= 1)
    {
        printf("usage: sleep <time>\n");
        exit(1); // exit 1 表示异常退出
    }

    sleep_time = atoi(argv[1]);

    sleep(sleep_time);

    exit(0); // exit 0 表示正常退出
}