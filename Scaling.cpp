#include<cstdio>
#include<cmath>
#include<graphics.h>
#include<conio.h>
#include <algorithm>
#define winsz 500
#define x first
#define y second
#define PI acos(-1.0)

using namespace std;
typedef  pair <double , double> pdd;

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
void lined(int x1,int y1,int x2,int y2){

    line(x1+winsz/2,winsz/2-y1,x2+winsz/2,winsz/2-y2);
}

///Scaling point w.r.t. b
inline pdd scalingPointByB(pdd s , pdd a,pdd b)
{
    pdd r;
    a.x-=b.x;
    a.y-=b.y;
    r.x=b.x+a.x*s.x;
    r.y=b.y+a.y*s.y;
    return r;
}

 void linedraw(int x1,int x2,int y1,int y2)
 {

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
        x=floor(xf+0.5);
        yf=yf+yInc;
        y=floor(yf+0.5);
    }

 }
int main()
{
    initial();
    lined(10,200,100,150);
    pdd p,s;
    scanf("%lf%lf",&s.x,&s.y);

    for(int i=1;i<=4;i++)
    {

    scanf("%lf%lf",&p.x,&p.y);

    pdd r=scalingPointByB(s,p,make_pair(75,75));

    putpixelb(p.x,p.y);
    putpixelb(r.x,r.y);
    printf("%lf",r.x);
    printf("%lf",r.y);

    }

    getch();
    closegraph();
    return 0;
}



