#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd,gm;
    gd=DETECT;
    initgraph(&gd,&gm,"C:\\TC\\bgi");
    line(100,100,200,100);
    getch();
    closegraph();
    return 0;
}
