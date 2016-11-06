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

///Rotate point a CCW alpha radian w.r.t. b
inline pdd rotatePointByB(double alpha , pdd a,pdd b)
{
    pdd r;
    a.x-=b.x;
    a.y-=b.y;
    r.x=b.x+a.x*cos(alpha)-a.y*sin(alpha);
    r.y=b.y+a.x*sin(alpha)+a.y*cos(alpha);
    return r;
}

int main()
{
    initial();
    pdd p;
    double angle;
    scanf("%lf",&angle);
    angle=angle*PI/180.0;
    for(int i=1;i<=4;i++)
    {
    scanf("%lf%lf",&p.x,&p.y);

    pdd r=rotatePointByB(angle,p,make_pair(75,75));

    putpixelb(p.x,p.y);
    putpixelb(r.x,r.y);

    }
    getch();
    closegraph();
    return 0;
}


