#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
void dispinf(char* name,char *lname)
{
	char tmp[10]={0},tmp2[10]={0},luck[5]={0};
	int i,j,store,k=0;
	setbkcolor(DARKGRAY);
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
	moveto(0,0);
	outtext("PLAYER:");
	settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
	store=getx();
	for(i=0;name[i]!='\0';i++)
	{
		setcolor((rand()%7)+8);
		sound((i*3)*140+200);
		tmp[0]=name[i];
		moveto(getx()+40,gety());
		outtextxy(getx(),gety(),tmp);
		delay(160);
		nosound();

	}
	moveto(store,gety()+60);
	j=--i;
	for(i=0;lname[i]!='\0';i++)
	{
		setcolor((rand()%7)+8);
		sound((j*2)*170+200);
		j--;
		tmp2[0]=lname[i];
		moveto(getx()+40,gety());
		outtextxy(getx(),gety(),tmp2);
		delay(160);
		nosound();
	}
	moveto(10,gety()+100);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,8);
	outtext("YOUR LUCK IS");
	while(k<3){
		delay(500);
		outtext(".");
		k++;
	}
	moveto(250,gety()+130);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,11);
	setcolor(rand()%7+8);
	srand(time(NULL));
	luck[0]=((rand()%10)+'0');
	//srand(time(NULL));
	delay(1000);
	luck[1]=((rand()%10)+'0');
	sound(320);
	outtext(luck);
	outtext("%");
	delay(300);
	nosound();
	delay(300);
	sound(320);
	delay(300);
	nosound();
}
void main()
{
	int gd=DETECT, gm;
	char name[50],lname[50];

	textattr(random(100)+'a'+BLINK);
	printf("\n\n\t\t\t");
	cprintf("******LUCK CALCULATOR*****\n");
	printf("\n\n\n\nEnter your First Name:\t");
	scanf("%s",name);
	printf("\n\n\n\nEnter your Last Name:\t");
	scanf("%s",lname);
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	cleardevice();
	dispinf(name,lname);
	getch();
	closegraph();
}