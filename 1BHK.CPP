#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

setfillstyle(SOLID_FILL,RED);

line (200,100,300,200); //rightroofinner
floodfill(201,101,15);

line (200,100,100,200); //leftroofinner
floodfill(201,101,15);

line (200,80,320,200); //rightroofouter
floodfill(201,81,15);

line (200,80,80,200); //leftroofouter
floodfill(201,81,15);

line(80,200,100,200); //leftroofend
floodfill(82,199,15);
line(300,200,320,200);  //rightroofend
floodfill(301,199,15);


setfillstyle(SOLID_FILL,LIGHTMAGENTA);  //house
line (120, 180, 120, 300);
line (280,180,280,300);
line (120,300,280,300);
floodfill(121,190,15);


setfillstyle(SOLID_FILL,MAGENTA); //door
rectangle(180,230,220,300);
 floodfill(181,231,15);

setfillstyle(SOLID_FILL,DARKGRAY); //window left
rectangle (140, 190, 170,220);
 floodfill(141,191,15);

setfillstyle(SOLID_FILL,DARKGRAY); //window right
rectangle (230,190,260,220);
 floodfill(231,191,15);


setfillstyle(SOLID_FILL,BROWN); //doorknob
circle(210,260,3);
floodfill(211,260,15);

setfillstyle(SOLID_FILL,DARKGRAY);   //exhaust
line (120,120, 120, 160);
line (150, 120, 150, 130);
floodfill(145,122,15);

setfillstyle(SOLID_FILL,BLACK);  //exhausttop
rectangle(115, 110, 155, 120);
floodfill(116,111,15);

setfillstyle(SOLID_FILL,LIGHTGRAY);
arc (130,110,0,80,20);
arc (110,90,350,110,30);
arc (75,75,220,340,30);
arc(120,90,160,260,20);
arc (75,75,20,160,30);
arc (40,75,40,320,40);
floodfill(75,75, 15);

//tree
//branches
setfillstyle(SOLID_FILL,BROWN);
arc(310,420,340,50,270);
arc(310,420,30,50,290);
arc(310,220,350,10,270);
arc(310,220,350,10,290);
arc(440,70,310,350,260);
arc(440,70,310,350,275);
line(500,214,484,214);//left branch
line(500,214,496,198);
line(560,270,580,260);
line(595,260,610,270);//right branch
line(575,172,600,175);//middle branch
floodfill(590,400,15);

//leaves
setfillstyle(SOLID_FILL,GREEN);
arc(540,280,180,300,30);
arc(510,270,180,300,30);
arc(460,250,90,330,30);
arc(460,200,60,250,30);
arc(490,160,30,220,30);
arc(530,130,0,210,30);
arc(580,120,340,180,30);
arc(620,120,350,150,30);
floodfill(530,230,15);

//apples
setfillstyle(SOLID_FILL,RED);
circle(530,280,10);
circle(560,190,10);
circle(500,190,10);
circle(540,140,10);
circle(620,160,10);
circle(620,200,10);
circle(470,250,10);
floodfill(530,280,15);
floodfill(560,190,15);
floodfill(500,190,15);
floodfill(540,140,15);
floodfill(620,160,15);
floodfill(620,200,15);
floodfill(470,250,15);
//newton
line(550,420,555,465); //hands
line(565,420,570,465);
line(555,465,570,465);
circle(563,470,5);
arc(550,370,132,190,20);//face
line(530,375,525,385);
line(525,385,530,385);
line(530,385,533,390);
line(533,390,538,390);
line(538,390,536,395);
arc(545,390,200,300,10);
line(550,400,540,408);//clothes
line(540,408,568,398);//collar
line(550,400,560,396);
line(575,396,580,440);
line(540,405,540,450);//clothe
line(540,450,510,420);//outerlegs
line(510,420,480,450);//innerlegs
line(490,462,510,440);//rightlegs
line(510,440,531,462);

line(480,450,490,463);
line(545,463,480,463);
line(545,463,555,480);
line(555,480,575,475);
line(545,463,540,450);
line(555,477,485,477);//left leg
line(485,477,480,463);
line(485,475,475,475);//shoes
line(475,475,465,460);
line(465,460,470,455);
line(470,455,480,468);
line(472,460,482,450);
line(500,408,550,400);//hands
line(500,408,505,420);
line(505,420,540,420);
circle(497,415,5);
arc(570,387,270,90,10);//hair
arc(555,365,310,110,20);
arc(543,350,0,270,10);
arc(557,363,140,270,13);
arc(567,385,130,360,12);

//eyes
circle(538,372,3);
line(535,365,542,368);


//lake
setfillstyle(SOLID_FILL,BLUE);
ellipse(50,430,0,360,360,70);
floodfill(50,430,15);

//scenery
setfillstyle(SOLID_FILL,LIGHTGREEN);
line(0,250,120,250);//land corner
line(280,250,430,250);
line(280,160,350,90);//left mountains
line(350,90,430,170);
line(420,160,490,90);
line(490,90,509,109);
line(0,200,80,120);
line(80,120,120,150);
floodfill(290,160,15);
floodfill(80,150,15);

//brids
arc(450,50,0,90,5);
arc(460,50,90,180,5);
arc(480,70,0,90,5);
arc(490,70,90,180,5);
arc(420,70,90,180,5);
arc(410,70,0,90,5);
arc(440,90,0,90,5);
arc(450,90,90,180,5);
arc(400,90,90,180,5);
arc(390,90,0,90,5);
arc(390,50,0,90,5);
arc(400,50,90,180,5);
arc(540,50,0,90,5);//right
arc(550,50,90,180,5);
arc(590,70,90,180,5);
arc(580,70,0,90,5);
arc(300,70,0,90,5);//left
arc(310,70,90,180,5);
arc(260,50,0,90,5);
arc(270,50,90,180,5);
arc(260,90,0,90,5);
arc(270,90,90,180,5);

setfillstyle(SOLID_FILL,YELLOW); //bg
floodfill(350,350, 15);

setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(50,120,15);
floodfill(150,50,15);

setfillstyle(SOLID_FILL,CYAN);
floodfill(550,450,15);
floodfill(510,410,15);

setfillstyle(SOLID_FILL,LIGHTRED);
floodfill(540,470,15);
floodfill(540,460,15);

setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(570,387,15);

setfillstyle(SOLID_FILL,YELLOW);
floodfill(530,430,15);
floodfill(515,448,15);

setfillstyle(SOLID_FILL,BROWN);
floodfill(480,470,15);
floodfill(480,466,15);
floodfill(497,415,15);
floodfill(563,470,15);
floodfill(555,390,15);

setfillstyle(SOLID_FILL,CYAN);
floodfill(560,400,15);

getch();
closegraph();
}