#include <iostream>
#include <string.h>
using namespace std;

void Add_Book();
void Display_Books();
void Book_Author();
void Count_Books();

struct Library
{
	int  book_id;
	char book_title[50];
	char author[30];
	int  cost;
}b[100];

int count = 0;

int main()
{
	int  choice1;
	char choice2;
	do
	{
	        cout<<"\n...***Library Book Record System***...\n";
		cout<<"\n Press 1 To Enter a Book Record.\n";
		cout<<"\n Press 2 To Display all Records of Books Available in Library.\n";
		cout<<"\n Press 3 To Search Books by Author Name.\n";
		cout<<"\n Press 4 To Count Total Books in Library.\n";
		cout<<"\n Press 5 To Exit from the System.\n";
		cout<<"\n Enter the choice \n";
		cin>>choice1;
		switch(choice1)
		{
			case 1:
				Add_Book();
				break;
			case 2:
				Display_Books();
				break;
			case 3:
				Book_Author();
				break;
			case 4:
				Count_Books();
				break;
			case 5:
				exit(0);
			default:
			cout<<"\nYou entered the wrong choice.\n";	
			}
			cout<<"\nAre you want to continue, Please press y or Y.\n";
			cin>>choice2;
		} while(choice2 == 'y' || choice2 == 'Y');
return 0;
}



void Add_Book()
{
	if(count==5)
	{
		cout<<"\n***No more space in System***\n";
		return;
	}
	cout<<"\n***Enter the Details of Book***\n";
	cout<<"\n Enter the Book Id:";
	cin>>b[count].book_id;
	
	cout<<"\n Enter the Book Title:";
	cin>>b[count].book_title;
	
	cout<<"\n Enter the name of Author:";
	cin>>b[count].author;
	
	cout<<"\n Enter the Cost of Book:";
	cin>>b[count].cost;
	count++;
}

void Display_Books()
{
	int i;
	cout<<"\n ***Detail of all books in Library***\n"<<count<<" Record\n";
	for(i=0;i<count;i++)
	{
		cout<<"\nBook Id:"<<b[i].book_id;
		cout<<"\nBook Title:"<<b[i].book_title;
		cout<<"\nAuthor Name:"<<b[i].author;
		cout<<"\nCost of Book:"<<b[i].cost;
		cout<<"\n";
	}
}

void Book_Author()
{
	int i,cnt=0;
	char name[20];
	cout<<"\n Enter the name of Author:";
	cin>>name;
	for(i=0;i<count;i++)
	{
		if(strcmp(name,b[i].author)==0)
		{
		    cnt++;
		    cout<<"\nBook Id:"<<b[i].book_id;
		    cout<<"\nBook Title:"<<b[i].book_title;
		    cout<<"\nAuthor Name:"<<b[i].author;
		    cout<<"\nCost of Book:"<<b[i].cost;
		    cout<<"\n";
		}
	}
	if(cnt==0)
	cout<<"\n There is no such book in library against this name of Author which you enetered. \n";
}

void Count_Books()
{
	cout<<"\n Total number of books in library are:"<<count<<"\n";
}
