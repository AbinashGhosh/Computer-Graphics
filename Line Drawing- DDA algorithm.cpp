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

    double steps,xf=x1,yf=y1;

    int x=x1,y=y1;

    if(dx>=dy)steps=abs(dx);
    else steps=abs(dy);

    double xInc=dx/steps;
    double yInc=dy/steps;

    for(int i=0;i<=steps;i++){
        putpixelb(x,y);
        xf=xf+xInc;
        yf=yf+yInc;
        x=floor(xf+0.5);
        y=floor(yf+0.5);
    }

    getch();
    closegraph();
    return 0;
}

