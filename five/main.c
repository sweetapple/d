#include <stdio.h>
#include <unistd.h>
#include "main.h"

int main(int argc, const char *argv[])
{
    init_screen();                    //初始化
//    fb_one_pixel(500, 300,0x00ff0000);
//    fb_line(1000,400,0,300,0x0000ff00);
//    fb_line(0,400,1000,300,0x0000ff00);
//    fb_line(400,700,600,0,0x0000ff00);
/*    fb_line(312,184,612,184,0x000000ff);
    fb_line(312,484,612,484,0x000000ff);
    fb_line(612,484,612,184,0x000000ff);
    fb_line(312,484,312,184,0x000000ff);
    fb_circle(312,184,13,0x0000ff00);
    fb_circle(612,184,13,0x0000ff00);
    fb_circle(312,484,13,0x0000ff00);
    fb_circle(612,484,13,0x0000ff00);*/
//    print_board();
//    fb_circle(50,50,20,0x000000ff);
/*    save_bg(512,367);
    draw_cursor(512,367);                                      //打印背景
    sleep(2);                                                  //延迟2 秒
    restore(512,367);                                          //恢复内存
    save_bg(400,300);                                          //存储背景
    draw_cursor(400,300);   
    sleep(2);                                                  //延迟2 秒
    restore(400,300);                                          //恢复内存
    save_bg(400,400);                                          //存储背景
    draw_cursor(400,400);   
    sleep(2);                                                  //延迟2 秒
    restore(400,400);                                          //恢复内存
    save_bg(400,500);                                          //存储背景
    draw_cursor(400,500); */  
    mouse_doing();
 //   chess_do();
/*    fb_line(312,184,612,184,0x000000ff);
    fb_line(312,484,612,484,0x000000ff);
    fb_line(612,484,612,184,0x000000ff);
    fb_line(312,484,312,184,0x000000ff);
    fb_circle(312,184,13,0x0000ff00);
    fb_circle(612,184,13,0x0000ff00);
    fb_circle(312,484,13,0x0000ff00);
    fb_circle(612,484,13,0x0000ff00);*/
    return 0;
}
