#include <iostream>
#include <string>
#include <iomanip>
#define count 5
using namespace std;

//Global
int b_num = 0;

struct Books
{
	string Book_ID;
	string Book_Title;
	string Author;
	string cost;
};

void Add_Book(Books b[]) {
	cout << "\n\n*** Enter The Detail of Books ***\n\n";
	if (b_num < count)
	{
		cout << "Enter the Book Id: ";
		getline(cin, b[b_num].Book_ID) ;
		
		cout << "Enter the Book Title: ";
		getline(cin, b[b_num].Book_Title);
		
		cout << "Enter the name of Author: ";
		getline(cin,  b[b_num].Author);
		
		cout << "Enter the Cost of Book: ";
		getline(cin, b[b_num].cost);

		b_num++;
		cout << endl << endl;
	}
	else
		cout << "\n No more space in system for another Book. \n" << endl;
}

void Display_Books(Books b[]) {
	cout << "\n *** Detail of All Books in Library *** " << endl;
	cout << b_num << " Record" << endl << endl;        // b_num variable is to display number of entered books in library

	for (int i = 0; i < b_num; i++)
	{
		cout << "Book id : " << b[i].Book_ID << endl;
		cout << "Book Title : " << b[i].Book_Title << endl;
		cout << "Author Name : " << b[i].Author << endl;
		cout << "Cost of Book: " << b[i].cost << endl;
		cout << endl;

	}
}

void Book_Author(Books b[])
{
	string au;
	int noRecord = 0;
	cout << "\n Enter the name of Author : ";
//	cin >> au;          // break , if author name has space 
	getline(cin, au) ;  // c++ getline function does not break if author name has space 
	cout << endl;
	for (int i = 0; i < count; i++)
	{

	//	if (au == b[i].Author)           //  alternate simple comparision - tested - working
	if (au.compare(b[i].Author) == 0)   // comparision using inbuilt string function ( return 0 on equality ) (return 1 on unequality ) 
		{
			cout << "Book id : " << b[i].Book_ID << endl;
			cout << "Book Title : " << b[i].Book_Title << endl;
			cout << "Author Name : " << b[i].Author << endl;
			cout << "Cost of Book : " << b[i].cost << endl;
			cout << endl;
			noRecord++;
		}

	}
	if (noRecord == 0) cout << "There is no such book in Library against this name of Author which you entered." << endl << endl;

}


void Count_Books() {
	cout << "\n Total number of Books in Library are : " << b_num << endl << endl;
}

int main() {
	int i = 0;
	char isTrue = 'y';
	struct Books b[count];

	while (isTrue == 'y' || isTrue == 'Y') {

		// Menu 

		cout << "...***Library Book Record System***..." << endl << endl;

		cout << " Press 1 To Enter a Book Record.  " << endl;
		cout << " Press 2 To Display all Record of Books Available in Library." << endl;
		cout << " Press 3 To Search Books by Author Name. " << endl;
		cout << " Press 4 To Count Total Books in Library." << endl;
		cout << " Press 5 To Exit from the System. \n" << endl;

		cout << "> Enter the choice :  ";
		char choice;
		cin >> choice;
		cin.ignore();

		// Switch 

		switch (choice)
		{
		case '1':
			Add_Book(b);
			break;

		case '2':
			
			Display_Books(b);
			break;

		case '3':
			
			Book_Author(b);
			break;

		case '4':
			Count_Books();
			break;

		case '5':
			return 0;

		default:
			cout << "invalid entry " << endl;
			break;
		} 

		cout << "> if you want to continue, Please press y or Y. : ";
		cin >> isTrue;
		cin.ignore();
		cout << endl << endl;

	} 

	return 0;
}
