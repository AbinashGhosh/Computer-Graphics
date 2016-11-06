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
    scanf("%lf",&r);
    x=0,y=r;
    double d=3-2*r;
    while(x<=y)
    {
        putpixelb(h+x,k+y);
        putpixelb(h-x,k+y);
        putpixelb(h+x,k-y);
        putpixelb(h-x,k-y);

        putpixelb(h+y,k+x);
        putpixelb(h-y,k+x);
        putpixelb(h+y,k-x);
        putpixelb(h-y,k-x);

        if(d<0)d=d+4*x+6;
        else{
            d=d+4*(x-y)+10;
            y--;
        }
        x++;
    }
    getch();
    closegraph();
    return 0;
}
