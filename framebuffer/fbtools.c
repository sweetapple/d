#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/user.h>
#include "fbtools.h"
#define TRUE 1
#define FALSE 0
#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))
typedef unsigned short int u16_t;
typedef unsigned long int u32_t;




//open * init a frame buffer
int fb_open(PFBDEV pFbdev)
{
    pFbdev->fb = open(pFbdev->dev,O_RDWR);
    if(pFbdev->fb <0)
    {
        printf("error opening %s:%m.check kernel config\n",pFbdev->dev);
        return FALSE;
    }
    if (-1 == ioctl(pFbdev->fb,FBIOGET_VSCREENINFO,&(pFbdev->fb_var))) 
    {
        printf("ioctl FBIOGET_VSCREENINFO\n");
        return FALSE;
    }
    if (-1 == ioctl(pFbdev->fb,FBIOGET_FSCREENINFO,&(pFbdev->fb_fix))) 
    {

        printf("ioctl FBIOGET_FSCREENINFO\n");
        return FALSE;
    }
//map physics address to virtual address
    pFbdev->fb_mem_offset = (unsigned long)(pFbdev->fb_fix.smem_start) &(~PAGE_MASK);
    pFbdev->fb_mem = (unsigned long int)mmap(NULL,pFbdev->fb_fix.smem_len +pFbdev->fb_mem_offset, PROT_READ | PROT_WRITE, MAP_SHARED,pFbdev->fb,0);
    if (-1L ==(long)pFbdev->fb_mem) 
    {
        printf("mmap error! mem:%lx offset:%lu\n",pFbdev->fb_mem,pFbdev->fb_mem_offset);
        return FALSE;
    }
    return TRUE;
}
//close frame buffer
int fb_close(PFBDEV pFbdev)
{
    close(pFbdev->fb);
    pFbdev->fb=-1;
}
//get display depth
int get_display_depth(PFBDEV pFbdev)
{
    if (pFbdev->fb <= 0) 
    {
        printf("fb device not open, open it first\n");
        return FALSE;
    }
    return pFbdev->fb_var.bits_per_pixel;
}
//full screen clear
void fb_memset(void *addr,int c,size_t len)
{
    memset(addr,c,len);
}
//use by test
#define DEBUG
#ifdef DEBUG
void fb_drawpixel( PFBDEV pFbdev,int x,int y,u32_t color )
{
    int i;
    u32_t *p = (u32_t *)pFbdev->fb_mem;

    //zhuanhuan  x, y zuobiao duiying de p  shuzuxiabiao
    i = x +y*pFbdev->fb_var.xres;
    p[i] = color;
    return ;
}
void fb_drawvline(PFBDEV pFbdev,int x, int y, u32_t color)
{
    int i;
    for (i = 0; i < pFbdev->fb_var.yres; i++) 
    {
        fb_drawpixel(pFbdev,x,i,color);   
    }
}
void fb_drawwline(PFBDEV pFbdev,int x, int y, u32_t color)
{
    int i;
    for (i = 0; i < pFbdev->fb_var.yres; i++) 
    {
        fb_drawpixel(pFbdev,i,384,0x0000ff00);   
    }
}
void fb_drawfpage(PFBDEV pFbdev,int x,int y, u32_t color)
{
    int i=0;
    for (i = x; i < 500; i++) 
    {
        if(i%10==9)
        {
            fb_drawvline(pFbdev,i,100,0x00ff0000);
        }
        else
        {
            fb_drawvline(pFbdev,i,100,color);
        }
    }
}
void fb_drawxline(PFBDEV pFbdev,int x,int y,u32_t color)
{
    int i=0;
    int j=0;
    for (i=0, j=0; i<1024, j<768; i++, j++) 
    {
        fb_drawpixel(pFbdev,i,j,color);
    }
}
main()
{
    FBDEV fbdev;
    memset(&fbdev,0,sizeof(FBDEV));
    strcpy(fbdev.dev,"/dev/fb0");
    if (fb_open(&fbdev)==FALSE) 
    {
        printf("open frame buffer error\n");
        return;
    }
    fb_memset((void *)(fbdev.fb_mem + fbdev.fb_mem_offset),0,fbdev.fb_fix.smem_len);
//    fb_drawpixel(&fbdev,512,384,0x00ff0000);
//    fb_drawpixel(&fbdev,512,385,0x00ff0000);
//    fb_drawpixel(&fbdev,513,384,0x00ff0000);
//    fb_drawpixel(&fbdev,513,385,0x00ff0000);
    //画垂直方向的直线
//    fb_drawvline(&fbdev,512,384,0x0000ff00);
//    fb_drawwline(&fbdev,512,384,0x0000ff00);
//    fb_drawfpage(&fbdev,100,384,0x0000ff00);
    fb_drawxline(&fbdev,100,100,0x00ff0000);
    fb_close(&fbdev);
    getchar();
}
#endif
