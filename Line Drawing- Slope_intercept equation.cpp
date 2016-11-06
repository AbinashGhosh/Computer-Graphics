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
    int x1,x2,y1,y2;

    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);

    int dx=x2-x1;
    int dy=y2-y1;
    int x=x1,y=y1;


    double m=(dx*1.)/(dy*1.);

    double xf,yf,b=y-m*x;
    if(dx>=dy){
        while(x<=x2){
            putpixelb(x,y);
            x++;
            yf=m*x+b;
            y=floor(yf+0.5);
        }
    }
    else
    {
        while(y<=y2){
            putpixelb(x,y);
            y++;
            xf=(y-b)/m;
            x=floor(xf+0.5);
        }

    }

    getch();
    closegraph();
    return 0;
}
