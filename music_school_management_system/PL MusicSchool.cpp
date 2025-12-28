#include"antheaderplusplus.h"
#include"music_school.h"
#include".design.h"

int main()
{
	SetConsoleTitle("Music School system");
	setcursor(0,0);
	intro();
	delay(200);
	menu:
	foreColor(0);
	system("cls");
	
	frame();
	miniframe();
	welcome();
	foreColor(1);
	//183
    gotoxy(35,6);cout<<"Please choose via number"<<endl;
	drawBoxSingleLineWithBG(30,8,28,1,249);gotoxy(36,9);cout<<"[1] ADMIN"<<endl;
	drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(36,12);cout<<"[2] STAFF"<<endl;
	drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(36,15);cout<<"[3] STUDENT"<<endl;
	drawBoxSingleLineWithBG(30,17,28,1,249);gotoxy(36,18);cout<<"[4] EXI "<<endl;
	foreColor(12);  
	char choose;             
	choose=getch();
	switch(choose)
	{
		case'1':
			{
				ad:
				foreColor(1);
				system("cls");
				frame();
				miniframe();
				 admin();
			    gotoxy(35,6);cout<<"Please choose via number"<<endl;
				drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(36,12);cout<<"[1] login"<<endl;
				drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(36,15);cout<<"[2] back "<<endl;
				choose=getch();
				switch(choose)
			 	{
			 		case'1':
			 			{
			 				log:
			 				foreColor(0);
			 				system("cls");
			 				string Username,Password;
			 				frame();
				            miniframe();
				            logIn();
				            setcursor(1,5);
				            drawBoxSingleLine(30,14,28,1,249);gotoxy(30,15);cout<<"password    :"<<endl;
			 				drawBoxSingleLine(30,11,28,1,249);gotoxy(30,12);cout<<"username    :";foreColor(1);cin>>Username;fflush(stdin);cin.clear();
			 				drawBoxSingleLine(30,14,28,1,249);gotoxy(30,15);cout<<"password    :";foreColor(1);hidePassword(Password);fflush(stdin);cin.clear();
			 				if(Username!="phally"||Password!="2286")
			 				{
			 					setcursor(0,0);
			 					foreColor(12);
			 				    gotoxy(33,17);cout<<"wrong username or password";
			 					getch();
			 					goto log;
							}
							else
							{
								system("cls");
								foreColor(1);
								quitar();
								loading();
								foreColor(0);
								admin:
									foreColor(0);
								system("cls");
								frame();
				                miniframe();
				                option();
				                 gotoxy(35,6);cout<<"Please choose via number"<<endl;
								drawBoxSingleLineWithBG(30,8,28,1,249);gotoxy(36,9);cout<<"[1] STAFF CONTROL"<<endl;
								drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(35,12);cout<<"[2] STUDENT CONTROL"<<endl;
								drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(35,15);cout<<"[3] BACK"<<endl;
								choose=getch();
								switch(choose)
						 		{
									case'1':
								 		{
								 			stafcon:
								 			foreColor(0);
											system("cls");
											frame();
				            			    miniframe();
				            				option();
				            				 gotoxy(35,4);cout<<"Please choose via number"<<endl;
											drawBoxSingleLineWithBG(30,5,28,1,249);gotoxy(36,6);cout<<"[1] insert staff "<<endl;
											drawBoxSingleLineWithBG(30,8,28,1,249);gotoxy(36,9);cout<<"[2] view staff "<<endl;
											drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(36,12);cout<<"[3] remove staff "<<endl;
											drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(36,15);cout<<"[4] search staff "<<endl;
											drawBoxSingleLineWithBG(30,17,28,1,249);gotoxy(36,18);cout<<"[5] update staff "<<endl;
											drawBoxSingleLineWithBG(30,20,28,1,249);gotoxy(36,21);cout<<"[6] back"<<endl;
											choose=getch();
											switch(choose)
									 		{
												case'1':
													{
													foreColor(0);
											         system("cls");
										          	   frame();
													   VLine(63,1,23);
														insertStaff();
														gotoxy(65,12);cout<<"  >>insert successful<<"<<endl;
														getch();
														goto stafcon;
													}
												break;
												case'2':
													{foreColor(0);
														system("cls");
														viewStaff();
														getch();
														goto stafcon;
													}
												break;
												case'3':
													{
													    foreColor(0);
														system("cls");
														deleteStaff();
														getch();
														goto stafcon;
													}
												break;
												case'4':
											 		{
											 			foreColor(0);
													   system("cls");
													   searchStaff();												   
													   getch();
													   goto stafcon;
											 		}
											 	break;
											 	case'5':
											 		{ 
											 		    foreColor(0);
											 			system("cls");
											 			frame();
											 			line();
											 			updateStaff();
											 			getch();
											 			goto stafcon;
											 			
													}
												break;
												case'6':
													{
														goto admin;
													}
												break;
												default:
											 		{
											 			
														goto stafcon;
											 		}
											 	
												
									 		}
								 		}
								 	break;
								 	case'2':
								 	    {   
								 	        stucont:
								 	        foreColor(0);
										    system("cls");
										    frame();
				            			    miniframe();
				            				option();
				            				 gotoxy(35,4);cout<<"Please choose via number"<<endl;
								 	     	drawBoxSingleLineWithBG(30,8,28,1,249);gotoxy(36,9);cout<<"[1]Quitar Class"<<endl;
								 	     	drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(36,12);cout<<"[2]E-Quitar Class"<<endl;
								 	     	drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(36,15);cout<<"[3]Piano class"<<endl;
								 	     	drawBoxSingleLineWithBG(30,17,28,1,249);gotoxy(36,18);cout<<"[4] back"<<endl;
								 	     	choose=getch();
								 	     	switch(choose)
								 	     	 {
								 	     	 	case'1':
								 	     	 		{   quit:
								 	     	 			foreColor(0);
								 	     	 			system("cls");
								 	     	 			frame();
				            			                 miniframe();
				            			              	option();
				            			              	gotoxy(35,3);cout<<"Please choose via number"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,4,28,1,249);gotoxy(36,5);cout<<"[1]insert student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,7,28,1,249);gotoxy(36,8);cout<<"[2]view student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,10,28,1,249);gotoxy(36,11);cout<<"[3]search student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,13,28,1,249);gotoxy(36,14);cout<<"[4]update student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,16,28,1,249);gotoxy(36,17);cout<<"[5]remove student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,19,28,1,249);gotoxy(36,20);cout<<"[6] edit student's id"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,22,28,1,249);gotoxy(36,23);cout<<"[7]back"<<endl;
								 	     	 			choose=getch();
								 	     	 			switch(choose)
								 	     	 		    {
								 	     	 		       case'1':
															  {
															  	foreColor(0);
															  	system("cls");
										          	            frame();
													              VLine(63,1,23);
													              dInsert();
															  	 insertQuitarStudent();
															  	 foreColor(5);gotoxy(30,18);cout<<"insert successful"<<endl;
															  	 getch();
															  	 goto quit;
															   }	
															break;
															case'2':
															  {
															  	foreColor(0);
															  	 system("cls");
															  	 SetCursor(0);
															  	 viewQuitarStudent();
															  	 getch();
															  	 goto quit;
															  }
															break;
															case'3':
															 {
															 	foreColor(0);
															 	system("cls");
															 	searchQuitarStudent();
															 	getch();
															 	goto quit;
															 }
															break;
															case'4':
															 {
															 	foreColor(0);
															 	system("cls");
															 	updateQuitarStudent();
															 	getch();
															 	goto quit;
															 }
															 break;
															 case'5':
															 {
															 	foreColor(0);
															 	system("cls");
															 	DeleteQuitarStudent();
															 	getch();
															 	goto quit;
															 	
															 }
															 break;
															 case'6':
															 	{
															 	foreColor(0);
																 system("cls");
																 addQId();
																 getch();
																 goto quit;
																 }
																break;
															 case'7':
														      {
														      	foreColor(0);
														      	 goto stucont;		
															  }
															 break;
															 default:
															 	{
															 		
															 		goto quit;
															    } 	
														}	
													}
												break;
												case'2':
												{
													equit:
													
													    foreColor(0);
													    system("cls");
								 	     	 			frame();
				            			                 miniframe();
				            			              	option();
				            			              	gotoxy(35,3);cout<<"Please choose via number"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,4,28,1,249);gotoxy(36,5);cout<<"[1]insert student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,7,28,1,249);gotoxy(36,8);cout<<"[2]view student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,10,28,1,249);gotoxy(36,11);cout<<"[3]search student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,13,28,1,249);gotoxy(36,14);cout<<"[4]update student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,16,28,1,249);gotoxy(36,17);cout<<"[5]remove student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,19,28,1,249);gotoxy(36,20);cout<<"[6] Edit student's id"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,22,28,1,249);gotoxy(36,23);cout<<"[7]back"<<endl;
								 	     	 			choose=getch();
								 	     	 			switch(choose)
								 	     	 			{
								 	     	 				case'1':
								 	     	 				{
								 	     	 					foreColor(0);
															  	system("cls");
															  	frame();
															  	miniframe();
															  	dInsert();
															  	 insertEquitarStudent();
															  	foreColor(5);gotoxy(30,18);cout<<"insert successful"<<endl;
															  	 getch();
															  	 goto equit;
															}
															break;
															case'2':
															{
																foreColor(0);
															  	 system("cls");
															  	 setcursor(0,0);
															  	 viewEquitarStudent();
															  	 getch();
															  	 goto equit;
															}
															break;
															case'3':
															{
																 foreColor(0);
															 	system("cls");
															 	searchEquitarStudent();
															 	getch();
															 	goto equit;
															}
															break;
															case'4':
															{
																foreColor(0);
															 	system("cls");
															 	updateEquitarStudent();
															 	getch();
															 	goto equit;
															}
															break;
															case'5':
															{
																foreColor(0);
															 	system("cls");
															 	DeleteEquitarStudent();
															 	getch();
															 	goto equit;
															}
															break;
															case'6':
															{
																foreColor(0);
																 system("cls");
																 addEQId();
																 getch();
																 goto equit;
															}
															break;
															case'7':
															{
																
															}
															break;
															default:
															{
																
															}
															break;
														}
								 	     	 																									 
												}
												break;
												case'3':
												{
													pia:
														foreColor(0);
													system("cls");
								 	     	 			frame();
				            			                 miniframe();
				            			              	option();
				            			              	setcursor(0,0);
				            			              	gotoxy(35,3);cout<<"Please choose via number"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,4,28,1,249);gotoxy(36,5);cout<<"[1]insert student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,7,28,1,249);gotoxy(36,8);cout<<"[2]view student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,10,28,1,249);gotoxy(36,11);cout<<"[3]search student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,13,28,1,249);gotoxy(36,14);cout<<"[4]update student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,16,28,1,249);gotoxy(36,17);cout<<"[5]remove student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,19,28,1,249);gotoxy(36,20);cout<<"[6]edit student's id"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,22,28,1,249);gotoxy(36,23);cout<<"[7]back"<<endl;
								 	     	 			choose=getch();
								 	     	 			switch(choose)
								 	     	 		    {
								 	     	 		       case'1':
															  {
															  	foreColor(0);
															  	system("cls");
															  	frame();
															  	miniframe();
															  	dInsert();
															  	 insertPianoStudent();
															  	foreColor(5);gotoxy(30,18);cout<<"insert successful"<<endl;
															  	 getch();
															  	 goto pia;
															   }	
															break;
															case'2':
															  {
															  	foreColor(0);
															  	 system("cls");
															  	 setcursor(0,0);
															  	 viewPianoStudent();
															  	 getch();
															  	 goto pia;
															  }
															break;
															case'3':
															 {
															 	foreColor(0);
															 	system("cls");
															 	searchPianoStudent();
															 	getch();
															 	goto pia;
															 }
															break;
															case'4':
															 {
															 	foreColor(0);
															 	system("cls");
															 	updatePianoStudent();
															 	getch();
															 	goto pia;
															 }
															 break;
															 case'5':
															 {
															 	foreColor(0);
															 	system("cls");
															 	DeletePianoStudent();
															 	getch();
															 	goto pia;
															 }
															 break;
															 case'6':
															 	{
															 		foreColor(0);
															 		system("cls");
															 		addPId();
															 		getch();
															 		goto pia;
																 }
															 break;
															 case'7':
														      {
														      	 goto stucont;		
															  }
															   break;
															   default:
															 	{
															 	
															 		goto pia;
															    }  
														}															
												}
												break;
												case'4':
												{
													goto admin;
													
												}	
												break;
												default:
												{
													goto stucon;
												}
											 }
										}
									break;
									case'3':
								 	    {
									    	goto ad;
								 		}
								 	break;
								 	default:
								 		{
								 			goto admin;
										}
									
						 		}
							}	
			 				
						}
					break;
					case'2':
				 		{
							goto menu;
				 		}
				 	break;
				 	default:
				 		{
				 			goto ad;
						}		
			 	}
			}
		break;
		case'2':
			{
				sta:
				foreColor(1);
				system("cls");
				frame();
				miniframe();
				dStaff();
			    gotoxy(35,6);cout<<"Please choose via number"<<endl;
				drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(36,12);cout<<"[1] login"<<endl;
				drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(36,15);cout<<"[2] back "<<endl;
				choose=getch();
				switch(choose)
				{
					case'1':
					{
						
					    login();
					    foreColor(0);
						Stacon:
						system("cls");
						frame();
						miniframe();
						dStaff();
						 gotoxy(35,4);cout<<"Please choose via number"<<endl;
							drawBoxSingleLineWithBG(30,8,28,1,249);gotoxy(33,9);cout<<"[1] Student control"<<endl;
					    	drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(33,12);cout<<"[2] view your information"<<endl;
						    drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(33,15);cout<<"[3] back"<<endl;
						choose=getch();
						switch(choose)
						{
						   case'1':
						   	{
								stucon:
				                 foreColor(0);
							     system("cls");
							     frame();
	            			     miniframe();
	            			 	option();
	            				 gotoxy(35,4);cout<<"Please choose via number"<<endl;
					 	     	drawBoxSingleLineWithBG(30,8,28,1,249);gotoxy(36,9);cout<<"[1]Quitar Class"<<endl;
					 	     	drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(36,12);cout<<"[2]E-Quitar Class"<<endl;
					 	     	drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(36,15);cout<<"[3]Piano class"<<endl;
					 	     	drawBoxSingleLineWithBG(30,17,28,1,249);gotoxy(36,18);cout<<"[4] back"<<endl;
		 	     	            choose=getch();
					 	     	switch(choose)
					 	     	 {
					 	     	 	case'1':
					 	     	 		{   qui:
					 	     	 				foreColor(0);
													system("cls");
							 	     	 			frame();
			            			                 miniframe();
			            			              	option();
			            			              	setcursor(0,0);
			            			              	gotoxy(35,3);cout<<"Please choose via number"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,4,28,1,249);gotoxy(36,5);cout<<"[1]insert student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,7,28,1,249);gotoxy(36,8);cout<<"[2]view student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,10,28,1,249);gotoxy(36,11);cout<<"[3]search student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,13,28,1,249);gotoxy(36,14);cout<<"[4]update student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,16,28,1,249);gotoxy(36,17);cout<<"[5]remove student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,19,28,1,249);gotoxy(36,20);cout<<"[6] Add student's id"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,22,28,1,249);gotoxy(36,23);cout<<"[7]back"<<endl;
							 	     	 			choose=getch();
					 	     	 			
					 	     	 			switch(choose)
					 	     	 		    {
					 	     	 		       case'1':
												  {
												  	foreColor(0);
												  	system("cls");
												  	frame();
												  	miniframe();
												  	dInsert();
												  	 insertQuitarStudent();
												  	 foreColor(5);gotoxy(30,18);cout<<"insert successful"<<endl;
												  	 getch();
												  	 goto qui;
												   }	
												break;
												case'2':
												  {
												  	foreColor(0);
												  	 system("cls");
												  	 viewQuitarStudent();
												  	 getch();
												  	 goto qui;
												  }
												break;
												case'3':
												 {
												 	foreColor(0);
												 	system("cls");
												 	searchQuitarStudent();
												 	getch();
												 	goto qui;
												 }
												break;
												case'4':
												 {
												 	foreColor(0);
												 	system("cls");
												 	updateQuitarStudent();
												 	getch();
												 	goto qui;
												 }
												 break;
												 case'5':
												 {
												 	foreColor(0);
												 	system("cls");
												 	DeleteQuitarStudent();
												 	getch();
												 	goto qui;
												 }
												 break;
												 
												 	case'6':
												 	{
												 		foreColor(0);
												 		system("cls");
												 		addQId();
												 		getch();
												 		goto qui;
													}
												 
												 break;
												 case'7':
											      {
											      	foreColor(0);
											      	 goto stucon;		
												  }
												 break;
												 default:
												 	{
												 		
												 		goto qui;
												    } 	
											}	
										}
									break;
									case'2':
									{
										equi:
										 		foreColor(0);
													system("cls");
								 	     	 			frame();
				            			                 miniframe();
				            			              	option();
				            			              	setcursor(0,0);
				            			              	gotoxy(35,3);cout<<"Please choose via number"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,4,28,1,249);gotoxy(36,5);cout<<"[1]insert student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,7,28,1,249);gotoxy(36,8);cout<<"[2]view student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,10,28,1,249);gotoxy(36,11);cout<<"[3]search student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,13,28,1,249);gotoxy(36,14);cout<<"[4]update student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,16,28,1,249);gotoxy(36,17);cout<<"[5]remove student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,19,28,1,249);gotoxy(36,20);cout<<"[6] Add student's id"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,22,28,1,249);gotoxy(36,23);cout<<"[7]back"<<endl;
								 	     	 			choose=getch();
					 	     	 			switch(choose)
					 	     	 		    {
					 	     	 		       case'1':
												  {
												  	 foreColor(0);
												  	  system("cls");
												  	   frame();
												  	   miniframe();
												  	    dInsert();
												  	    insertEquitarStudent();
												  	   foreColor(5);gotoxy(30,18);cout<<"insert successful"<<endl;
												  	 getch();
												  	 goto equi;
												   }	
												break;
												case'2':
												  {
												  	 foreColor(0);
												  	 system("cls");
												  	 viewEquitarStudent();
												  	 getch();
												  	 goto equi;
												  }
												break;
												case'3':
												 {
												 	foreColor(0);
												 	system("cls");
												 	searchEquitarStudent();
												 	getch();
												 	goto equi;
												 }
												break;
												case'4':
												 {
												 	
												 	foreColor(0);
												 	system("cls");
												 	updateEquitarStudent();
												 	getch();
												 	goto equi;
												 }
												 break;
												 case'5':
												 {
												 	
												 	foreColor(0);
												 	system("cls");
												 	DeleteEquitarStudent();
												 	getch();
												 	goto equi;
												 }
												 break;
												 case'6':
												{
													foreColor(0);
													system("cls");
													addEQId();
													getch();
													goto equi;
												}
												 break;
												 case'7':
											      {
											      	foreColor(0);
											      	 goto stucon;		
												  }
												   break;
												   default:
												 	{
												 		foreColor(0);
												 		goto equi;
												    }  
											}																									 
									}
									break;
									   case'3':
								    	{
										pian:
											foreColor(0);
											system("cls");
								 	        frame();
				            			     miniframe();
				            		         option();
				            			     setcursor(0,0);
	            			              	gotoxy(35,3);cout<<"Please choose via number"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,4,28,1,249);gotoxy(36,5);cout<<"[1]insert student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,7,28,1,249);gotoxy(36,8);cout<<"[2]view student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,10,28,1,249);gotoxy(36,11);cout<<"[3]search student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,13,28,1,249);gotoxy(36,14);cout<<"[4]update student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,16,28,1,249);gotoxy(36,17);cout<<"[5]remove student"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,19,28,1,249);gotoxy(36,20);cout<<"[6] Add student's id"<<endl;
								 	     	 			drawBoxSingleLineWithBG(30,22,28,1,249);gotoxy(36,23);cout<<"[7]back"<<endl;
								 	     	choose=getch();
					 	     	 			switch(choose)
					 	     	 		    {
					 	     	 		       case'1':
												  {
												  	 foreColor(0);
												  	  system("cls");
												  	   frame();
												  	   miniframe();
												  	    dInsert();
												  	   insertPianoStudent();
												  	   foreColor(5);gotoxy(30,18);cout<<"insert successful"<<endl;
												  	 getch();
												  	 goto pian;
												   }	
												break;
												case'2':
												  {
												  	 foreColor(0);
												  	 system("cls");
												  	 viewPianoStudent();
												  	 getch();
												  	 goto pian;
												  }
												break;
												case'3':
												 {
												 	foreColor(0);
												 	system("cls");
												 	searchPianoStudent();
												 	getch();
												 	goto pian;
												 }
												break;
												case'4':
												 {
												 	foreColor(0);
												 	system("cls");
												 	updatePianoStudent();
												 	getch();
												 	goto pian;
												 }
												 break;
												 case'5':
												 {
												 		foreColor(0);
												 	system("cls");
												 	DeletePianoStudent();
												 	getch();
												 	goto pian;
												 }
												 break;
												 case'6':
												 	{
												 		foreColor(0);
												 		system("cls");
												 		addPId();
												 		getch();
												 		goto pian;
													 }
												 break;
												 case'7':
											      {	
											        foreColor(0);
											        goto stucon;
										           }
												   break;
												   default:
												  {
											 		foreColor(0);
											 		goto pian;
												  }  	foreColor(0);
											goto Stacon;
										}
								 }
							  }
							}
							break;
							case'2':
							{
								foreColor(0);
								system("cls");
								searchStaff();
								getch();
								goto Stacon;
							}
							break;
							case'3':
							{
								goto sta;
							}
							break;
							default:
							{
								goto Stacon;
							}
						
						}
					}
					break;
					case'2':
					{
						goto menu;
					}
					break;
					default:
					{
						
						goto sta;
					}
					 
				}
															
			}
		break;
		case'3':
			{
				user:
					foreColor(0);
				system("cls");
				frame();
				miniframe();
				dUser();
				setcursor(0,0);
	            gotoxy(33,4);cout<<"Please choose via number"<<endl;
				drawBoxSingleLineWithBG(30,5,28,1,249);gotoxy(34,6);cout<<"[1] EnrollQuitar Class"<<endl;
				drawBoxSingleLineWithBG(30,8,28,1,249);gotoxy(33,9);cout<<"[2] Enroll E-Quitar class"<<endl;
				drawBoxSingleLineWithBG(30,11,28,1,249);gotoxy(34,12);cout<<"[3] EnrollPiano class"<<endl;
				drawBoxSingleLineWithBG(30,14,28,1,249);gotoxy(34,15);cout<<"[4] back"<<endl;
				choose=getch();
				switch(choose)
				{
					case'1':
						{
							foreColor(0);
							system("cls");
							frame();
							dEnroll();
							miniframe();
							enrollQuitar();
							gotoxy(33,18);cout<<"Enroll successful";
							gotoxy(30,19);cout<<"please come to school to pay ";
							gotoxy(30,20);cout<<"and choose time to study.";
							getch();
							goto user;
						}
					break;
					case'2':
						{
							foreColor(0);
							system("cls");
							frame();
							dEnroll();
							miniframe();
							enrollEquitar();
							gotoxy(33,18);cout<<"Enroll successful";
							gotoxy(30,19);cout<<"please come to school to pay";
							gotoxy(30,20);cout<<"and choose time to study.";
							getch();
							goto user;
						}
					break;
					case'3':
						{	foreColor(0);
							system("cls");
							frame();
							dEnroll();
							miniframe();
							enrollPiano();
							gotoxy(33,18);cout<<"Enroll successful";
							gotoxy(30,19);cout<<"please come to school to pay ";
							gotoxy(30,20);cout<<"and choose time to study.";
							getch();
							goto user;
						}
					break;
					case'4':
						{
							foreColor(0);
							goto menu;
						}
					break;
					default:
						{
							foreColor(0);
							goto user;
						}
				}
				
			}
		break;
		case'4':
			{
				foreColor(0);
				system("cls");
				exit(0);
			}
		break;
		 default:
		   {
		   	 system("cls");
		   	 goto menu;
		   }
		
    }
	system("cls");
	getch();
	return 0;
}