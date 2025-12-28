#ifndef __MUSIC_SCHOOL__H__
#define __MUSIC_SCHOOL__H__
#include".design.h"
#include<iostream>
#include<fstream>
#include<conio.h>
#include"antheaderplusplus.h"
#include"antheaderinput.h"
#include".design.h"
#include<windows.h>
void insertStaf();
void viewStaff();
void searchStaff();
void deleteStaff();
void updateStaff();
void insertEquitarStudent();
void viewEquitarStudent();
void searchEquitarStudent();
void deleteEquitarStudent();
void updateEquitarStudent();
void insertPianoStudent();
void viewPianoStudent();
void searchPianoStudent();
void deletePianoStudent();
void updatePianoStudent();
void changePassword();
void login();
void viewinfo();
void addId();
using namespace std;

class management{
public:
int id=0, age;
char name[20];
char sex;
char  susername[20],spassword[20];
char position[20];
double salary;
char course[15];
char address[15];
int phone;
void idStu()
{
	setcursor(1,1);
  
  drawBoxSingleLineWithBG(35,8,28,1,183);gotoxy(35,9);cout<<"name     :"<<name;
  drawBoxSingleLineWithBG(35,11,28,1,183);gotoxy(35,12);cout<<"age      :"<<age;
  drawBoxSingleLineWithBG(35,14,28,1,183);gotoxy(35,15);cout<<"sex      :"<<sex;
  drawBoxSingleLineWithBG(35,17,28,1,183);gotoxy(35,18);cout<<"address  :"<<address;
  drawBoxSingleLineWithBG(35,20,28,1,183); gotoxy(35,21);cout<<"phone   :"<<phone;
  drawBoxSingleLine(35,23,28,1,183);gotoxy(35,24);cout<<"add ID  :";foreColor(1);cin>>id;
}
void rigister()

{   setcursor(1,1);
    drawBoxSingleLine(30,6,28,1,183);gotoxy(30,7);cout<<"input age       :"<<endl;
    drawBoxSingleLine(30,9,28,1,183);gotoxy(30,10);cout<<"input name    :"<<endl;
    drawBoxSingleLine(30,12,28,1,183);gotoxy(30,13);cout<<"input sex     :"<<endl;
    drawBoxSingleLine(30,15,28,1,183);gotoxy(30,16);cout<<"input address :"<<endl;
 /////////
    drawBoxSingleLine(30,3,28,1,183);gotoxy(30,4);cout<<"phone number    :";foreColor(1);cin>>phone;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,6,28,1,183);gotoxy(30,7);cout<<"input age       :";foreColor(1);cin>>age;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,9,28,1,183);gotoxy(30,10);cout<<"input name     :";foreColor(1);cin>>name;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,12,28,1,183);gotoxy(30,13);cout<<"input sex     :";foreColor(1);cin>>sex;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,15,28,1,183);gotoxy(30,16);cout<<"input address :";foreColor(1);cin>>address;fflush(stdin);cin.clear();

}
void inputStudent()
{   setcursor(1,1);
    drawBoxSingleLine(30,6,28,1,183);gotoxy(30,7);cout<<"input age      :"<<endl;
    drawBoxSingleLine(30,9,28,1,183);gotoxy(30,10);cout<<"input name     :"<<endl;
    drawBoxSingleLine(30,12,28,1,183);gotoxy(30,13);cout<<"input sex     :"<<endl;
    drawBoxSingleLine(30,15,28,1,183);gotoxy(30,16);cout<<"input address :"<<endl;
    drawBoxSingleLine(30,18,28,1,183);gotoxy(30,19);cout<<"phone number  :"<<endl;
///////
     drawBoxSingleLine(30,3,28,1,183);gotoxy(30,4);cout<<"input id      :";foreColor(1);cin>>id;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,6,28,1,183);gotoxy(30,7);cout<<"input age      :";foreColor(1);cin>>age;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,9,28,1,183);gotoxy(30,10);cout<<"input name     :";foreColor(1);cin>>name;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,12,28,1,183);gotoxy(30,13);cout<<"input sex     :";foreColor(1);cin>>sex;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,15,28,1,183);gotoxy(30,16);cout<<"input address :";foreColor(1);cin>>address;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,18,28,1,183);gotoxy(30,19);cout<<"phone number  :";foreColor(1);cin>>phone;fflush(stdin);cin.clear();

}
void editStudent()
{ setcursor(1,1);
   drawBoxSingleLine(30,11,28,1,183);gotoxy(30,12);cout<<"update age    :"<<endl;
  drawBoxSingleLine(30,14,28,1,183);gotoxy(30,15);cout<<"update sex     :"<<endl;
  drawBoxSingleLine(30,17,28,1,183);gotoxy(30,18);cout<<"update address :"<<endl;
  drawBoxSingleLine(30,20,28,1,183); gotoxy(30,21);cout<<"update phone  :"<<endl;
	///
  drawBoxSingleLine(30,8,28,1,183);gotoxy(30,9);cout<<"update name      :";foreColor(1);cin>>name;fflush(stdin);cin.clear();
  drawBoxSingleLine(30,11,28,1,183);gotoxy(30,12);cout<<"update age      :";foreColor(1);cin>>age;fflush(stdin);cin.clear();
  drawBoxSingleLine(30,14,28,1,183);gotoxy(30,15);cout<<"update sex      :";foreColor(1);cin>>sex;fflush(stdin);cin.clear();
  drawBoxSingleLine(30,17,28,1,183);gotoxy(30,18);cout<<"update address :";foreColor(1);cin>>address;fflush(stdin);cin.clear();
  drawBoxSingleLine(30,20,28,1,183); gotoxy(30,21);cout<<"update phone  :";foreColor(1);cin>>phone;fflush(stdin);fflush(stdin);cin.clear();

  
}
void edit()
{  setcursor(1,1);
    drawBoxSingleLine(30,6,28,1,183);gotoxy(30,7);cout<<"update name     :"<<endl;
    drawBoxSingleLine(30,9,28,1,183);gotoxy(30,10);cout<<"update sex     :"<<endl;
    drawBoxSingleLine(30,12,28,1,183);gotoxy(30,13);cout<<"update address :"<<endl;
    drawBoxSingleLine(30,15,28,1,183);gotoxy(30,16);cout<<"update position:"<<endl;
    drawBoxSingleLine(30,18,28,1,183);gotoxy(30,19);cout<<"update salary  :"<<endl;
//////
    drawBoxSingleLine(30,3,28,1,183);gotoxy(30,4);cout<<"update age      :";foreColor(1);cin>>age;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,6,28,1,183);gotoxy(30,7);cout<<"update name     :";foreColor(1);cin>>name;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,9,28,1,183);gotoxy(30,10);cout<<"update sex     :";foreColor(1);cin>>sex;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,12,28,1,183);gotoxy(30,13);cout<<"update address :";foreColor(1);cin>>address;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,15,28,1,183);gotoxy(30,16);cout<<"update position:";foreColor(1);cin>>position;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,18,28,1,183);gotoxy(30,19);cout<<"update salary  :";foreColor(1);cin>>salary;fflush(stdin);cin.clear();
    
}
void input()
{    setcursor(1,1);
    gotoxy(67,3);cout<<"**create account for staff**"<<endl;
    drawBoxSingleLine(30,6,28,1,183);gotoxy(30,7);cout<<"input age       :"<<endl;
    drawBoxSingleLine(30,9,28,1,183);gotoxy(30,10);cout<<"input name     :"<<endl;
    drawBoxSingleLine(30,12,28,1,183);gotoxy(30,13);cout<<"input sex     :"<<endl;
    drawBoxSingleLine(30,15,28,1,183);gotoxy(30,16);cout<<"input address :"<<endl;
    drawBoxSingleLine(30,18,28,1,183);gotoxy(30,19);cout<<"input position:"<<endl;
    drawBoxSingleLine(30,21,28,1,183);gotoxy(30,22);cout<<"input salary  :"<<endl;
    drawBoxSingleLine(65,5,30,1,183);gotoxy(65,6);cout<<"username:"<<endl;
    drawBoxSingleLine(65,8,30,1,183);gotoxy(65,9);cout<<"password:"<<endl;
//////
    drawBoxSingleLine(30,3,28,1,183);gotoxy(30,4);cout<<"input id      :";foreColor(1);cin>>id;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,6,28,1,183);gotoxy(30,7);cout<<"input age       :";foreColor(1);cin>>age;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,9,28,1,183);gotoxy(30,10);cout<<"input name     :";foreColor(1);cin>>name;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,12,28,1,183);gotoxy(30,13);cout<<"input sex     :";foreColor(1);cin>>sex;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,15,28,1,183);gotoxy(30,16);cout<<"input address :";foreColor(1);cin>>address;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,18,28,1,183);gotoxy(30,19);cout<<"input position:";foreColor(1);cin>>position;fflush(stdin);cin.clear();
    drawBoxSingleLine(30,21,28,1,183);gotoxy(30,22);cout<<"input salary  :";foreColor(1);cin>>salary;fflush(stdin);cin.clear();
    
    drawBoxSingleLine(65,5,30,1,183);gotoxy(65,6);cout<<"username:";foreColor(1);cin>>susername;fflush(stdin);cin.clear();
    drawBoxSingleLine(65,8,30,1,183);gotoxy(65,9);cout<<"password:";foreColor(1);cin>>spassword;fflush(stdin);cin.clear();
}

void staffHeader()
{
   gotoxy(15,1); foreColor(3);cout<<left<<setw(10)<<"ID"<<setw(15)<<"NAME"<<setw(10)<<"SEX"<<setw(10)<<"AGE"<<setw(15)<<"ADDRESS"<<setw(10)<<"POSITION"<<"SALARY"<<endl;
}

void output()
{
   foreColor(1);cout<<"              ------------------------------------------------------------------------------------"<<endl;
   foreColor(2);cout<<left<<"              "<<setw(10)<<id<<setw(15)<<name<<setw(10)<<sex<<setw(10)<<age<<setw(15)<<address<<setw(10)<<position<<salary<<"$"<<endl;
}

void studentHeader()
{
    gotoxy(20,1);foreColor(3);cout<<left<<setw(10)<<"ID"<<setw(15)<<"NAME"<<setw(10)<<"SEX"<<setw(10)<<"AGE"<<setw(15)<<"PHONE NUMBER"<<setw(15)<<"ADDRESS"<<"COURSE"<<endl;
}
void OutputEQuitarStuent()
{
    foreColor(1);cout<<"                    -------------------------------------------------------------------------------------"<<endl;
    foreColor(2);cout<<left<<"                   "<<setw(10)<<id<<setw(15)<<name<<setw(10)<<sex<<setw(10)<<age<<setw(15)<<phone<<setw(15)<<address<<"Electric-Quitar"<<endl;
}
void OutputQuitarStuent()
{
    foreColor(1);cout<<"                    -------------------------------------------------------------------------------------"<<endl;
   foreColor(2);cout<<left<<"                    "<<setw(10)<<id<<setw(15)<<name<<setw(10)<<sex<<setw(10)<<age<<setw(15)<<phone<<setw(15)<<address<<"Quitar"<<endl;
}
void OutputPianoStuent()
{
    foreColor(1);cout<<"                    -------------------------------------------------------------------------------------"<<endl;
    foreColor(2);cout<<left<<"                   "<<setw(10)<<id<<setw(15)<<name<<setw(10)<<sex<<setw(10)<<age<<setw(15)<<phone<<setw(15)<<address<<"PIANO"<<endl;
}
};
fstream file;
management ma;
/// ////////////////////////////stafff//////////////////////////////////////////
 

void insertStaff()
{
    file.open("staffdata.bin",ios::out|ios::app|ios::binary);
    ma.input();
    file.write((char*)&ma,sizeof(ma));
    file.close();
}
void viewStaff()
{
    
    file.open("staffdata.bin",ios::in|ios::binary);
    if(file.fail())
    {
        foreColor(12);cout<<"file not found \n";
    }
    if(file.good())
    {
       
       ma.staffHeader();
       while(file.read((char*)&ma,sizeof(ma)))
       {
         ma.output();
       }
       
    }
    file.close();
}
void searchStaff()
{
  int id;
  bool found=false;
  file.open("staffdata.bin",ios::in|ios::binary);
  if(file.fail())
  {
    foreColor(12);
    gotoxy(35,6);cout<<"file not found \n";
  }
  if(file.good())
  {foreColor(1);
    DrawRectangle(34,5,30,1,2);gotoxy(35,6);cout<<"SEARCH ID:";cin>>id;
    system("cls");
    ma.staffHeader();
    while(file.read((char*)&ma,sizeof(ma)))
    {
	   if(id==ma.id)
	   {
	   	 ma.output();
       found=true; 
	   }
    }
    if(found==false )
    {
        foreColor(12);gotoxy(15,2);cout<<"id invalid\n";
    }
    
  }

file.close();
}
ofstream backup;
void deleteStaff()
{
    bool found=false;
    int id;
   file.open("staffdata.bin",ios::in|ios::binary);
   backup.open("backup.bin",ios::out|ios::app|ios::binary);
   if(file.bad())
   {
    foreColor(12);
    gotoxy(35,6);cout<<"file not found\n";
   }
   if(file.good())
   {
      foreColor(1);
      DrawRectangle(34,5,30,1,2);gotoxy(35,6);cout<<">>input id to delete:";cin>>id;
      while(file.read((char*)&ma,sizeof(ma)))
      {
        if(id==ma.id)
        {
            found=true;
        }
        if(id!=ma.id)
        {
            backup.write((char*)&ma,sizeof(ma));
        }
      }
   }
   if(found==true)
   {
    foreColor(1);
    gotoxy(35,8);cout<<"DELETE SUCCESSFUL"<<endl;
   }
   if(found!=true)
   {
   	//system("cls");
    foreColor(12);
    gotoxy(35,8);cout<<"ID INVALID!!"<<endl;
   }

   file.close();
   backup.close();
   remove("staffdata.bin");
   rename("backup.bin","staffdata.bin");
}
void updateStaff()
{
    int id;
    bool found=false;
    file.open("staffdata.bin",ios::out|ios::in|ios::binary);
    if(file.bad())
    {
      foreColor(12);
      gotoxy(33,6);  cout<<"file not found\n";
    }
    if(file.good())
    {
        foreColor(1);
        upd();
         gotoxy(33,5);cout<<"INPUT STAFF ID TO UPDATE:";cin>>id;
        while(file.read((char*)&ma,sizeof(ma)))
        {
            if(id==ma.id)
            {
                int last = file.tellg();
                system("cls");
                frame();
                line();
                 upd();
				ma.edit();
				file.seekp(last - sizeof(ma));
				file.write((char*)&ma ,sizeof(ma));
				found = true;
            }
        }
        if(found!=true)
        {
		system("cls");
		foreColor(12);
        gotoxy(33,6);cout<<"ID INVALID\n";
        }
    }
    file.close();
    
}


void login()
{  bool found=false;
   string un,pw;
    file.open("staffdata.bin",ios::in|ios::binary);
    if(file.bad())
    {
      foreColor(1);
    gotoxy(35,6);  cout<<"file not found\n";
    }
    if(file.good())
    {
    back:
    	foreColor(0);
        system("cls");
        foreColor(5);
        logIn();
        frame();
        miniframe();
        setcursor(1,4);
        drawBoxSingleLine(35,14,20,1,183);gotoxy(35,15);cout<<"password :"<<endl;
        drawBoxSingleLine(35,11,20,1,183);gotoxy(35,12);cout<<"username :";foreColor(1);cin>>un;fflush(stdin);cin.clear();
        drawBoxSingleLine(35,14,20,1,183);gotoxy(35,15);cout <<"password :";foreColor(1);hidePassword(pw);fflush(stdin);cin.clear();
    
     while(file.read((char*)&ma,sizeof(ma)))
     {
        if(un==ma.susername&&pw==ma.spassword)
        {
            found=true;
        }
     }
     if(found!=false)
     {
     	
      foreColor(0);
      system("cls");
      loading();
      
     }
     if(found!=true)
     {
       
	    foreColor(12);
        gotoxy(32,17);
        setcursor(0,0);
        cout<<"wrong username or password ";
        
        getch();
        goto back;

     }
     
    }
    file.close();
}
 

//////////////////////////////////quitar student///////////////////////////////////////////////
void addQId()
{
	bool found=false;
	int ph_num;
	DrawRectangle(34,5,40,1,2);gotoxy(35,6);cout<<"Enter Student phone number :";cin>>ph_num;
	file.open("quitarStudentdata.bin",ios::in|ios::out|ios::binary);
	if(file.bad())
	{
		foreColor(12);gotoxy(35,7);cout<<"file not found ";
	}
	if(file.good())
	{
		 while(file.read((char*)&ma,sizeof(ma)))
		 {
		 	if(ph_num==ma.phone)
		 	{
		 		int last=file.tellg();
		 		system("cls");
		 		ma.idStu();
		 		foreColor(0);
		 		system("cls");
		 		
		 		file.seekp(last - sizeof(ma));
		 		file.write((char*)&ma,sizeof(ma));
		 		found=true;
			}
		 }
	}
	if(found==true)
	{
		foreColor(1);
		gotoxy(35,8);cout<<"ID is added successful";
	}
	if(found==false)
	{
		foreColor(12);gotoxy(35,8);cout<<"number invalid";
	}
	file.close();
}


void insertQuitarStudent()
{
    file.open("quitarStudentdata.bin",ios::out|ios::app|ios::binary);
    ma.inputStudent();
    file.write((char*)&ma,sizeof(ma));
    file.close();
}
void viewQuitarStudent()
{
    
    file.open("quitarStudentdata.bin",ios::in|ios::binary);
    if(file.fail())
    {
        foreColor(12);
        gotoxy(30,18);cout<<"file not found \n";
    }
    if(file.good())
    {
    	foreColor(0);
       ma.studentHeader();
       while(file.read((char*)&ma,sizeof(ma)))
       {
         ma.OutputQuitarStuent();
       }
       
    }
    file.close();
}
void searchQuitarStudent()
{
  int id;
  bool found=false;
  file.open("quitarStudentdata.bin",ios::in|ios::binary);
  if(file.fail())
  {
    foreColor(12);
    gotoxy(35,6);cout<<"file not found \n";
  }
  if(file.good())
  {
    foreColor(1);
    DrawRectangle(34,5,30,1,2);gotoxy(35,6);cout<<"SEARCH ID:";cin>>id;
    
    system("cls");
    ma.studentHeader();
    while(file.read((char*)&ma,sizeof(ma)))
    {
    	if(id==ma.id)
    	{
    		ma.OutputQuitarStuent();
       found=true;
		}
    
    }
    if(found==false )
    {
       foreColor(12);
        gotoxy(20,2); cout<<"id invalid\n";
    }
    
  }

file.close();
}
ofstream Backup;
void DeleteQuitarStudent()
{
    bool found=false;
    int id;
   file.open("quitarStudentdata.bin",ios::in|ios::binary);
   Backup.open("Backup.bin",ios::out|ios::app|ios::binary);
   if(file.bad())
   {
    foreColor(12);
    gotoxy(35,6);cout<<"file not found\n";
   }
   if(file.good())
   {
      foreColor(1);
       DrawRectangle(34,5,30,1,2);gotoxy(35,6);cout<<"input id to delete:";cin>>id;
      while(file.read((char*)&ma,sizeof(ma)))
      {
        if(id==ma.id)
        {
            found=true;
        }
        if(id!=ma.id)
        {
            Backup.write((char*)&ma,sizeof(ma));
        }
      }
   }
    if(found==true)
   {
    foreColor(1);
    gotoxy(35,8);cout<<"DELETE SUCCESSFUL"<<endl;
   }
   if(found!=true)
   {
   	//system("cls");
    foreColor(12);
    gotoxy(35,8);cout<<"ID INVALID!!"<<endl;
   }

   file.close();
   Backup.close();
   remove("quitarStudentdata.bin");
   rename("Backup.bin","quitarStudentdata.bin");
}
void updateQuitarStudent()
{
    int id;
    bool found=false;
    file.open("quitarStudentdata.bin",ios::out|ios::in|ios::binary);
    if(file.bad())
    {
         foreColor(12);
        gotoxy(35,6);cout<<"file not found\n";
    }
    if(file.good())
    {
        system("cls");
                frame();
                line();
                 upd();
                 foreColor(3);
				 gotoxy(31,6);cout<<"INPUT STAFF ID TO UPDATE:";cin>>id;
        while( file.read((char*)&ma,sizeof(ma)))
        {
            if(id==ma.id)
            {
                int last=file.tellg();
                ma.editStudent();
               
                file.seekp(last-sizeof(ma));
                file.write((char*)&ma,sizeof(ma));
                found=true;
            }
        }
        if(found!=true)
        {
            foreColor(12);
            system("cls");
            gotoxy(35,6);cout<<"ID INVALID\n";
        }
    }
    file.close();
    
}

//////////////////////////////////electric quitar student///////////////////////////////////////////////
void addEQId()
{
	bool found=false;
	int ph_num;
	DrawRectangle(34,5,40,1,2);gotoxy(35,6);cout<<"Enter Student phone number :";cin>>ph_num;
	file.open("PianoStudentdata.bin",ios::in|ios::out|ios::binary);
	if(file.bad())
	{
		gotoxy(35,8);foreColor(12);cout<<"\nfile not found ";
	}
	if(file.good())
	{
		 while(file.read((char*)&ma,sizeof(ma)))
		 {
		 	if(ph_num==ma.phone)
		 	{
		 		int last=file.tellg();
		 		system("cls");
		 		ma.idStu();
		 		foreColor(0);
		 		system("cls");
		 		file.seekp(last - sizeof(ma));
		 		file.write((char*)&ma,sizeof(ma));
		 		found=true;
			}
		 }
	}
	if(found==true)
	{foreColor(1);
	gotoxy(35,8);cout<<"ID is added successful";
	}
	if(found!=true)
	{
		gotoxy(35,8);foreColor(12);cout<<"number invalid";
	}
	file.close();
}
void insertEquitarStudent()
{
    file.open("EquitarStudentdata.bin",ios::out|ios::app|ios::binary);
    ma.inputStudent();
    file.write((char*)&ma,sizeof(ma));
    file.close();
}
void viewEquitarStudent()
{
    
    file.open("EquitarStudentdata.bin",ios::in|ios::binary);
    if(file.fail())
    {
        foreColor(0);
        gotoxy(35,6);cout<<"file not found \n";
    }
    if(file.good())
    {
    	foreColor(0);
    	SetCursor(0);
       ma.studentHeader();
       while(file.read((char*)&ma,sizeof(ma)))
       {
       	SetCursor(0);
         ma.OutputEQuitarStuent();
       }   
    }
    file.close();
}
void searchEquitarStudent()
{
  int id;
  bool found=false;
  file.open("EquitarStudentdata.bin",ios::in|ios::binary);
  if(file.fail())
  {
    foreColor(1);
    gotoxy(35,6);cout<<"file not found \n";
  }
  if(file.good())
  {
    foreColor(1);
    DrawRectangle(34,5,30,1,2);gotoxy(35,6);cout<<"SEARCH ID:";cin>>id;
    system("cls");   
    ma.studentHeader();
    while(file.read((char*)&ma,sizeof(ma)))
    {
    	if(id==ma.id)
    	{
    		ma.OutputEQuitarStuent();
           found=true;
		}
       
    }
    if(found==false )
    {
        foreColor(12);
    gotoxy(20,2); cout<<"id invalid\n";
    }
    
  }

file.close();
}
ofstream Backup2;
void DeleteEquitarStudent()
{
    bool found=false;
    int id;
   file.open("EquitarStudentdata.bin",ios::in|ios::binary);
   Backup2.open("Backup2.bin",ios::out|ios::app|ios::binary);
   if(file.bad())
   {
    cout<<"file not found\n";
   }
   if(file.good())
   {
      foreColor(1);
       DrawRectangle(34,5,30,1,2);gotoxy(35,6);cout<<"input id to delete:";cin>>id;
      
      while(file.read((char*)&ma,sizeof(ma)))
      {
        if(id==ma.id)
        {
            found=true;
        }
        if(id!=ma.id)
        {
            Backup2.write((char*)&ma,sizeof(ma));
        }
      }
   }
   if(found==true)
   {
    foreColor(1);
    gotoxy(35,8);cout<<"DELETE SUCCESSFUL"<<endl;
   }
   if(found!=true)
   {
    foreColor(12);
    gotoxy(35,8);cout<<"ID INVALID!!"<<endl;
   }

   file.close();
   Backup2.close();
   remove("EquitarStudentdata.bin");
   rename("Backup2.bin","EquitarStudentdata.bin");
}
void updateEquitarStudent()
{
    int id;
    bool found=false;
    file.open("EquitarStudentdata.bin",ios::out|ios::in|ios::binary);
    if(file.bad())
    {
        cout<<"file not found\n";
    }
    if(file.good())
    {
            system("cls");
                frame();
                line();
                 upd();
                 foreColor(3);
				 gotoxy(31,6);cout<<"INPUT STUDENT ID TO UPDATE:";cin>>id;
        
        while(file.read((char*)&ma,sizeof(ma)))
        {
            if(id==ma.id)
            {
                int last=file.tellg();
                ma.editStudent();
               
                file.seekp(last-sizeof(ma));
                file.write((char*)&ma,sizeof(ma));
                found=true;
            }
        }
        if(found!=true)
        {
           
            foreColor(12);
            gotoxy(35,7);cout<<"ID INVALID\n";
        }

    }
    file.close();
    
}

//////////////////////////////////piano student///////////////////////////////////////////////
void addPId()
{
	bool found=false;
	int ph_num;
	DrawRectangle(34,5,40,1,2);gotoxy(35,6);cout<<"Enter Student phone number :";cin>>ph_num;
	file.open("PianoStudentdata.bin",ios::in|ios::out|ios::binary);
	if(file.bad())
	{
		foreColor(12);cout<<"file not found ";
	}
	if(file.good())
	{
		 while(file.read((char*)&ma,sizeof(ma)))
		 {
		 	if(ph_num==ma.phone)
		 	{
		 		int last=file.tellg();
		 		system("cls");
		 		ma.idStu();
		 		foreColor(0);
		 		system("cls");
		 		file.seekp(last - sizeof(ma));
		 		file.write((char*)&ma,sizeof(ma));
		 		found=true;
			}
		 }
	}
	if(found==true)
	{foreColor(1);
		gotoxy(35,8);cout<<"ID is added successful";
	}
	if(found==false)
	{
		foreColor(12);gotoxy(35,8);cout<<"number invalid";
	}
	file.close();
}
void insertPianoStudent()
{
    file.open("pianoStudentdata.bin",ios::out|ios::app|ios::binary);
    ma.inputStudent();
    file.write((char*)&ma,sizeof(ma));
    file.close();
}
void viewPianoStudent()
{
    
    file.open("pianoStudentdata.bin",ios::in|ios::binary);
    if(file.fail())
    {
        foreColor(0);
        gotoxy(35,6);cout<<"file not found \n";
    }
    if(file.good())
    {
       
       ma.studentHeader();
       while( file.read((char*)&ma,sizeof(ma)))
       {
         ma.OutputPianoStuent();
       }
       
    }
    file.close();
}
void searchPianoStudent()
{
  int id;
  bool found=false;
  file.open("pianoStudentdata.bin",ios::in|ios::binary);
  if(file.fail())
  {
     foreColor(1);
    gotoxy(35,6);cout<<"file not found \n";
  }
  if(file.good())
  {
    foreColor(1);
    DrawRectangle(34,5,30,1,2);gotoxy(35,6);cout<<"SEARCH ID:";cin>>id;
    system("cls");   
    ma.studentHeader();
    while(file.read((char*)&ma,sizeof(ma)))
    {
       if(id==ma.id)
       {
       	setcursor(0,0);
       	ma.OutputPianoStuent();
       found=true;
	   }
    }
    if(found==false )
    {
      foreColor(12);
    setcursor(0,0);
    gotoxy(20,2);cout<<"ID INVALID!!"<<endl;
    }
    
  }

file.close();
}
ofstream Backup3;
void DeletePianoStudent()
{
    bool found=false;
    int id;
   file.open("pianoStudentdata.bin",ios::out|ios::in|ios::binary);
   Backup3.open("Backup3.bin",ios::out|ios::app|ios::binary);
   if(file.bad())
   {
    gotoxy(35,6);cout<<"file not found\n";
   }
   if(file.good())
   {
     foreColor(1);
       DrawRectangle(34,5,30,1,2);gotoxy(35,6);cout<<"input id to delete:";cin>>id;
      
      while(file.read((char*)&ma,sizeof(ma)))
      {
        if(id==ma.id)
        {
            found=true;
        }
        if(id!=ma.id)
        {
            Backup3.write((char*)&ma,sizeof(ma));
        }
      }
   }
   if(found==true)
   {
   foreColor(1);
    gotoxy(35,8);cout<<"DELETE SUCCESSFUL"<<endl;
   }
   if(found!=true)
   {
    foreColor(1);
    gotoxy(35,8);cout<<"ID INVALID!!"<<endl;
   }

   file.close();
   Backup3.close();
   remove("pianoStudentdata.bin");
   rename("Backup3.bin","pianoStudentdata.bin");
}
void updatePianoStudent()
{
    int id;
    bool found=false;
    file.open("pianoStudentdata.bin",ios::in|ios::binary);
    if(file.bad())
    {
       gotoxy(35,6); cout<<"file not found\n";
    }
    if(file.good())
    {
       system("cls");
                frame();
                line();
                 upd();
                 foreColor(3);
				 gotoxy(31,6);cout<<"INPUT STUDENT ID TO UPDATE:";cin>>id;
        
        while(file.read((char*)&ma,sizeof(ma)))
        {
            if(id==ma.id)
            {
                int last=file.tellg();
                ma.editStudent();
                file.seekp(last-sizeof(ma));
                file.write((char*)&ma,sizeof(ma));
                found=true;
            }
        }
        if(found!=true)
        {
            foreColor(12);
    gotoxy(35,8);cout<<"ID INVALID!!"<<endl;
        }
    }
    file.close();
    
}
////////////////////////////////////////////user ///////////////////////////////////////////////////////////////////////////////////

   void enrollPiano()
{
    file.open("pianoStudentdata.bin",ios::out|ios::app|ios::binary);
    ma.rigister();
    file.write((char*)&ma,sizeof(ma));
    file.close();
}
void enrollQuitar()
{
    file.open("quitarStudentdata.bin",ios::out|ios::app|ios::binary);
    ma.rigister();
    file.write((char*)&ma,sizeof(ma));
    file.close();
}
void enrollEquitar()
{
    file.open("EquitarStudentdata.bin",ios::out|ios::app|ios::binary);
    ma.rigister();
    file.write((char*)&ma,sizeof(ma));
    file.close();
}
#endif