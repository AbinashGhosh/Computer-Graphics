#include<cstdio>
#include<cmath>
#include<graphics.h>
#include<conio.h>
#define winsz 500
void initial()
{
    initwindow(winsz,winsz,"test");
    for(int i=0;i<=winsz;i++){
        putpixel(i,winsz/2,WHITE);
        putpixel(winsz/2,i,WHITE);
    }
}


void putpixelb(int x,int y,int color=WHITE){
    putpixel(x+winsz/2,winsz/2-y,color);
}

int main()
{
    initial();


    getch();
    closegraph();
    return 0;
}















