#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    //string str="You Won";
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    line(00,100,300,100);
    line(00,200,250,200);
    //line(00,300,300,300);
    //line(300,100,300,300);

    line(50,100,50,150);
    line(75,200,75,150);
    line(100,100,100,150);
    line(125,200,125,150);
    line(150,100,150,150);
    line(175,200,175,150);
    line(200,100,200,150);
    line(225,200,225,150);
    circle(10, 150, 10);
/*
    line(50,200,50,250);
    line(75,300,75,250);
    line(100,200,100,250);
    line(125,300,125,250);
    line(150,200,150,250);
    line(175,300,175,250);
    line(200,200,200,250);
    line(225,300,225,250);

    rectangle(00,230,20,270);
*/
    h1:
    int i, c, x1=10, y1=150, j=10, k=10, l=10, m=10;
    for(i = 0; i < 500; i++)
    {
        //line(x1, y1, x2, y2);

        cin >> c;
        //cleardevice();
        if(c == 8)
        {
            cleardevice();
            setcolor(WHITE);
            line(00,100,1000,100);
            line(00,200,1000,200);
            line(50,100,50,150);
            line(75,200,75,150);
            line(100,100,100,150);
            line(125,200,125,150);
            line(150,100,150,150);
            line(175,200,175,150);
            line(200,100,200,150);
            line(225,200,225,150);
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL,YELLOW);
            circle(x1, y1 - j, 10);
            floodfill(x1,y1-j,YELLOW);
            x1 = x1;
            //x2 = x2;
            y1 = y1 - j;
            //y2 = y2 - j;
            //j = j + 10;
            if((y1<=110) || (y1>=190) || (x1 == 50 && y1 >=100 && y1 <=150) || (x1 == 75 && y1 >=150 && y1 <=200) || (x1 == 100 && y1 >=100 && y1 <=150) || (x1 == 125 && y1 >=150 && y1 <=200)|| (x1 == 150 && y1 >=100 && y1 <=150) || (x1 == 175&& y1 >=150 && y1 <=200) || (x1 == 200&& y1 >=100 && y1 <=150) || (x1 == 225 && y1 >=150 && y1 <=200))
            {
                goto h1;
            }
        }
        if(c == 2)
        {
            cleardevice();
            setcolor(WHITE);
            line(00,100,1000,100);
            line(00,200,1000,200);

            line(50,100,50,150);
            line(75,200,75,150);
            line(100,100,100,150);
            line(125,200,125,150);
            line(150,100,150,150);
            line(175,200,175,150);
            line(200,100,200,150);
            line(225,200,225,150);
            setcolor(GREEN);
            setfillstyle(SOLID_FILL,GREEN);
            circle(x1, y1 + k,10);
            floodfill(x1,y1+k,GREEN);
            x1 = x1;
            y1 = y1 + k;
            if(y1<=100||y1>=200||x1 == 50 && y1 >=100 && y1 <=150 || x1 == 75 && y1 >=150 && y1 <=200 || x1 == 100 && y1 >=100 && y1 <=150 || x1 == 125 && y1 >=150 && y1 <=200|| x1 == 150 && y1 >=100 && y1 <=150 || x1 == 175&& y1 >=150 && y1 <=200 || x1 == 200&& y1 >=100 && y1 <=150 || x1 == 225 && y1 >=150 && y1 <=200)
            {
                goto h1;
            }
            //k = k + 10;
        }
        if(c == 6)
        {
            cleardevice();
            setcolor(WHITE);
            line(00,100,1000,100);
            line(00,200,1000,200);

            line(50,100,50,150);
            line(75,200,75,150);
            line(100,100,100,150);
            line(125,200,125,150);
            line(150,100,150,150);
            line(175,200,175,150);
            line(200,100,200,150);
            line(225,200,225,150);
            setcolor(BLUE);
            setfillstyle(SOLID_FILL,BLUE);
            circle(x1 + l, y1,10);
            floodfill(x1+l,y1,BLUE);
            x1 = x1 + l;
            //x2 = x2 + k;
            y1 = y1;
            //y2 = y2;
            //l = l + 10;
            if(y1<=100||y1>=200||x1 == 50 && y1 >=100 && y1 <=150 || x1 == 75 && y1 >=150 && y1 <=200 || x1 == 100 && y1 >=100 && y1 <=150 || x1 == 125 && y1 >=150 && y1 <=200|| x1 == 150 && y1 >=100 && y1 <=150 || x1 == 175&& y1 >=150 && y1 <=200 || x1 == 200&& y1 >=100 && y1 <=150 || x1 == 225 && y1 >=150 && y1 <=200)
            {
                goto h1;
            }
        }
        if(c == 4)
        {
            cleardevice();
            setcolor(WHITE);
            line(00,100,1000,100);
            line(00,200,1000,200);

            line(50,100,50,150);
            line(75,200,75,150);
            line(100,100,100,150);
            line(125,200,125,150);
            line(150,100,150,150);
            line(175,200,175,150);
            line(200,100,200,150);
            line(225,200,225,150);
            setcolor(RED);
            setfillstyle(SOLID_FILL,RED);
            circle(x1 - m, y1,10);
            floodfill(x1-m,y1,RED);
            x1 = x1 - m;
            //x2 = x2 - k;
            y1 = y1;
            //y2 = y2;
            //m = m + 10;
            if(y1<=100||y1>=200||x1 == 50 && y1 >=100 && y1 <=150 || x1 == 75 && y1 >=150 && y1 <=200 || x1 == 100 && y1 >=100 && y1 <=150 || x1 == 125 && y1 >=150 && y1 <=200|| x1 == 150 && y1 >=100 && y1 <=150 || x1 == 175&& y1 >=150 && y1 <=200 || x1 == 200&& y1 >=100 && y1 <=150 || x1 == 225 && y1 >=150 && y1 <=200)
            {
                goto h1;
            }
        }


        if(x1>=250 && y1<=200 && y1>=100)
        {
            cleardevice();
            cout << "You Won" << endl;
        }
    }


    getch();
    closegraph();
    return 0;
}
