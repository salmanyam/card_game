/*
	author: Salman Ahmed
	Std.0705058,Dept.CSE(A)
*/
# include "iGraphics.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void random();
void ellipse(void);
void card_bmp();
void itoa(int n, char s[]);
void score_show();
void scoreShown();
void current_score();
void cardshow();
void shufflecard();
void sorting();
void other_cardshow();


void myCard_showed();
void myCard_showing();

void play();
//void play_card();

void pop_card();
void card_lead();
void player1();
void player2();
void player3();
void my_turn();
void card_play();

void played();
void played_card();

void turn_start();
void turn_other_players();




char str[100], str2[100];
int len;
int mode;

int cards[52],myCards[13],my_array[13],comCards[3][13],game[4],save_score[4];
char str1[],str2[],score[50];
int count=0,num,chance,chance1=1,temp=0,restart=0;
int card=13,ply_card=13,total_cards=52,s=0,i,j,p=0,q,m,n,v[3][13];
int ax,ay,lx,ly,dx,dy,r=0,l=0,b=0,w=0,click=0,bid=0,t,g,a,c,score1=0,score2=0,score3=0,score4=0;
int pr1=0,pr2=0,pr3=0,pr4,p1,p2,p3;
int club=0,heart=0,dias=0,spade=0;
int sa1,sb1,sa2,sb2,sa3,sb3,sa4,sb4,sc=0;
int draw=0,spadetrum=0,spadetrum1,bmx=620,bmy=210,bmpx=100,bmpy=20;
int final_score1[20],final_score2[20],final_score3[20],final_score4[20],score_temp=0,turn=0;
int prox=400,proy=-20,prody=25,proceed=0,start=1,cx,cy,wx,wy,wlx,wly;

void drawTextBox()
{
	iSetColor(130,0,0);
	iText(240,171,"ENTER NICK:",GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 255);
	iFilledRectangle(360, 165, 175, 30);
}
/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here	
/*	iClear();
	iSetColor(250,100,255);
	iFilledRectangle(0,0,900,800);

	iShowBMP(180,560,"welcome.bmp");
	iShowBMP(180,400,"salman.bmp");
	iShowBMP(300,300,"click1.bmp");
	iShowBMP(350,200,"click2.bmp");
	iShowBMP(380,140,"exit.bmp");*/

	iClear();
///	iSetColor(90,240,252);
///	iFilledRectangle(0,200,600,500);
	iShowBMP(10,200,"wallpaper.bmp");
	iSetColor(0,127,0);
	iFilledRectangle(0,0,900,200);
	iShowBMP(688,10,"exit.bmp");
///	card_bmp();

	iSetColor(0,0,0);
	iFilledRectangle(600,200,300,500);

///	iShowBMP(40,400,"salman.bmp");
///	iShowBMP(40,550,"welcome.bmp");
///	iShowBMP(170,50,"welcome.bmp");
///	iShowBMP(150,315,"click1.bmp");
	iShowBMP(380,200,"click.bmp");
	

///	iSetColor(200,80,245);
///	iFilledRectangle(0,200,40,500);
	
	//iSetColor(45,55,145);
///	iFilledRectangle(550,200,40,500);

///	iSetColor(110,205,255);
//    iFilledRectangle(535,232,15,168);

///	iFilledRectangle(40,678,510,22);
//	iSetColor(240,252,110);
///	iFilledRectangle(40,528,510,22);
///	iSetColor(240,252,110);
///	iFilledRectangle(40,380,511,20);

///	iSetColor(110,205,255);
///	iFilledRectangle(40,200,108,179);
	//iSetColor(240,252,110);
///	iFilledRectangle(405,200,130,179);
///	iSetColor(0,0,255);
///	iFilledRectangle(148,200,257,49);
//	iSetColor(240,252,110);
///	iFilledRectangle(148,282,257,24);
	

	iSetColor(0,252,240);
	iText(358,122,"-------",GLUT_BITMAP_HELVETICA_18);
	iSetColor(0,0,127);
	iText(360,135,"Made By",GLUT_BITMAP_HELVETICA_18);
	iText(300,105,"SALMAN AHMED",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(270,75,"STD.0705058,DEPT. OF CSE",GLUT_BITMAP_HELVETICA_18);
	iText(140,45,"BANGLADESH UNIVERSITY OF ENGINEERING AND TECNOLOGY",GLUT_BITMAP_HELVETICA_18);

//	iSetColor(0,255,0);
///	iFilledRectangle(148,249,55,33);
///	iFilledRectangle(328,249,77,33);


	// For wallpapers showing..

/*	iSetColor(150,250,255);
	iFilledRectangle(138,10,10,175);
	iFilledRectangle(752,10,10,175);
	for(i=0;i<52;i++)
	{
      	wx=10,wy=10;
		wlx=762,wly=10;	

	   	if(cards[i]>=0 && cards[i]<=5)  iShowBMP(wx,wy,"1.bmp");
	   	else if(cards[i]>=6 && cards[i]<=10)  iShowBMP(wx,wy,"2.bmp");
	   	else if(cards[i]>=11 && cards[i]<=15)  iShowBMP(wx,wy,"3.bmp");
	   	else if(cards[i]>=16 && cards[i]<=20)  iShowBMP(wx,wy,"4.bmp");
	   	else if(cards[i]>=21 && cards[i]<=25)  iShowBMP(wx,wy,"5.bmp");
	   	else if(cards[i]>=26 && cards[i]<=30)  iShowBMP(wx,wy,"6.bmp");
	   	else if(cards[i]>=31 && cards[i]<=35)  iShowBMP(wx,wy,"7.bmp");
	   	else if(cards[i]>=36 && cards[i]<=40)  iShowBMP(wx,wy,"8.bmp");
	   	else if(cards[i]>=41 && cards[i]<=45)  iShowBMP(wx,wy,"9.bmp");
	   	else if(cards[i]>=46 && cards[i]<=51)  iShowBMP(wx,wy,"10.bmp");

		if(cards[i]>=0 && cards[i]<=5)  iShowBMP(wlx,wly,"10.bmp");
	   	else if(cards[i]>=6 && cards[i]<=10)  iShowBMP(wlx,wly,"9.bmp");
	  	else if(cards[i]>=11 && cards[i]<=15)  iShowBMP(wlx,wly,"8.bmp");
	   	else if(cards[i]>=16 && cards[i]<=20)  iShowBMP(wlx,wly,"7.bmp");
	   	else if(cards[i]>=21 && cards[i]<=25)  iShowBMP(wlx,wly,"6.bmp");
	   	else if(cards[i]>=26 && cards[i]<=30)  iShowBMP(wlx,wly,"5.bmp");
	   	else if(cards[i]>=31 && cards[i]<=35)  iShowBMP(wlx,wly,"4.bmp");
	   	else if(cards[i]>=36 && cards[i]<=40)  iShowBMP(wlx,wly,"3.bmp");
	   	else if(cards[i]>=41 && cards[i]<=45)  iShowBMP(wlx,wly,"2.bmp");
	   	else if(cards[i]>=46 && cards[i]<=51)  iShowBMP(wlx,wly,"1.bmp");
	}*/

	//card showing.....
/*	iSetColor(0,95,25);
	iFilledRectangle(855,10,35,175);
	iFilledRectangle(725,10,35,175);
	iFilledRectangle(760,10,95,25);
	iFilledRectangle(760,160,95,25);

	iSetColor(150,250,255);
	iFilledRectangle(714,10,10,175);
	for(i=0;i<52;i++)
	{
		cx=760,cy=33;
		if(cards[i]==0) iShowBMP(cx,cy,"S2.bmp");
		else if(cards[i]==1) iShowBMP(cx,cy,"S3.bmp");
		else if(cards[i]==2) iShowBMP(cx,cy,"S4.bmp");
		else if(cards[i]==3) iShowBMP(cx,cy,"S5.bmp");
		else if(cards[i]==4) iShowBMP(cx,cy,"S6.bmp");
		else if(cards[i]==5) iShowBMP(cx,cy,"S7.bmp");
		else if(cards[i]==6) iShowBMP(cx,cy,"S8.bmp");
		else if(cards[i]==7) iShowBMP(cx,cy,"S9.bmp");
		else if(cards[i]==8) iShowBMP(cx,cy,"S10.bmp");
		else if(cards[i]==9) iShowBMP(cx,cy,"SJ.bmp");
		else if(cards[i]==10) iShowBMP(cx,cy,"SQ.bmp");
		else if(cards[i]==11) iShowBMP(cx,cy,"SK.bmp");
		else if(cards[i]==12) iShowBMP(cx,cy,"S1.bmp");

		else if(cards[i]==13) iShowBMP(cx,cy,"H1.bmp");
		else if(cards[i]==14) iShowBMP(cx,cy,"H2.bmp");
		else if(cards[i]==15) iShowBMP(cx,cy,"H3.bmp");
		else if(cards[i]==16) iShowBMP(cx,cy,"H4.bmp");
		else if(cards[i]==17) iShowBMP(cx,cy,"H5.bmp");
		else if(cards[i]==18) iShowBMP(cx,cy,"H6.bmp");
		else if(cards[i]==19) iShowBMP(cx,cy,"H7.bmp");
		else if(cards[i]==20) iShowBMP(cx,cy,"H8.bmp");
		else if(cards[i]==21) iShowBMP(cx,cy,"H9.bmp");
		else if(cards[i]==22) iShowBMP(cx,cy,"H10.bmp");
		else if(cards[i]==23) iShowBMP(cx,cy,"HJ.bmp");
		else if(cards[i]==24) iShowBMP(cx,cy,"HQ.bmp");
		else if(cards[i]==25) iShowBMP(cx,cy,"HK.bmp");

		else if(cards[i]==26) iShowBMP(cx,cy,"D1.bmp");
		else if(cards[i]==27) iShowBMP(cx,cy,"D2.bmp");
		else if(cards[i]==28) iShowBMP(cx,cy,"D3.bmp");
		else if(cards[i]==29) iShowBMP(cx,cy,"D4.bmp");
		else if(cards[i]==30) iShowBMP(cx,cy,"D5.bmp");
		else if(cards[i]==31) iShowBMP(cx,cy,"D6.bmp");
		else if(cards[i]==32) iShowBMP(cx,cy,"D7.bmp");
		else if(cards[i]==33) iShowBMP(cx,cy,"D8.bmp");
		else if(cards[i]==34) iShowBMP(cx,cy,"D9.bmp");
		else if(cards[i]==35) iShowBMP(cx,cy,"D10.bmp");
		else if(cards[i]==36) iShowBMP(cx,cy,"DJ.bmp");
		else if(cards[i]==37) iShowBMP(cx,cy,"DQ.bmp");
		else if(cards[i]==38) iShowBMP(cx,cy,"DK.bmp");

		else if(cards[i]==39) iShowBMP(cx,cy,"C1.bmp");
		else if(cards[i]==40) iShowBMP(cx,cy,"C2.bmp");
		else if(cards[i]==41) iShowBMP(cx,cy,"C3.bmp");
		else if(cards[i]==42) iShowBMP(cx,cy,"C4.bmp");
		else if(cards[i]==43) iShowBMP(cx,cy,"C5.bmp");
		else if(cards[i]==44) iShowBMP(cx,cy,"C6.bmp");
		else if(cards[i]==45) iShowBMP(cx,cy,"C7.bmp");
		else if(cards[i]==46) iShowBMP(cx,cy,"C8.bmp");
		else if(cards[i]==47) iShowBMP(cx,cy,"C9.bmp");
		else if(cards[i]==48) iShowBMP(cx,cy,"C10.bmp");
		else if(cards[i]==49) iShowBMP(cx,cy,"CJ.bmp");
		else if(cards[i]==50) iShowBMP(cx,cy,"CQ.bmp");
		else if(cards[i]==51) iShowBMP(cx,cy,"CK.bmp");

	}

*/

	if(spadetrum1==4)
	{
    	iSetColor(127,200,127);
    	iFilledRectangle(660,155,150,40);
    	iSetColor(0,0,127);
    	iText(664,170,"BACK TO MENU",GLUT_BITMAP_HELVETICA_18);
	}

	if(spadetrum==0)
	{
    	ellipse();
	}

	if(spadetrum==1)
	{
	    iSetColor(0,0,0);
		iFilledRectangle(600,210,290,480);
	//	iShowBMP(bmx,bmy,"spadetrum.bmp");
		iSetColor(240,252,130);
		iText(bmx+10,bmy+30+30+30+30+30,"SPADETRUM GAME",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(bmx-5,bmy+30+30+30+30,"This very interesting game played",GLUT_BITMAP_HELVETICA_18);
		iText(bmx-20,bmy+30+30+30,"by four players.It is recurreced 13",GLUT_BITMAP_HELVETICA_18);
		iText(bmx-20,bmy+30+30," times.Every player gets 13 random ",GLUT_BITMAP_HELVETICA_18);
		iText(bmx-20,bmy+30," cards and submit one by one and ",GLUT_BITMAP_HELVETICA_18);
		iText(bmx-20,bmy,"finish a turn.Thus they finish the game.",GLUT_BITMAP_HELVETICA_18);
		bmy+=5;
		if(bmy==700)
			bmy=210;
	}
	if(spadetrum==2)
	{
		iSetColor(0,0,0);
		iFilledRectangle(600,210,290,480);
		iSetColor(240,252,130);

		iText(bmx+20,bmy+30+30+30+30,"SALMAN AHMED",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(bmx+15,bmy+30+30+30,"STD.0705058,DEPT.CSE",GLUT_BITMAP_HELVETICA_18);
		iText(bmx,bmy+30+30," MOBILE  NO: 01717530636",GLUT_BITMAP_HELVETICA_18);
		iText(bmx,bmy+30,"Email:salmanyam@yahoo.com",GLUT_BITMAP_HELVETICA_18);
		iText(bmx,bmy,"MSN:salmanyam@hotmail.com",GLUT_BITMAP_HELVETICA_18);
		bmy+=5;
		if(bmy==700)
			bmy=210;
	}

	if(spadetrum==3)
	{
		iSetColor(0,0,0);
		iFilledRectangle(600,210,290,480);
		iSetColor(240,252,130);

		iText(bmx+10,bmy+30+30+30+30+30+30,"RULES AND REGULATIONS",GLUT_BITMAP_HELVETICA_18);
		iText(bmx-10,bmy+30+30+30+30+30,"1.CLICK LEFT BUTTON TO GIVE YOUR CARD.",GLUT_BITMAP_HELVETICA_12);
		iText(bmx-10,bmy+30+30+30+30,"2.OTHER PLAYER WILL AUTOMATICALLY GIVE ",GLUT_BITMAP_HELVETICA_12);
		iText(bmx,bmy+30+30+30,"  THEIR CARDS.",GLUT_BITMAP_HELVETICA_12);
		iText(bmx-10,bmy+30+30,"3.SCORES ARE SHOWN BESIDES BIDTAKEN.",GLUT_BITMAP_HELVETICA_12);
		iText(bmx-10,bmy+30,"4.PRESS RIGHT BUTTON FOR ANOTHER TURN.",GLUT_BITMAP_HELVETICA_12);
		iText(bmx-10,bmy,"5.IF ANY PROBLEM, PRESS RIGHT BUTTON.",GLUT_BITMAP_HELVETICA_12);
		bmy+=3;
		if(bmy==900)
			bmy=210;
	}


	if(click==1)
	{
    	iSetColor(0,127,0);
    	iFilledRectangle(0,0,900,800);
//  	iShowBMP(60,630,"c.bmp");
//  	iShowBMP(780,630,"b.bmp");
//  	iShowBMP(180,680,"d.bmp");


    	if(draw==0)
		{
        	iSetColor(255,255,255);
        	iFilledRectangle(0,680,50,20);
        	iSetColor(0,0,130);
        	iText(5,685,"FILE",GLUT_BITMAP_HELVETICA_18);
		}
    	else if(draw==1)
		{
	    	iSetColor(255,255,255);

        	iFilledRectangle(0,590,150,80);
        	iSetColor(0,0,130);
        	iText(5,645,"NEW GAME",GLUT_BITMAP_HELVETICA_18);
            iText(5,618,"RESTART GAME",GLUT_BITMAP_HELVETICA_18);
        	iText(5,595,"QUIT GAME",GLUT_BITMAP_HELVETICA_18);

        	iSetColor(130,0,0);
        	iLine(0,670,150,670);
        	iLine(0,640,150,640);
        	iLine(0,610,150,610);
		}
	


		iSetColor(255,255,255);
		iFilledRectangle(657,572,200,118);
		iSetColor(150,250,255);
		iFilledRectangle(652,567,210,5);
		iFilledRectangle(652,572,5,123);
		iFilledRectangle(857,572,5,122);
		iFilledRectangle(657,690,205,5);

    	iSetColor(0,0,157);
    	iText(0,122,"PLAYER3'S BID:",GLUT_BITMAP_HELVETICA_18);
    	iText(720,122,"PLAYER1'S BID:",GLUT_BITMAP_HELVETICA_18);
     	iText(350,527,"PLAYER2'S BID:",GLUT_BITMAP_HELVETICA_18);
    	iText(348,145,"MY TAKEN BID:",GLUT_BITMAP_HELVETICA_18);

    	iText(670,640,"PLAYER1",GLUT_BITMAP_HELVETICA_18);
    	iText(670,610,"PLAYER2",GLUT_BITMAP_HELVETICA_18);
    	iText(670,580,"PLAYER3",GLUT_BITMAP_HELVETICA_18);

		// For score line//

		iSetColor(0,0,0);
		iLine(658,573,858,573);
		iLine(658,690,858,690);
		iLine(658,660,858,660);
		iLine(658,630,858,630);
		iLine(658,600,858,600);

		iLine(658,690,658,573);
		iLine(858,573,858,690);
		iLine(810,573,810,690);

		//For Start...
		if(start==1)
		{
	    	iSetColor(255,0,255);
	      	iFilledRectangle(600,165,105,5);
     		iFilledRectangle(600,195,100,5);
	    	iFilledRectangle(600,170,5,30);
    		iFilledRectangle(700,170,5,30);
    		iSetColor(130,0,0);
    		iText(620,175,"START",GLUT_BITMAP_HELVETICA_18);
		}

		//For proceed
		if(ply_card==0)
		{

	    	iText(prox,proy,"PROCEED",GLUT_BITMAP_HELVETICA_18);
	    	proy=proy+prody;
	    	if(proy==330)
			{
	    		proy=330;
	    		prody=0;
	    	//	iSetColor(255,255,255);
	    	//	iFilledRectangle(390,320,130,40);

	    		iSetColor(150,250,255);
	    		iFilledRectangle(385,315,140,5);
	    		iFilledRectangle(385,320,5,45);
	    		iFilledRectangle(385,360,140,5);
		    	iFilledRectangle(520,320,5,40);

	    		iSetColor(0,0,0);
	    		iLine(390,320,390,360);
	    		iLine(390,320,520,320);
	    		iLine(390,360,520,360);
	    		iLine(520,320,520,360);

	        //	iSetColor(0,0,130);
		    //	iText(prox+10,proy+5,"PROCEED",GLUT_BITMAP_HELVETICA_18);
			}
		}


//   	iShowBMP(40,120,"bid.bmp");
//   	iShowBMP(760,120,"bid.bmp");
//   	iShowBMP(390,525,"bid.bmp");
//  	iShowBMP(390,155,"bid.bmp");

    	iShowBMP(820,10,"exit.bmp");

    	drawTextBox();
    	if(mode == 1)
		{
	    	iSetColor(127, 0, 0);
	    	iText(380, 175, str,GLUT_BITMAP_HELVETICA_18);
	    	iText(670, 670, str,GLUT_BITMAP_HELVETICA_18);
		}

    	iText(10, 10, "Click to activate the box, enter to finish.");

	// main window show


    	if(chance==0)
		{
	
        	if(count==0)        shufflecard();
        	sorting();
        	other_cardshow();
         	if(r==0)            cardshow();

			if(start==0)
			{
	    	   	play();
             	score_show();
            	if(ply_card==0)     chance=1;   
			}
		}
		current_score();
       	if(click==3)   exit(0);
	   	if(click==4)   exit(0);
       	
	}
	if(click==2)   exit(0);
		
}

void ellipse(void)
{

	iSetColor(150,250,255);
	iFilledRectangle(600,690,300,10);
	iFilledRectangle(600,200,300,10);
	iFilledRectangle(600,200,10,500);
	iFilledRectangle(890,210,10,480);
	ax=760;ay=600;

	iSetColor(0,0,255);
	for(i=0;i<3;i++)
	{
    	iFilledEllipse(ax, ay,100, 40);
		ay-=150;
	}
	iSetColor(0,255,0);
	iText(680,590,"SPADETRUM",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(680,440,"HOW TO PLAY",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(695,290,"CONTACT",GLUT_BITMAP_TIMES_ROMAN_24);
	
}
void card_bmp(void)
{
	iSetColor(150,250,255);
	iFilledRectangle(0,0,900,10);
	iFilledRectangle(0,0,10,190);
	iFilledRectangle(0,185,900,10);
	iFilledRectangle(890,10,10,180);

/*	iShowBMP(bmpx,bmpy,"S1.bmp");
	iShowBMP(bmpx+20*1,bmpy,"D1.bmp");
	iShowBMP(bmpx+20*2,bmpy,"H1.bmp");
	iShowBMP(bmpx+20*3,bmpy,"C1.bmp");

	iShowBMP(bmpx+20*8,bmpy,"SK.bmp");
	iShowBMP(bmpx+20*9,bmpy,"CK.bmp");
	iShowBMP(bmpx+20*10,bmpy,"CK.bmp");
	iShowBMP(bmpx+20*11,bmpy,"CK.bmp");


	iShowBMP(bmpx+20*16,bmpy,"CQ.bmp");
	iShowBMP(bmpx+20*17,bmpy,"CQ.bmp");
	iShowBMP(bmpx+20*18,bmpy,"CQ.bmp");
	iShowBMP(bmpx+20*19,bmpy,"CQ.bmp");

	iShowBMP(bmpx+20*24,bmpy,"CJ.bmp");
	iShowBMP(bmpx+20*25,bmpy,"CJ.bmp");
	iShowBMP(bmpx+20*26,bmpy,"CJ.bmp");
	iShowBMP(bmpx+20*27,bmpy,"CJ.bmp");*/
}

void iMouseMove(int mx, int my)
{

}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		if(mx >= 50 && mx <= 300 && my >= 250 && my <= 280 && mode == 0)
		{
			mode = 1;
		}
		if(mx>=0 && mx<=50 && my>=680 && my<=700)
		{
			draw=1;
		}
		else if(mx>=0 && mx<=150 && my>=610 && my<=700) draw=1;
		else draw=0;

		if(pr4==0)
		{


	    	if(mx>=270 && mx<=(635-(20*(13-ply_card))) && my>=10 && my<=138)
			{
		    	num=(mx-270)/20;
		    	if(num<ply_card-1)
			    	total_cards=num;
		    	else
			    	total_cards=ply_card-1;

		    	a=1;
		    	g=1;
				chance1=1;
			}
			pr4++;
		}
		
		
		if(mx>=380 && mx<=508 && my>=200 && my<=232)
		{
		//	iSetColor(127,0,40);
		//	iRectangle(200,250,128,32);
			click=1;

		}
		if(mx>=688 && mx<=688+75 && my>=5 && my<=37)
		{
			click=2;
		}
		printf("%d %d\n",mx,my);
		if(mx>=820 && mx<=884 && my>=10 && my<=42)
		{
			click=3;
		}
		if(mx>=660 && mx<=860 && my>=570 && my<=630)
		{
			spadetrum=1;
			spadetrum1=4;
		}
		if(mx>=660 && mx<=860 && my>=250 && my<=350)
		{
			spadetrum=2;
			spadetrum1=4;
		}
		if(mx>=660 && mx<=860 && my>=400 && my<=500)
		{
			spadetrum=3;
			spadetrum1=4;
		}
		if(mx>=660 && mx<=810 && my>=155 && my<=195)
		{
			spadetrum=0;
			bmx=620;
			bmy=210;
			spadetrum1=0;
		}
		if(mx>=5 && mx<=155 && my>=645 && my<=665)
		{
			chance=0,chance1=0,count=0;
			card=13;
			ply_card=13,total_cards=52;
			r=0,l=0,b=0,w=0,score1=0,score2=0,score3=0,score4=0;
			club=0,heart=0,dias=0,spade=0;
			sc=0;
			s=0,p=0;
			score_temp=0;
			turn++;
			draw=0;
		}
		if(mx>=2 && mx<=152 && my>=615 && my<=635)
		{
			chance=0,chance1=2,count=0;
			card=13;
			ply_card=13,total_cards=52;
			r=0,l=0,b=0,w=0,score1=0,score2=0,score3=0,score4=0;
			club=0,heart=0,dias=0,spade=0;
			sc=0;
			s=0,p=0;
			draw=0;
			turn++;
			
		}
		if(mx>=2 && mx<=152 && my>=595 && my<=615)
		{
			click=4;
			draw=0;
			
		}
		if(mx>=390 && mx<=520 && my>=330 && my<=370)
		{
		
			chance=0,chance1=0,count=0;
			card=13;
			ply_card=13,total_cards=52;
			r=0,l=0,b=0,w=0,score1=0,score2=0,score3=0,score4=0;
			club=0,heart=0,dias=0,spade=0;
			sc=0;
			s=0,p=0;
			score_temp=0;
			turn++;

		}
		if(mx>=600 && mx<=700 && my>=165 && my<=195)
		{
			start=0;
		//	chance=0,chance1=0,count=0;
		//	card=13;
		//	ply_card=13,total_cards=52;
		//	r=0,l=0,b=0,w=0,score1=0,score2=0,score3=0,score4=0;
		///	club=0,heart=0,dias=0,spade=0;
		//	sc=0;
		//	s=0,p=0;
		//	score_temp=0;
		//	turn++;
		}

	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		if(mx>=270 && mx<=635 && my>=10 && my<=138)
		{
			
			if(a==1)
			{
				a=0;
				ply_card--;
				sc=1;
				
			}
			pr1=pr2=pr3=pr4=0;

			
		}
		
	}
}

void iKeyboard(unsigned char key)
{
	int i;
	if(mode == 1)
	{
		if(key =='\r')
		{
		//	mode = 0;
			strcpy(str2, str);
			printf("%s\n", str2);
			for(i = 0; i < len; i++)
			{
				str[i]=0;   
			}
			len=0;
		}
		else
		{
			str[len] = key;
			len++;
		}
	}

	if(key == 'x')
	{
		//do something with 'x'
		exit(0);
	}

}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}

}

int main()
{	
	len = 0;
	mode = 0;
	str[0]= 0;

	iSetTimer(2000,random);

	iInitialize(900, 700, "SPADETRUM");
	return 0;
}
void shufflecard()
{

	srand(time(0));

	for(i=0;i<52;i++) 
	{
		cards[i]=rand()%52;		
		for(j=0;j<i;j++) 
		{		
			if(cards[i]==cards[j])
			{
				i--;
				break;
			}	
		}
	}
	
	for(i=0;i<52;i++)
	{
		if(i<13)
			myCards[i]=cards[i];
		else if(i<26)
			comCards[0][i-13]=cards[i];
		else if(i<39)
			comCards[1][i-26]=cards[i];
		else
			comCards[2][i-39]=cards[i];	
	}
	count++;
	
}
void sorting()
{
	int term;

	for(i=0;i<13;i++)
	{				
		for(j=0;j<12-i;j++)	
		{
			if(myCards[j]>myCards[j+1])
			{
				term=myCards[j];
				myCards[j]=myCards[j+1];
				myCards[j+1]=term;	 
			} 
			
		}
		for(j=0;j<12-i;j++)
		{
			if(comCards[0][j]>comCards[0][j+1])
			{
				term=comCards[0][j];
				comCards[0][j]=comCards[0][j+1];
				comCards[0][j+1]=term;
			}
		}
		for(j=0;j<12-i;j++)
		{
			if(comCards[1][j]>comCards[1][j+1])
			{
				term=comCards[1][j];
				comCards[1][j]=comCards[1][j+1];
				comCards[1][j+1]=term;
			}
		}
		for(j=0;j<12-i;j++)
		{
			if(comCards[2][j]>comCards[2][j+1])
			{
				term=comCards[2][j];
				comCards[2][j]=comCards[2][j+1];
				comCards[2][j+1]=term;
			}
		}
		
	}
	
	
}
void other_cardshow()
{
	int i,x1,x2,x3,y1,y2,y3;

	x1=30;y1=180;
	x2=270;y2=565;
	x3=750;y3=180;

	
	for(i=0;i<ply_card;i++)
	{
		iShowBMP(x1,y1,"Back.bmp");
		iShowBMP(x2,y2,"Back.bmp");
		iShowBMP(x3,y3,"Back.bmp");
		y1=y1+20;
		x2=x2+20;
		y3=y3+20;
	}
}

void cardshow()
{
	ax=270;ay=10;

	if(a!=1)
	{
		myCards[total_cards]=52;
		total_cards=52;
	}
	
	for(i=0;i<card;i++)
	{
		if(total_cards==i)
		{
	    	ax=1000;
	    	ay=1000;
		}

		if(myCards[i]==0)		    	iShowBMP(ax,ay,"C2.bmp");
	    else if(myCards[i]==1)			iShowBMP(ax,ay,"C3.bmp");
		else if(myCards[i]==2)			iShowBMP(ax,ay,"C4.bmp");
		else if(myCards[i]==3)			iShowBMP(ax,ay,"C5.bmp");
		else if(myCards[i]==4)			iShowBMP(ax,ay,"C6.bmp");
		else if(myCards[i]==5)			iShowBMP(ax,ay,"C7.bmp");
		else if(myCards[i]==6)			iShowBMP(ax,ay,"C8.bmp");
		else if(myCards[i]==7)			iShowBMP(ax,ay,"C9.bmp");
		else if(myCards[i]==8)			iShowBMP(ax,ay,"C10.bmp");
		else if(myCards[i]==9)			iShowBMP(ax,ay,"CJ.bmp");
		else if(myCards[i]==10)			iShowBMP(ax,ay,"CQ.bmp");
		else if(myCards[i]==11)			iShowBMP(ax,ay,"CK.bmp");
		else if(myCards[i]==12)			iShowBMP(ax,ay,"C1.bmp");

		else if(myCards[i]==13)			iShowBMP(ax,ay,"H2.bmp");
		else if(myCards[i]==14)			iShowBMP(ax,ay,"H3.bmp");
		else if(myCards[i]==15)			iShowBMP(ax,ay,"H4.bmp");
		else if(myCards[i]==16)			iShowBMP(ax,ay,"H5.bmp");
		else if(myCards[i]==17)			iShowBMP(ax,ay,"H6.bmp");
		else if(myCards[i]==18)			iShowBMP(ax,ay,"H7.bmp");
		else if(myCards[i]==19)			iShowBMP(ax,ay,"H8.bmp");
		else if(myCards[i]==20)			iShowBMP(ax,ay,"H9.bmp");
		else if(myCards[i]==21)			iShowBMP(ax,ay,"H10.bmp");
		else if(myCards[i]==22)			iShowBMP(ax,ay,"HJ.bmp");
		else if(myCards[i]==23)			iShowBMP(ax,ay,"HQ.bmp");
		else if(myCards[i]==24)			iShowBMP(ax,ay,"HK.bmp");
		else if(myCards[i]==25)			iShowBMP(ax,ay,"H1.bmp");

		else if(myCards[i]==26)			iShowBMP(ax,ay,"D2.bmp");
		else if(myCards[i]==27)			iShowBMP(ax,ay,"D3.bmp");
		else if(myCards[i]==28)			iShowBMP(ax,ay,"D4.bmp");
		else if(myCards[i]==29)			iShowBMP(ax,ay,"D5.bmp");
		else if(myCards[i]==30)			iShowBMP(ax,ay,"D6.bmp");
		else if(myCards[i]==31)			iShowBMP(ax,ay,"D7.bmp");
		else if(myCards[i]==32)			iShowBMP(ax,ay,"D8.bmp");
		else if(myCards[i]==33)			iShowBMP(ax,ay,"D9.bmp");
		else if(myCards[i]==34)			iShowBMP(ax,ay,"D10.bmp");
		else if(myCards[i]==35)			iShowBMP(ax,ay,"DJ.bmp");
		else if(myCards[i]==36)			iShowBMP(ax,ay,"DQ.bmp");
		else if(myCards[i]==37)			iShowBMP(ax,ay,"DK.bmp");
		else if(myCards[i]==38)			iShowBMP(ax,ay,"D1.bmp");

		else if(myCards[i]==39)			iShowBMP(ax,ay,"S2.bmp");
		else if(myCards[i]==40)			iShowBMP(ax,ay,"S3.bmp");
		else if(myCards[i]==41)			iShowBMP(ax,ay,"S4.bmp");
		else if(myCards[i]==42)			iShowBMP(ax,ay,"S5.bmp");
		else if(myCards[i]==43)			iShowBMP(ax,ay,"S6.bmp");
		else if(myCards[i]==44)			iShowBMP(ax,ay,"S7.bmp");
		else if(myCards[i]==45)			iShowBMP(ax,ay,"S8.bmp");
		else if(myCards[i]==46)			iShowBMP(ax,ay,"S9.bmp");
		else if(myCards[i]==47)			iShowBMP(ax,ay,"S10.bmp");
		else if(myCards[i]==48)			iShowBMP(ax,ay,"SJ.bmp");
		else if(myCards[i]==49)			iShowBMP(ax,ay,"SQ.bmp");
		else if(myCards[i]==50)			iShowBMP(ax,ay,"SK.bmp");
		else if(myCards[i]==51)			iShowBMP(ax,ay,"S1.bmp");

		//The most significant logic

		my_array[i]=myCards[i];

		ax=ax+20;
		
		if(total_cards==i) 
		{
			ax=270+20*i;
			ay=10;
		}
	}
		   
}

//..........................................................


void play()
{
	if(a==0 && g==1)
	{
		card_lead();
		pop_card();
		g++;
	}

	if(ply_card==13)
	{
    	if(comCards[0][0]==0)              	c=0;
		else if(comCards[1][0]==0)       	c=1;
		else if(comCards[2][0]==0)       	c=2;
		else if(myCards[0]==0)		    	c=3;
	}
	
	if(c==0)
	{
		player1();
		player2();
		player3();

		if(a==1)
		{
			my_turn();
		}
		
	}

	else if(c==1)
	{
		player2();
		player3();
		
		if(a==1) 
		{
			my_turn();
		    player1();
		}
		
	}
	else if(c==2)
	{
		player3();
		
		if(a==1) 
		{
			my_turn();
			player1();
			player2();
		}
		
	}
	else if(c==3)	
	{
		
		if(a==1) 
		{
			my_turn();
			player1();
			player2();
			player3();
		}
		
	}
}

void player1()
{
	if(pr1==0)
	{
    	if(c==0)
		{
	    	turn_start();
	    	game[0]=comCards[0][n];
	    	p1=n;
		}
    	else
		{
	     	m=0;
	    	turn_other_players();
	    	game[0]=comCards[0][n];
	    	p1=n;
		}
    	pr1++;
	}	
	t=0;
	card_play();
//	player[0][n]=52;
}
void player2()
{
	if(pr2==0)
	{
    	if(c==1)
		{
	    	turn_start();
	    	game[1]=comCards[1][n];
	    	p2=n;
		}
    	else
		{
	    	m=1;
	    	turn_other_players();
    		game[1]=comCards[1][n];
	    	p2=n;
		}
    	pr2++;
	}
	t=1;
	card_play();
//	player[1][n]=52;
}
void player3()
{
	if(pr3==0)
	{
    	if(c==2)
		{
	    	turn_start();
	    	game[2]=comCards[2][n];
	    	p3=n;
		}
    	else
		{
	    	m=2;
	    	turn_other_players();
	    	game[2]=comCards[2][n];
	    	p3=n;
		}
    	pr3++;
	}	
	t=2;
	card_play();
//	player[2][n]=52;
}
void my_turn(void)
{
	game[3]=myCards[total_cards];
	t=3;
	myCards[52]=-1;
	card_play();

}
void scoreShown(void)
{
	if(c==0 && sc==1)
	{
		sa2=score2;
		sb2=1;
		score2=sa2+sb2;
		sc=0;
		save_score[1]=score2;
	}
	else if(c==1 && sc==1)
	{
		sa3=score3;
		sb3=1;
		score3=sa3+sb3;
		sc=0;
		save_score[2]=score3;
	}
	else if(c==2 && sc==1)
	{
		sa4=score4;
		sb4=1;
		score4=sa4+sb4;
		sc=0;
		save_score[3]=score4;
	}
	else if(c==3 && sc==1)
	{
		sa1=score1;
		sb1=1;
		score1=sa1+sb1;
		sc=0;
		save_score[0]=score1;
		 
	}
	
}

void card_lead(void)
{
	if(c==0 && game[0]>=0 && game[0]<=12 && ply_card<13)             	club++;
	else if(c==1 && game[1]>=0 && game[1]<=12 && ply_card<13)       	club++;
	else if(c==2 && game[2]>=0 && game[2]<=12 && ply_card<13)       	club++;
	else if(c==3 && game[3]>=0 && game[3]<=12 && ply_card<13)       	club++;

	if(c==0 && game[0]>=13 && game[0]<=25)	                         	dias++;
	else if(c==1 && game[1]>=13 && game[1]<=25)	                    	dias++;
	else if(c==2 && game[2]>=13 && game[2]<=25)	                    	dias++;
	else if(c==3 && game[3]>=0 && game[3]<=12)	                     	dias++;

	if(c==0 && game[0]>=0 && game[0]<=12)
	{
		if(game[1]>12)
		{
			if(game[1]>=13 && game[1]<=38)
				game[1]=0;
		}
		if(game[2]>12)
		{
			if(game[2]>=13 && game[2]<=38)
			game[2]=0;
		}
		if(game[3]>12)
		{
			if(game[3]>=13 && game[3]<=38)
			game[3]=0;
		}
	}
	else if(c==1 && game[1]>=0 && game[1]<=12)
	{
		if(game[2]>12)
		{
			if(game[2]>=13 && game[2]<=38)
			game[2]=0;
		}
		if(game[3]>12)
		{
			if(game[3]>=13 && game[3]<=38)
			game[3]=0;
		}
		if(game[0]>12)
		{
			if(game[0]>=13 && game[0]<=38)
			game[0]=0;
		}
	}
	else if(c==2 && game[2]>=0 && game[2]<=12)
	{
		if(game[1]>12)
		{
			if(game[1]>=13 && game[1]<=38)
			game[1]=0;
		}
		if(game[3]>12)
		{
			if(game[3]>=13 && game[3]<=38)
			game[3]=0;
		}
		if(game[0]>12)
		{
			if(game[0]>=13 && game[0]<=38)
			game[0]=0;
		}
	}
	else if(c==3 && game[3]>=0 && game[3]<=12)
	{
		if(game[1]>12)
		{
			if(game[1]>=13 && game[1]<=38)
			game[1]=0;
		}
		if(game[2]>12)
		{
			if(game[2]>=13 && game[2]<=38)
			game[2]=0;
		}
		if(game[0]>12)
		{
			if(game[0]>=13 && game[0]<=38)
			game[0]=0;
		}
	}
	else if(c==0 && game[0]>=13 && game[0]<=25)
	{
		if(game[1]>25)
		{
			if(game[1]>=26 && game[1]<=38)
				game[1]=0;
		}
		if(game[2]>25)
		{
			if(game[2]>=26 && game[2]<=38)
			game[2]=0;
		}
		if(game[3]>25)
		{
			if(game[3]>=26 && game[3]<=38)
			game[3]=0;
		}
	}
	else if(c==1 && game[1]>=13 && game[1]<=25)
	{
		if(game[2]>25)
		{
			if(game[2]>=26 && game[2]<=38)
			game[2]=0;
		}
		if(game[3]>25)
		{
			if(game[3]>=26 && game[3]<=38)
			game[3]=0;
		}
		if(game[0]>25)
		{
			if(game[0]>=26 && game[0]<=38)
			game[0]=0;
		}
	}
	else if(c==2 && game[2]>=13 && game[2]<=25)
	{
		if(game[1]>25)
		{
			if(game[1]>=26 && game[1]<=38)
			game[1]=0;
		}
		if(game[3]>25)
		{
			if(game[3]>=26 && game[3]<=38)
			game[3]=0;
		}
		if(game[0]>25)
		{
			if(game[0]>=26 && game[0]<=38)
			game[0]=0;
		}
	}
	else if(c==3 && game[3]>=13 && game[3]<=25)
	{
		if(game[1]>25)
		{
			if(game[1]>=26 && game[1]<=38)
			game[1]=0;
		}
		if(game[2]>25)
		{
			if(game[2]>=26 && game[2]<=38)
			game[2]=0;
		}
		if(game[0]>25)
		{
			if(game[0]>=26 && game[0]<=38)
			game[0]=0;
		}
	}

    if(game[0]>game[1] && game[0]>game[2] && game[0]>game[3])             c=0;
	else if(game[1]>game[2] && game[1]>game[3] && game[1]>game[0])        c=1;
	else if(game[2]>game[3] && game[2]>game[0] && game[2]>game[1])        c=2;
	else if(game[3]>game[0] && game[3]>game[1] && game[3]>game[2])        c=3;

	if(ply_card<13)
	{
		comCards[0][p1]=52;
		comCards[1][p2]=52;
		comCards[2][p3]=52;
	}
}


void score_show(void)
{
	scoreShown();
	itoa(score1,score);
	iSetColor(0,50,150);
	iText(490,143,score,GLUT_BITMAP_TIMES_ROMAN_24);
	itoa(score2,score);
	iText(865,120,score,GLUT_BITMAP_TIMES_ROMAN_24);
	itoa(score3,score);
	iText(495,525,score,GLUT_BITMAP_TIMES_ROMAN_24);
	itoa(score4,score);
	iText(142,120,score,GLUT_BITMAP_TIMES_ROMAN_24);
}
void current_score(void)
{

	if(turn==0)
	{
		itoa(save_score[0],score);
		iSetColor(0,50,150);
		iText(830,670,score,GLUT_BITMAP_TIMES_ROMAN_24);
		final_score1[0]=save_score[0];
		
	}

	for(i=1;i<10;i++)
	{
		if(turn==i)
		{
			if(chance1==0)
			{
				save_score[0]=0;
		    	final_score1[i]=final_score1[i-1]+save_score[0];
		    	itoa(final_score1[i],score);
		    	iSetColor(0,50,150);
		    	iText(830,670,score,GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if(chance1==1)
			{
				final_score1[i]=final_score1[i-1]+save_score[0];
		    	itoa(final_score1[i],score);
		    	iSetColor(0,50,150);
		    	iText(830,670,score,GLUT_BITMAP_TIMES_ROMAN_24);
			}
			

		}
		if(chance1==0 && final_score1[i]>final_score2[i] && final_score1[i]>final_score3[i] && final_score1[i]>final_score4[i] && final_score1[i]>10)
		{
			iText(400,400,"YOU HAVE WON",GLUT_BITMAP_TIMES_ROMAN_24);
			start=1;
		}
		else if(chance1==0 && final_score2[i]>final_score1[i] && final_score2[i]>final_score3[i] && final_score2[i]>final_score4[i] && final_score2[i]>10)
		{
			iText(400,400,"PLAYER1 HAS WON",GLUT_BITMAP_TIMES_ROMAN_24);
			start=1;
		}
		else if(chance1==0 && final_score3[i]>final_score2[i] && final_score3[i]>final_score1[i] && final_score3[i]>final_score4[i] && final_score3[i]>10)
		{
			iText(400,400,"PLAYER2 HAS WON",GLUT_BITMAP_TIMES_ROMAN_24);
			start=1;
		}
		else if(chance1==0 && final_score4[i]>final_score2[i] && final_score4[i]>final_score3[i] && final_score4[i]>final_score1[i] && final_score4[i]>10)
		{
			iText(400,400,"PLAYER3 HAS WON",GLUT_BITMAP_TIMES_ROMAN_24);
			start=1;
		}
	}

	if(turn==0)
	{
		itoa(save_score[1],score);
		iSetColor(0,50,150);
		iText(830,640,score,GLUT_BITMAP_TIMES_ROMAN_24);
		final_score2[0]=save_score[1];
	}

	for(i=1;i<10;i++)
	{
		if(turn==i)
		{
			if(chance1==0)
			{

				save_score[1]=0;
			    final_score2[i]=final_score2[i-1]+save_score[1];
			    itoa(final_score2[i],score);
		    	iSetColor(0,50,150);
		    	iText(830,640,score,GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if(chance1==1)
			{
				final_score2[i]=final_score2[i-1]+save_score[1];
			    itoa(final_score2[i],score);
		    	iSetColor(0,50,150);
		    	iText(830,640,score,GLUT_BITMAP_TIMES_ROMAN_24);
			}

		}
	}
	if(turn==0)
	{
		itoa(save_score[2],score);
		iSetColor(0,50,150);
		iText(830,610,score,GLUT_BITMAP_TIMES_ROMAN_24);
		final_score3[0]=save_score[2];
	}

	for(i=1;i<10;i++)
	{
		if(turn==i)
		{
			if(chance1==0)
			{
				save_score[2]=0;
		    	final_score3[i]=final_score3[i-1]+save_score[2];
		    	itoa(final_score3[i],score);
		    	iSetColor(0,50,150);
		    	iText(830,610,score,GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if(chance1==1)
			{

				final_score3[i]=final_score3[i-1]+save_score[2];
		    	itoa(final_score3[i],score);
		    	iSetColor(0,50,150);
		    	iText(830,610,score,GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
	}
	if(turn==0)
	{
		itoa(save_score[3],score);
		iSetColor(0,50,150);
		iText(830,580,score,GLUT_BITMAP_TIMES_ROMAN_24);
		final_score4[0]=save_score[3];
	}

	for(i=1;i<10;i++)
	{
		if(turn==i)
		{
			if(chance1==0)
			{
				save_score[3]=0;
	     		final_score4[i]=final_score4[i-1]+save_score[3];
	    		itoa(final_score4[i],score);
	    		iSetColor(0,50,150);
		    	iText(830,580,score,GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if(chance1==1)
			{

				final_score4[i]=final_score4[i-1]+save_score[3];
	    		itoa(final_score4[i],score);
	    		iSetColor(0,50,150);
		    	iText(830,580,score,GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
	}
	
}
void itoa(int n, char s[])
{
    int z, sign;								
    if ((sign = n) < 0)  /* record sign */
    n = -n;          /* make n positive */
    z = 0;
    do 
	{      /* generate digits in reverse order */
         s[z++] = n % 10 + '0';  /* get next digit */
    } while ((n /= 10) > 0);    /* delete it */
    if (sign < 0)
    s[z++] = '-';
    s[z] = '\0';
    strrev(s);
}
void pop_card()
{
	game[0]=-1;
	game[1]=-1;
	game[2]=-1;
	game[3]=-1;
}

void turn_start()
{
	if(ply_card<13)  n=0;
}
void turn_other_players(void)
{
	int i;

//chal of clubs

	if((c==0&&game[0]>=0&&game[0]<=12)||(c==1&&game[1]>=0&&game[1]<=12)||(c==2&&game[2]>=0&&game[2]<=12)||(c==3&&game[3]>=0&&game[3]<=12))
	{
			n=-1;
		if(club<=1)
		{
			for(i=0;i<ply_card;i++)
			{
				if(comCards[m][i]>=0 && comCards[m][i]<=12)
					n=i;
			}
		}
		if(n==-1)
		{
			if(comCards[m][0]>=0 && comCards[m][0]<=12)
				n=0;
		}
		if(n==-1)
		{
			for(i=0;i<ply_card;i++)
			{
				if(comCards[m][i]==36)
					n=i;
			}
		}
		if(n==-1)
		{
			for(i=0;i<ply_card;i++)
			{
				if(comCards[m][ply_card-1-i]>=39 && comCards[m][ply_card-1-i]<=51)
				{
					if(comCards[m][12-i]!=51)
					{
						n=ply_card-1-i;
						break;
					}
				}
			}
		}
		if(n==-1)
			n=0;
	}

//chal of diamond

	if((c==0&&game[0]>=13&&game[0]<=25)||(c==1&&game[1]>=13&&game[1]<=25)||(c==2&&game[2]>=13&&game[2]<=25)||(c==3&&game[3]>=13&&game[3]<=25))
	{
			n=-1;
		if(dias<=1)
		{
			for(i=0;i<ply_card;i++)
			{
				if(comCards[m][i]>=13 && comCards[m][i]<=25)
					n=i;
			}
		}
		if(n==-1)
		{
			for(i=0;i<ply_card;i++)
			{
				if(comCards[m][i]>=13 && comCards[m][i]<=25)
				{
					n=i;
					break;
				}
			}
		}
		if(n==-1)
		{
			for(i=0;i<ply_card;i++)
			{
				if(comCards[m][ply_card-1-i]>=39 && comCards[m][ply_card-1-i]<=51)
				{
					if(comCards[m][12-i]!=51)
					{
						n=ply_card-1-i;
						break;
					}
				}
			}
		}
		if(n==-1) 
			n=0;
	}

//chal of HEART

	if((c==0&&game[0]>=26&&game[0]<=38)||(c==1&&game[1]>=26&&game[1]<=38)||(c==2&&game[2]>=26&&game[2]<=38)||(c==3&&game[3]>=26&&game[3]<=38))
	{
		n=-1;
	

		if(n==-1)
		{
			for(i=0;i<ply_card;i++)
				{
					if(comCards[m][i]>=26 && comCards[m][i]<=35)
						n=i;
				}
		}
		if(n==-1)
		{
			for(i=0;i<ply_card;i++)
				{
					if(comCards[m][ply_card-1-i]>=36 && comCards[m][ply_card-1-i]<=38)
						n=ply_card-1-i;
				}
		}
		if(n==-1)
		{
			for(i=0;i<ply_card;i++)
			{
				if(comCards[m][ply_card-1-i]>=39 && comCards[m][ply_card-1-i]<=51)
				{
					if(comCards[m][ply_card-1-i]!=51)
					{
						n=ply_card-1-i;
						break;
					}
				}
			}
		}
		if(n==-1)
			n=0;

	}

	//chal of SPADE

	if((c==0&&game[0]>=39&&game[0]<=51)||(c==1&&game[1]>=39&&game[1]<=51)||(c==2&&game[2]>=39&&game[2]<=51)||(c==3&&game[3]>=39&&game[3]<=51))
	{
			n=-1;
		for(i=0;i<ply_card;i++)
		{
			if(comCards[m][i]>=39 && comCards[m][i]<=51)
				n=i;
		}
	//	if(n==-1)
		//	n=0;
	}

}




void card_play()
{
	int xi,yi;

	if(t==0) 
	{
    	xi=500;
    	yi=300;
	}
	else if(t==1) 
	{
    	xi=400;
    	yi=350;
	}
	else if(t==2) 
	{
    	xi=300;
    	yi=300;
	}
	else if(t==3) 
	{
    	xi=400;
    	yi=200;
	}

	if(ply_card>0)
	{
		if(game[t]==0)		iShowBMP(xi,yi,"C2.bmp");
	    else if(game[t]==1)		iShowBMP(xi,yi,"C3.bmp");
		else if(game[t]==2)		iShowBMP(xi,yi,"C4.bmp");
		else if(game[t]==3)			iShowBMP(xi,yi,"C5.bmp");
		else if(game[t]==4)			iShowBMP(xi,yi,"C6.bmp");
		else if(game[t]==5)			iShowBMP(xi,yi,"C7.bmp");
		else if(game[t]==6)			iShowBMP(xi,yi,"C8.bmp");
		else if(game[t]==7)			iShowBMP(xi,yi,"C9.bmp");
		else if(game[t]==8)			iShowBMP(xi,yi,"C10.bmp");
		else if(game[t]==9)			iShowBMP(xi,yi,"CJ.bmp");
		else if(game[t]==10)			iShowBMP(xi,yi,"CQ.bmp");
		else if(game[t]==11)			iShowBMP(xi,yi,"CK.bmp");
		else if(game[t]==12)			iShowBMP(xi,yi,"C1.bmp");

		else if(game[t]==13)			iShowBMP(xi,yi,"H2.bmp");
		else if(game[t]==14)			iShowBMP(xi,yi,"H3.bmp");
		else if(game[t]==15)			iShowBMP(xi,yi,"H4.bmp");
		else if(game[t]==16)			iShowBMP(xi,yi,"H5.bmp");
		else if(game[t]==17)			iShowBMP(xi,yi,"H6.bmp");
		else if(game[t]==18)			iShowBMP(xi,yi,"H7.bmp");
		else if(game[t]==19)			iShowBMP(xi,yi,"H8.bmp");
		else if(game[t]==20)			iShowBMP(xi,yi,"H9.bmp");
		else if(game[t]==21)			iShowBMP(xi,yi,"H10.bmp");
		else if(game[t]==22)			iShowBMP(xi,yi,"HJ.bmp");
		else if(game[t]==23)			iShowBMP(xi,yi,"HQ.bmp");
		else if(game[t]==24)			iShowBMP(xi,yi,"HK.bmp");
		else if(game[t]==25)			iShowBMP(xi,yi,"H1.bmp");

		else if(game[t]==26)			iShowBMP(xi,yi,"D2.bmp");
		else if(game[t]==27)			iShowBMP(xi,yi,"D3.bmp");
		else if(game[t]==28)			iShowBMP(xi,yi,"D4.bmp");
		else if(game[t]==29)			iShowBMP(xi,yi,"D5.bmp");
		else if(game[t]==30)			iShowBMP(xi,yi,"D6.bmp");
		else if(game[t]==31)			iShowBMP(xi,yi,"D7.bmp");
		else if(game[t]==32)			iShowBMP(xi,yi,"D8.bmp");
		else if(game[t]==33)			iShowBMP(xi,yi,"D9.bmp");
		else if(game[t]==34)			iShowBMP(xi,yi,"D10.bmp");
		else if(game[t]==35)			iShowBMP(xi,yi,"DJ.bmp");
		else if(game[t]==36)			iShowBMP(xi,yi,"DQ.bmp");
		else if(game[t]==37)			iShowBMP(xi,yi,"DK.bmp");
		else if(game[t]==38)			iShowBMP(xi,yi,"D1.bmp");

		else if(game[t]==39)			iShowBMP(xi,yi,"S2.bmp");
		else if(game[t]==40)			iShowBMP(xi,yi,"S3.bmp");
		else if(game[t]==41)			iShowBMP(xi,yi,"S4.bmp");
		else if(game[t]==42)			iShowBMP(xi,yi,"S5.bmp");
		else if(game[t]==43)			iShowBMP(xi,yi,"S6.bmp");
		else if(game[t]==44)			iShowBMP(xi,yi,"S7.bmp");
		else if(game[t]==45)			iShowBMP(xi,yi,"S8.bmp");
		else if(game[t]==46)			iShowBMP(xi,yi,"S9.bmp");
		else if(game[t]==47)			iShowBMP(xi,yi,"S10.bmp");
		else if(game[t]==48)			iShowBMP(xi,yi,"SJ.bmp");
		else if(game[t]==49)			iShowBMP(xi,yi,"SQ.bmp");
		else if(game[t]==50)			iShowBMP(xi,yi,"SK.bmp");
		else if(game[t]==51)			iShowBMP(xi,yi,"S1.bmp");
		
		}

}
void random(void)
{
	srand(time(0));

	for(i=0;i<52;i++) 
	{
		cards[i]=rand()%52;		
		for(j=0;j<i;j++) 
		{		
			if(cards[i]==cards[j])
			{
				i--;
				break;
			}	
		}
	}
}

