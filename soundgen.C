#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int i=10;
void sund(int i)
{
	sound(105*(i/3));
	delay(80);
	sound(101*(i/2));
	delay(80);
	sound(100*(i/1));
	delay(80);
	nosound();
}
void main()
{
	while(i>0){
	getch();
	sund(random(100));
	i--;
	main();
	}
}