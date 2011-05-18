#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/fb.h>

int main(int argc , char * argv[])
{
    struct fb_var_screeninfo fb_var;
    int fd = open("/dev/fb0",O_RDWR);
    ioctl(fd ,FBIOGET_VSCREENINFO,&fb_var);
    printf("width:%d\t\n",fb_var.xres);
    printf("high:%d\t\n",fb_var.yres);
    printf("bpp:%d\t\n",fb_var.bits_per_pixel);

    close(fd);
    return 0;
}
