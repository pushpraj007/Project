#include<graphics.h>
#include<conio.h>
#include<dos.h>
main()
{

int gd=0,gm,c=110,v=150,b=160,n=200,m=210,p=250,o=260,i=300,u=310,y=350,t=360,r=400;
char ch;
//int c=110
clrscr();
initgraph(&gd,&gm,"C:/turboc3/bgi");
{  settextstyle(4,0,7);
  outtextxy(1,320,"VIRTUAL PIANO");
  }
   bar(c,100,v,200);
   outtextxy(110,210,"A");

   bar(b,100,n,200);
   outtextxy(160,210,"S");

   bar(m,100,p,200);
   outtextxy(210,210,"D");
   bar(o,100,i,200);
   outtextxy(260,210,"F");
   bar(u,100,y,200);
   outtextxy(310,210,"G");
   bar(t,100,r,200);
   outtextxy(360,210,"H");

  while(1)
  {
   ch=getch();
   if(ch=='e')
   {
      break;
   }
   if(ch=='a')
   {
   setfillstyle(1,RED);
   setcolor(RED);
   bar(c,100,v,200);
   outtextxy(110,210,"A");
   setfillstyle(1,WHITE);
   setcolor(WHITE);
   bar(b,100,n,200);
   outtextxy(160,210,"S");
   bar(m,100,p,200);
   outtextxy(210,210,"D");
   bar(o,100,i,200);
   outtextxy(260,210,"F");

   bar(u,100,y,200);
   outtextxy(310,210,"G");
   bar(t,100,r,200);
   outtextxy(360,210,"H");
   sound(1000);
   }
   if(ch=='s')
   {
   setfillstyle(1,WHITE);
   setcolor(WHITE);

   bar(u,100,y,200);
   outtextxy(310,210,"G");
   bar(t,100,r,200);
   outtextxy(360,210,"H");
   bar(o,100,i,200);
   outtextxy(260,210,"F");
   bar(c,100,v,200);
   outtextxy(110,210,"A");
   setfillstyle(1,RED);
   setcolor(RED);
   bar(b,100,n,200);
   outtextxy(160,210,"S");

   setfillstyle(1,WHITE);
   setcolor(WHITE);
   bar(m,100,p,200);
   outtextxy(210,210,"D");
   sound(2000);
   }
   if(ch=='d')
   {
   setfillstyle(1,WHITE);
   setcolor(WHITE);

   bar(u,100,y,200);
   outtextxy(310,210,"G");
   bar(t,100,r,200);
   outtextxy(360,210,"H");
   bar(c,100,v,200);
   outtextxy(110,210,"A");
   bar(o,100,i,200);
   outtextxy(260,210,"F");
   setfillstyle(1,WHITE);
   setcolor(WHITE);
   bar(b,100,n,200);
   outtextxy(160,210,"S");

   setfillstyle(1,RED);
   setcolor(RED);
   bar(m,100,p,200);
   outtextxy(210,210,"D");
   sound(3000);
   }
   if(ch=='f')
   {
   setfillstyle(1,WHITE);
   setcolor(WHITE);

   bar(u,100,y,200);
   outtextxy(310,210,"G");
   bar(t,100,r,200);
   outtextxy(360,210,"H");
   bar(c,100,v,200);
   outtextxy(110,210,"A");
   setfillstyle(1,WHITE);
   setcolor(WHITE);
   bar(b,100,n,200);
   outtextxy(160,210,"S");
   bar(m,100,p,200);
   outtextxy(210,210,"D");
   setfillstyle(1,RED);
   setcolor(RED);
   bar(o,100,i,200);
   outtextxy(260,210,"F");
   sound(4000);

   }
if(ch=='g')
   {
   setfillstyle(1,WHITE);
   setcolor(WHITE);
   bar(o,100,i,200);
   outtextxy(260,210,"F");

   bar(t,100,r,200);
   outtextxy(360,210,"H");
   bar(c,100,v,200);
   outtextxy(110,210,"A");
   setfillstyle(1,WHITE);
   setcolor(WHITE);
   bar(b,100,n,200);
   outtextxy(160,210,"S");
   bar(m,100,p,200);
   outtextxy(210,210,"D");
   setfillstyle(1,RED);
   setcolor(RED);
     bar(u,100,y,200);
   outtextxy(310,210,"G");

   sound(5000);
   }
       if(ch=='h')
   {
   setfillstyle(1,WHITE);
   setcolor(WHITE);
   bar(o,100,i,200);
   outtextxy(260,210,"F");


 bar(u,100,y,200);
   outtextxy(310,210,"G");
   bar(c,100,v,200);
   outtextxy(110,210,"A");
   setfillstyle(1,WHITE);
   setcolor(WHITE);
   bar(b,100,n,200);
   outtextxy(160,210,"S");
   bar(m,100,p,200);
   outtextxy(210,210,"D");
   setfillstyle(1,RED);
   setcolor(RED);

   bar(t,100,r,200);
   outtextxy(360,210,"H");


   sound(6000);
   }

   delay(210);
   nosound();

  }

  getch();
  closegraph();
}