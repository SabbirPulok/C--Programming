#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gn=DETECT,gm;
    initgraph(&gn,&gm, "C:\\TC\\BGI");
    circle(10,30,4);
    getch();
    closegraph();
}
