#include<cstdio>
#include<cmath>
#include<graphics.h>
#include<conio.h>
#define winsz 500
using namespace std;
int toggle=0;
void initial()
{
    initwindow(winsz,winsz,"test");
    for(int i=0; i<=winsz; i++)
    {
        putpixel(i,winsz/2,WHITE);
        putpixel(winsz/2,i,WHITE);
    }
}
void putpixelb(int x,int y,int color=WHITE)
{
    if(toggle==1)swap(x,y);
    putpixel(x+winsz/2,winsz/2-y,color);
}
int main()
{
    initial();

    int x1,x2,y1,y2;

    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);

    int dx=abs(x2-x1);
    int dy=abs(y2-y1);


    if(dx<=dy)
        swap(x1,y1),swap(x2,y2),swap(dx,dy),toggle=1;
    if(x1>=x2)
        swap(x1,x2),swap(y1,y2);

    int y=y1,x=x1;
    int d=2*dy-dx;
    int end=x2,inc;

    if(y1<y2)inc=1;
    if(y1>y2)inc=-1;

    while(x<=end)
    {
        putpixelb(x,y);
        if(d<0) d=d+2*dy;
        else
        {
            y=y+inc;
            d=d+2*(dy-dx);
        }
        x++;
    }

    getch();
    closegraph();
    return 0;
}

