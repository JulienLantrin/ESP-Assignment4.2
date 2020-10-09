#include <fcntl.h>
#include <unistd.h>
#include <linux/string.h>
#include <stdio.h>

void *HelloTask(void *param)
{
    char out_buffer [] = "Hello world";
    int count = strlen(out_buffer);
    int fd = open("/dev/hello1",O_RDWR);

    while(1)
    {
        sleep(1);
        int ret = write(fd, out_buffer, count);
        if (ret < 0) printf("Error");
    }
    close(fd);
}