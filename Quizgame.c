#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
	name:
	system("cls");
	 printf("\n \t\t\t\t\t Good Morning ");
	 printf("\n \t\t We have built a Quiz Game as our project using C Programming Language");
	 printf("\n \t\t The name of our Quiz Game is 'Mind Games'");
	 printf("\n \t\t The rules will be explained further");
	 printf("\n \t\t Thank you");
	 printf("\n Made By:  ");
	 printf("\n 1) Dhruv Dolas \t 20070123015 ");
	 printf("\n 2) Anoushka Pandit \t 20070123068 ");
	 printf("\n 3) Aaliya Shaikh \t 20070123084 ");
	 printf("\n\n\nPress any key to continue ");
	if (toupper(getch())=='C')
		{
		    goto mainhome;
        }
	
     mainhome:
     system("cls");
     printf("\n\t\t\t\t\t\t________________________________________");

     printf("\n\n\t\t\t\t\t\t\t    WELCOME ");
     printf("\n\n\t\t\t\t\t\t\t      TO ");
     printf("\n\n\t\t\t\t\t\t\t  MIND GAMES!!!!!!!!!!!    ");
     printf("\n\n\t\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t\t________________________________________");
     printf("\n\t\t\t\t\t\t > Press S to start the game");
     printf("\n\t\t\t\t\t\t > Press V to view the highest score  ");
     printf("\n\t\t\t\t\t\t > Press R to reset score");
     printf("\n\t\t\t\t\t\t > press H for help            ");
     printf("\n\t\t\t\t\t\t > press Q to quit             ");
     printf("\n\t\t\t\t\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your name: ");
     gets(playername);
	back:
    system("cls");
    printf("\n\t\t\t\t ------------------  Welcome %s to MIND GAMES --------------------------",playername);
    printf("\n\n\t\t\t\t Here are the rules of the game:");
    printf("\n\t\t\t\t -------------------------------------------------------------------------");
    printf("\n\t\t\t\t >> There are 2 rounds in this Quiz Game,Level 1 & Level 2");
    printf("\n\t\t\t\t >> In Level 1 round you will be asked a total of 5 questions to test your");
    printf("\n\t\t\t\t    general knowledge. You are eligible to play the game if you give atleast 3");
    printf("\n\t\t\t\t    right answers, otherwise you can't proceed further to the Level 2.");
    printf("\n\t\t\t\t >> Your game starts with Level 2.");
	printf("\n\t\t\t\t >> In this round you will be asked questions based on General Knowledge.");
    printf("\n\t\t\t\t >> Each right answer will be awarded 1,00,000 Points!");
    printf("\n\t\t\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t\t\t    right option.");
    printf("\n\t\t\t\t >> You will be asked questions continuously, till right answers are given");
    printf("\n\t\t\t\t >> No negative marking for wrong answers!");
    printf("\n\n\t\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
	printf("\n\t\t\t\t -------------------------------------------------------------------------");
	printf("\n\n\t\t\t\t\tPress C to Continue");
	if (toupper(getch())=='C')
		{
		    goto Level_1;
        }
	else
		printf("\n\n\t\t\t\tPlease Enter the correct key");
		getch();
		goto back;

	Level_1:
	system("cls");
	printf("\n\n\t\t\t\tYou are now going to begin with Level 1");
    printf("\n\n\n\t\t\t\t Press S  to start the game!\n");
    printf("\n\t\t\t\t Press any other key to return to the main menu!");
    if (toupper(getch())=='S')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=5;i++)
     {
    system("cls");
	 srand (time(NULL));
     r1=(rand()% 6 + 1); 

     switch(r1)
		{
		case 1:
		printf("\n\n\n\n\n\t\t\t\tHow many days are there in a week?");
		printf("\n\n\n\t\t\t\tA.4\t\tB.10\n\n\t\t\t\tC.7\t\tD.5");
		if (toupper(getch())=='C')
			{
			    printf("\n\n\t\t\t\tCorrect!!!");count++;
			    getch();
			    break;
			}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is C.7");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\n\n\t\t\t\tHow many letters are there in the English Alphabet...");
		printf("\n\n\n\t\t\t\tA.25\t\tB.26\n\n\t\t\t\tC.24\t\tD.27");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is B.26");
		       getch();
		       break;}

        case 3:
		printf("\n\n\n\n\t\t\t\tWhich bird is the National bird of India?");
		printf("\n\n\n\t\t\t\tA.Peacock\t\tB.Hyena\n\n\t\t\t\tC.Donkey\t\tD.Cow");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is A.Peacock");
		       getch();
		       break;}

        case 4:
		printf("\n\n\n\n\t\t\t\tWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\n\n\t\t\t\tA.Wayne Rooney\t\tB.Lucas Podolski\n\n\t\t\t\tC.Lionel Messi\t\tD.Cristiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\tCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is B.Lucas Podolski");
		       getch();
		       break;}

        case 5:
       printf("\n\n\n\n\t\t\t\tWhich animal laughs like human being?");
		printf("\n\n\n\t\t\t\tA.Polar Bear\t\tB.Hyena\n\n\t\t\t\tC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is B.Hyena");
		       getch();
		       break;}

        case 6:
		printf("\n\n\n\n\t\t\t\tHow many continents are there in the world?");
		printf("\n\n\n\t\t\t\tA.4\t\tB.6\n\n\t\t\t\tC.8\t\tD.7");
		if (toupper(getch())=='D' )
			{printf("\n\n\t\t\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is D.7");
		       getch();
		       break;}}
		}

	if(count>=3)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\n\t\t\t\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t\t\t\t\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\t\t\t\tYou are now going to begin with Level 2");
	 printf("\n\n\t\t\t\tPress S to Start the Game");
     if(toupper(getch())=='S')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
	 srand(time(NULL));
     r=(rand()% 20 + 1); 
     switch(r)
		{
		case 1:
		printf("\n\n\t\t\t\tWhich planet is the largest planet of our Solar System??");
		printf("\n\n\t\t\t\tA.Earth\t\tB.Saturn\n\n\t\t\t\tC.Mars\t\tD.Jupiter");
		if (toupper(getch())=='D')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is D.Jupiter");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\n\t\t\t\tPopular show 'Money Heist' is also known as?");
		printf("\n\n\t\t\t\tA.Control Z\t\tB.La Casa De Papel\n\n\t\t\t\tC.Bank Chor\t\tD.La Reina Sel Sur");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is B.La Casa De Papel");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n\t\t\t\tWho was the first Prime Minister of India? ");
		printf("\n\n\t\t\t\tA.Pandit Jawaharlal Nehru\t\tB.Manmohan Singh\n\n\t\t\t\tC.Sardar Vallabhbhai Patel\t\tD.Rajiv Gandhi");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is A.Pandit Jawaharlal Nehru");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\n\t\t\t\tThe Laws of Electromagnetic Induction were given by?");
		printf("\n\n\t\t\t\tA.Tesla  \t\tB.Faraday\n\n\t\t\t\tC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\n\t\t\t\tWrong!!! The correct answer is B.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\n\t\t\t\tIn what unit is electric power measured?");
		printf("\n\n\t\t\t\tA.Power\t\tB.Watt\n\n\t\t\t\tC.Units\t\tD.Coulomb");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is B.Watt");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\n\t\t\t\tWhich element is found in Vitamin B12?");
		printf("\n\n\t\t\t\tA.Zinc\t\tB.Cobalt\n\n\t\t\t\tC.Iron\t\tD.Calcium");
		if (toupper(getch())=='B' )
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is B.Cobalt");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\n\t\t\t\tStudy of Earthquake is knosn as?");
		printf("\n\n\t\t\t\tA.Seismology\t\tB.Cosmology\n\n\t\t\t\tC.Etimology \t\tD.Orology");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is A.Seismology");getch();
		      goto score;
		       break;
		       }

        case 8:
		printf("\n\n\n\t\t\t\tWhich Country has not missed an Olympic event?");
		printf("\n\n\t\t\t\tA.Spain\t\tB.Brazil\n\n\t\t\t\tC.India\t\tD.Australia");
		if (toupper(getch())=='D')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is D.Australia");
		       getch();
		       goto score;
		       break;
		       }

        case 9:
		printf("\n\n\n\t\t\t\tWhat is the capital of Denmark?");
		printf("\n\n\t\t\t\tA.Ribe\t\tB.Copenhagen\n\n\t\t\t\tC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\n\t\t\t\tWrong!!! The correct answer is B.Copenhagen");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\n\t\t\t\tWhich city is known as the 'Pink City'?");
		printf("\n\n\t\t\t\tA.Banglore\t\tB.Jaipur\n\n\t\t\t\tC.Chennai \t\tD.Udaipur");
		if (toupper(getch())=='B')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is B.Jaipur");
		       getch();
		       goto score;
		       break;
		       }

        case 11:
		printf("\n\n\n\t\t\t\tWhich country invented ice cream?");
		printf("\n\n\t\t\t\tA.India\t\tB.Switzerland\n\n\t\t\t\tC.China\t\tD.Romania");
		if (toupper(getch())=='C')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is C.China");
		       getch();
		       goto score;
		       break;
		       }

        case 12:
		printf("\n\n\n\t\t\t\tWhich is the odd man out?");
		printf("\n\n\t\t\t\tA.Neutrons \t\tB.Protons\n\n\t\t\t\tC.Electrons\t\tD.Quarks");
		if (toupper(getch())=='D')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is D.Quarks");
		       getch();
		       goto score;
		       break;
		       }

		case 13:
		printf("\n\n\n\t\t\t\tWhich is the hottest planet in the solar system?");
		printf("\n\n\t\t\t\tA.Earth\t\tB.Mercury\n\n\t\t\t\tC.Venus\t\tD.Jupiter");
		if (toupper(getch())=='C')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is C.Venus");
		       getch();
		       goto score;
		       break;
		       }

        case 14:
		printf("\n\n\n\t\t\t\tIn which year did World War 1 begin in?");
		printf("\n\n\t\t\t\tA.1914\t\tB.1915\n\n\t\t\t\tC.1910\t\tD.1912");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is A.1914");
		       getch();
		       goto score;
		       break;
		       }

		case 15:
		printf("\n\n\n\t\t\t\tWhich among the following is a galaxy?");
		printf("\n\n\t\t\t\tA.Sirius\t\tB.Vega\n\n\t\t\t\tC.Orion \t\tD.Andromeda");
		if (toupper(getch())=='D')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is D.Andromeda");
		       getch();
		       goto score;
		       break;
		       }

		case 16:
		printf("\n\n\n\t\t\t\tWhich band was Freddie Mercury a part of?");
		printf("\n\n\t\t\t\tA.ABBA \t\tB.Boney M\n\n\t\t\t\tC.Queen\t\tD.Beatles");
		if (toupper(getch())=='C')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is C.Queen");
		       getch();
		       goto score;
		       break;
		       }


		case 17:
		printf("\n\n\n\t\t\t\tWho won the First ever football World Cup in 1930?");
		printf("\n\n\t\t\t\tA.Brazil\t\tB.Argentina\n\n\t\t\t\tC.Spain\t\tD.Uruguay");
		if (toupper(getch())=='D')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is D.Uruguay");
		       getch();
		       goto score;
		       break;
		       }

		case 18:
		printf("\n\n\n\t\t\t\tWhen is Earth Day observed every year?");
		printf("\n\n\t\t\t\tA.June 29\t\tB.January 26\n\n\t\t\t\tC.July 15\t\tD.April 22");
		if (toupper(getch())=='D')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is D.April 22");
		       getch();
		       goto score;
		       break;
		       }

		case 19:
		printf("\n\n\n\t\t\t\tWhich is the 2nd smallest country in the world?");
		printf("\n\n\t\t\t\tA.Tuvalu\t\tB.Vatican City\n\n\t\t\t\tC.Monaco\t\tD.Venezuela");
		if (toupper(getch())=='C')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is C.Monaco");
		       getch();
		       goto score;
		       break;
		       }

		case 20:
		printf("\n\n\n\t\t\t\tWhat is the Capital of Azerbaijan?");
		printf("\n\n\t\t\t\tA.Baku\t\tB.Quba\n\n\t\t\t\tC.Ganja\t\tD.Sheki");
		if (toupper(getch())=='A')
			{printf("\n\n\t\t\t\tCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\n\t\t\t\tWrong!!! The correct answer is A.Baku");
		       getch();
		       goto score;
		       break;
		       }}}
	score:
    system("cls");
	score=(float)countr*100000; 
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\n\t\t\t\t\tIT WAS A VALIANT EFFORT!!! ");
	     printf("\n\n\t\t\t\t Your score is %.2f",score);
		 printf("\t\t\t\t Thank You for playing!!");goto go;}

	 else if(score>=1000000.00)
	{
	    printf("\n\n\n\t\t\t\t\t**************** CONGRATULATION ****************");
	    printf("\n\n\t\t\t\t YOU HAVE ACED THE QUIZ !!!!!!!!!");
	    printf("\n\n\t\t\t\t Your score is %.2f",score);
	    printf("\t\t\t\t Thank You for playing!!");goto go;
	}
	 else
{
	 printf("\n\n\t\t\t\t******** SORRY, YOU NEED TO WORK HARDER ********");
	 printf("\n\t\t\t Thank You for playing");
	    goto go;}

	go:
	printf("\n\n\t\t\t\t Press Y if you want to play next game");
	printf("\n\n\t\t\t\t Press Q if you want to quit");
	printf("\n\n\t\t\t\t Press any other key if you want to go main menu");
	if (toupper(getch())=='Y')
	{
		edit_score(score,playername);
		goto home;
	}
	else 
		if (toupper(getch())=='Q')
			{ 
				edit_score(score,playername);
				exit(1);
			}
		else
			{
			edit_score(score,playername);
			goto mainhome;
			}
		}
		else
			printf("\n\n\t\t\t\tPlease enter the correct key");
			getch();
			goto mainhome;
	}

void edit_score(float score, char playername[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",playername,sc);
	    fclose(f);}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t\t\t*************************************************************");
	printf("\n\n\t\t\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{
	system("cls");
    printf("\n\n\t\t\t\t                              HELP");
    printf("\n\t\t\t\t -------------------------------------------------------------------------");
    printf("\n\t\t\t\t ......................... C program Quiz Game...........");
    printf("\n\t\t\t\t >> There are two rounds in the game, Level 1 & Level 2");
    printf("\n\t\t\t\t >> In Level 1 round you will be asked a total of 5 questions to test your general");
    printf("\n\t\t\t\t    knowledge. You will be eligible to play the game if you can give atleast 3");
    printf("\n\t\t\t\t    right answers otherwise you can't play the Game...........");
    printf("\n\t\t\t\t >> Your game starts with Level 2.");
	printf("\n\t\t\t\t >> In this round you will be asked questions based on General Knowledge.");
    printf("\n\t\t\t\t >> Each right answer will be awarded 1,00,000 Points!");
    printf("\n\t\t\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t\t\t    right option");
    printf("\n\t\t\t\t >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n\t\t\t\t >> No negative marking for wrong answers");

	printf("\n\n\t\t\t\t*********************BEST OF LUCK*********************************");
	}

