#include<cstdio>
#include<cmath>
#include<graphics.h>
#include<conio.h>
#define winsz 500
#define  PI (acos(-1.0))

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
    double x,y,r,ss,h,k;

    scanf("%lf%lf",&h,&k);
    scanf("%lf%lf",&r,&ss);

    for(double t=0.0;t<=PI/4.0;t+=ss)
    {
        x=r*cos(t);
        y=r*sin(t);

        putpixelb(h+x,k+y);
        putpixelb(h-x,k+y);
        putpixelb(h+x,k-y);
        putpixelb(h-x,k-y);

        putpixelb(h+y,k+x);
        putpixelb(h-y,k+x);
        putpixelb(h+y,k-x);
        putpixelb(h-y,k-x);
    }
    getch();
    closegraph();
    return 0;
}
