#include<stdio.h>
int main()
{
	char i;
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20;
	int p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0,p11=0,p12=0,p13=0,p14=0,p15=0,p16=0,p17=0,p18=0,p19=0,p20=0;
	int p01=0,p02=0,p03=0,p04=0,p05=0,p06=0,p07=0,p08=0,p09=0,p010=0,p011=0,p012=0,p013=0,p014=0,p015=0,p016=0,p017=0,p018=0,p019=0,p020=0;
	int total;
	
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t $$$$ Kaun Banega Crorepati $$$$ ");
	printf("\n");
	printf("\n -- Enter S to Start the Game");
	printf("\n -- Enter Q to Quit the Game");
	printf("\n");
	
	printf("\n Enter your choice = ");
	scanf("%c",&i);
	
	switch(i)
	{
	case 'S' : printf("\n The game has started");break;
	case 'Q' : printf("\n The game has ended");break;
	default : printf("\n Invalid Choice");break;
	}
	
	printf("\n");
	
	if(i=='S')
	{
		printf("\n a. How many days are there in a week?");
		printf("\n");
		printf("\n 1) 1");
		printf("\n 2) 3");
		printf("\n 3) 5");
		printf("\n 4) 7");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a1);
		
		if(a1==4)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p1 = 5;
			printf("\n");
			printf("\n You have scored %d points",p1);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p01 = 0;
			printf("\n");
			printf("\n You have scored %d point",p01);
		}
		getch();
	printf("\n");
	
		printf("\n b. How many letters are there in English Alphabet?");
		printf("\n");
		printf("\n 1) 18");
		printf("\n 2) 26");
		printf("\n 3) 20");
		printf("\n 4) 24");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a2);
		
		if(a2==2)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p2 = 5;
			printf("\n");
			printf("\n You have scored %d points",p2);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p02 = 0;
			printf("\n");
			printf("\n You have scored %d points",p02);
		}
		getch();
	printf("\n");
	
		printf("\n c. Which is the coldest place on Earth?");
		printf("\n");
		printf("\n 1) Antarctica");
		printf("\n 2) India");
		printf("\n 3) London");
		printf("\n 4) America");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a3);
		
		if(a3==1)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p3 = 5;
			printf("\n");
			printf("\n You have scored %d points",p3);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p03 = 0;
			printf("\n");
			printf("\n You have scored %d points",p03);
		}
		getch();
		
	printf("\n");
	
		printf("\n d. What is a shape that has no sides and no corners?");
		printf("\n");
		printf("\n 1) Triangle");
		printf("\n 2) Square");
		printf("\n 3) Cone");
		printf("\n 4) Cicle");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a4);
		
		if(a4==4)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p4 = 5;
			printf("\n");
			printf("\n You have scored %d points",p4);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p04 = 0;
			printf("\n");
			printf("\n You have scored %d points",p04);
		}
		getch();
		
	printf("\n");
	
		printf("\n e. Which festival is called Festival of Light?");
		printf("\n");
		printf("\n 1) Makar Sankranti");
		printf("\n 2) Holi");
		printf("\n 3) Diwali");
		printf("\n 4) Navratri");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a5);
		
		if(a5==3)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p5 = 5;
			printf("\n");
			printf("\n You have scored %d points",p5);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p05 = 0;
			printf("\n");
			printf("\n You have scored %d points",p05);
		}
		getch();
	
	printf("\n");
	
		printf("\n f. How many colors are there in a Rainbow?");
		printf("\n");
		printf("\n 1) 7");
		printf("\n 2) 8");
		printf("\n 3) 9");
		printf("\n 4) 10");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a6);
		
		if(a6==1)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p6 = 5;
			printf("\n");
			printf("\n You have scored %d points",p6);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p06 = 0;
			printf("\n");
			printf("\n You have scored %d points",p06);
		}
		getch();
	
	printf("\n");
	
		printf("\n g. What is the National Anthem of India?");
		printf("\n");
		printf("\n 1) Saare Jahan Se");
		printf("\n 2) Jana Gana Mana");
		printf("\n 3) Vande Mataram");
		printf("\n 4) Teri Mitti");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a7);
		
		if(a7==2)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p7 = 5;
			printf("\n");
			printf("\n You have scored %d points",p7);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p07 = 0;
			printf("\n");
			printf("\n You have scored %d points",p07);
		}
		getch();
	
	printf("\n");
	
		printf("\n h. What is the National Animal of India?");
		printf("\n");
		printf("\n 1) Lion");
		printf("\n 2) Deer");
		printf("\n 3) Cheetah");
		printf("\n 4) Tiger");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a8);
		
		if(a8==4)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p8 = 5;
			printf("\n");
			printf("\n You have scored %d points",p8);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p08 = 0;
			printf("\n");
			printf("\n You have scored %d points",p08);
		}
		getch();
	
	printf("\n");
	
		printf("\n i. What is the National Flower of India?");
		printf("\n");
		printf("\n 1) Rose");
		printf("\n 2) Lotus");
		printf("\n 3) Sunflower");
		printf("\n 4) Mogra");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a9);
		
		if(a9==2)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p9 = 5;
			printf("\n");
			printf("\n You have scored %d points",p9);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p09 = 0;
			printf("\n");
			printf("\n You have scored %d points",p09);
		}
		getch();
		
	printf("\n");
	
		printf("\n j. What is the National Song of India?");
		printf("\n");
		printf("\n 1) Saare Jahan Se");
		printf("\n 2) Jana Gana Mana");
		printf("\n 3) Vande Mataram");
		printf("\n 4) Teri Mitti");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a10);
		
		if(a10==3)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p10 = 5;
			printf("\n");
			printf("\n You have scored %d points",p10);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p010 = 0;
			printf("\n");
			printf("\n You have scored %d points",p010);
		}
		getch();
	
	printf("\n");
	
		printf("\n k. What is the National Fruit of India?");
		printf("\n");
		printf("\n 1) Mango");
		printf("\n 2) Papapya");
		printf("\n 3) Banana");
		printf("\n 4) Apple");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a11);
		
		if(a11==1)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p11 = 5;
			printf("\n");
			printf("\n You have scored %d points",p11);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p011 = 0;
			printf("\n");
			printf("\n You have scored %d points",p011);
		}
		getch();
	
	printf("\n");
	
		printf("\n l. In which direction the Sun rises?");
		printf("\n");
		printf("\n 1) East");
		printf("\n 2) West");
		printf("\n 3) North");
		printf("\n 4) South");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a12);
		
		if(a12==1)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p12 = 5;
			printf("\n");
			printf("\n You have scored %d points",p12);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p012 = 0;
			printf("\n");
			printf("\n You have scored %d points",p012);
		}
		getch();
	
	printf("\n");
	
		printf("\n m. How many sides does a rectangle have?");
		printf("\n");
		printf("\n 1) 1");
		printf("\n 2) 2");
		printf("\n 3) 3");
		printf("\n 4) 4");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a13);
		
		if(a13==4)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p13 = 5;
			printf("\n");
			printf("\n You have scored %d points",p13);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p013 = 0;
			printf("\n");
			printf("\n You have scored %d points",p013);
		}
		getch();
	
	printf("\n");
	
		printf("\n n. Which is the Largest Planet in our solar System?");
		printf("\n");
		printf("\n 1) Earth");
		printf("\n 2) Jupiter");
		printf("\n 3) Venus");
		printf("\n 4) Mercury");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a14);
		
		if(a14==2)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p14 = 5;
			printf("\n");
			printf("\n You have scored %d points",p14);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p014 = 0;
			printf("\n");
			printf("\n You have scored %d points",p014);
		}
		getch();
	
	printf("\n");
	
		printf("\n o. Which bird runs fast?");
		printf("\n");
		printf("\n 1) Sparrow");
		printf("\n 2) Eagle");
		printf("\n 3) Ostrich");
		printf("\n 4) Peacock");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a15);
		
		if(a15==3)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p15 = 5;
			printf("\n");
			printf("\n You have scored %d points",p15);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p015 = 0;
			printf("\n");
			printf("\n You have scored %d points",p015);
		}
		getch();
	
	printf("\n");
	
		printf("\n p. How many months in a Year?");
		printf("\n");
		printf("\n 1) 9");
		printf("\n 2) 10");
		printf("\n 3) 11");
		printf("\n 4) 12");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a16);
		
		if(a16==4)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p16 = 5;
			printf("\n");
			printf("\n You have scored %d points",p16);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p016 = 0;
			printf("\n");
			printf("\n You have scored %d points",p016);
		}
		getch();
		
	printf("\n");
	
		printf("\n q. Name the Natural Satellite of Earth?");
		printf("\n");
		printf("\n 1) Moon");
		printf("\n 2) Sun");
		printf("\n 3) Mars");
		printf("\n 4) Venus");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a17);
		
		if(a17==1)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p17 = 5;
			printf("\n");
			printf("\n You have scored %d points",p17);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p017 = 0;
			printf("\n");
			printf("\n You have scored %d points",p017);
		}
		getch();
		
	printf("\n");
	
		printf("\n r. How many Minutes are there in a hour?");
		printf("\n");
		printf("\n 1) 20");
		printf("\n 2) 40");
		printf("\n 3) 60");
		printf("\n 4) 80");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a18);
		
		if(a18==3)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p18 = 5;
			printf("\n");
			printf("\n You have scored %d points",p18);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p018 = 0;
			printf("\n");
			printf("\n You have scored %d points",p018);
		}
		getch();
		
	printf("\n");
	
		printf("\n s. Which animal is known as 'Ship of the Desert'?");
		printf("\n");
		printf("\n 1) Eagle");
		printf("\n 2) Camel");
		printf("\n 3) Lion");
		printf("\n 4) Bear");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a19);
		
		if(a19==2)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p19 = 5;
			printf("\n");
			printf("\n You have scored %d points",p19);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p019 = 0;
			printf("\n");
			printf("\n You have scored %d points",p019);
		}
		getch();
		
	printf("\n");
	
		printf("\n t. How many Days are there in February Month?");
		printf("\n");
		printf("\n 1) 20");
		printf("\n 2) 30");
		printf("\n 3) 31");
		printf("\n 4) 28");
		
		printf("\n");
		
		printf("\n ENTER YOUR OPTION = ");
		scanf("%d",&a20);
		
		if(a15==3)
		{
			printf("\n |||| RIGHT ANSWER ||||");
			p20 = 5;
			printf("\n");
			printf("\n You have scored %d points",p20);
		}
		else
		{
			printf("\n !!!! WRONG ANSWER !!!!");
			p020 = 0;
			printf("\n");
			printf("\n You have scored %d points",p020);
		}
		getch();
		
		printf("\n");
		total = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10 + p11 + p12 + p13 + p14 + p15 + p16 + p17 + p18 + p19 + p20 + p01 + p02 + p03 + p04 + p05 + p06 + p07 + p08 + p09 + p010 + p011 + p012 + p013 + p014 + p015 + p016 + p017 + p018 + p019 + p020;
	    printf("\n\t\t\t\t\t\t\t\t\t\t\t ~ ~ ~ ~ CONGRATULATIONS ~ ~ ~ ~");
	    printf("\n");
	    printf("\n\t\t\t\t\t\t\t\t You have scored total %d points out of 100",total);
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
