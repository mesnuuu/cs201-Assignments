#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	// Setting enrollment limit to 100
	int ENROLLMENTLIMIT=100;
	int programName;
	
	int first_year, second_year, third_year, fourth_year;
	float percentage_first_year, percentage_second_year, percentage_third_year, percentage_fourth_year;
	int total_student;
	
	cout<<"\n======================================================";
	cout<<"\nPlease select the  program option, in which you want to enter enrollments. "<<endl<<endl;
	cout<<"\nPlease enter option 1 for BCS program.";
	cout<<"\nPlease enter option 2 for BIT program.";
	cout<<"\nPlease enter option 3 for BBA program.";
	cout<<"\nPlease enter option 4 for BA program.";
	cout<<"\n======================================================";
	
	// For checking valid program option
	// Repeat untill, user have not input correct option,i.e. 1 or 2 or 3 or 4
	while(true) {
		cout<<"\nPlease enter program option:\t";
		cin>>programName;
		
		if (programName == 1 || programName == 2 || programName == 3 || programName == 4 ) {
			break;
		}
		else {
			cout<<"\nTHE PROGRAM NAME IS INVALID, PLEASE TRY AGAIN...\n\n";			
		}
	}
	
	// Getting inputs
	cout<<"\nPlease enter number of students in Year 1:\t";
	cin>>first_year;

	cout<<"\nPlease enter number of students in Year 2:\t";
	cin>>second_year;

	cout<<"\nPlease enter number of students in Year 3:\t";
	cin>>third_year;

	cout<<"\nPlease enter number of students in Year 4:\t";
	cin>>fourth_year;


	// Now displaying information
	if(programName == 1 || programName ==2) {
		cout<<"\n================= DEPARTMENT OF COMPUTER SCIENCE================= \n";
	}
	else if(programName == 3) {
		cout<<"\n=================  DEPRTAMENT OF BUINESS ADMINISTRATION ================= \n";
	}
	else if(programName == 4) {
		cout<<"\n================= DEPARTMENT OF FINE ARTS ================= \n";
	}

	cout<<"\nThe number of students in year 1 is :\t"<< first_year;
	cout<<"\nThe number of students in year 2 is :\t"<< second_year;
	cout<<"\nThe number of students in year 3 is :\t"<< third_year;
	cout<<"\nThe number of students in year 4 is :\t"<< fourth_year;

	// Computes total number of students
	total_student = first_year + second_year + third_year + fourth_year;
	percentage_first_year = ((float)first_year/(float)total_student) * 100;
	percentage_second_year = ((float)second_year/(float)total_student) * 100;
	percentage_third_year =((float)third_year/(float)total_student) * 100;
	percentage_fourth_year = ((float)fourth_year/(float)total_student) * 100;

	cout<<"\n\nThe percentage of students in year 1 is:\t"<< percentage_first_year <<"%";
	cout<<"\nThe percentage of students in year 2 is:\t"<<percentage_second_year<<"%";
	cout<<"\nThe percentage of students in year 3 is:\t"<<percentage_third_year<<"%";
	cout<<"\nThe percentage of students in year 4 is:\t"<<percentage_fourth_year<<"%";

	cout<<"\n\nThe total number of students in the programs is:\t"<<total_student;
	cout<<"\n";

	// Finally check the enrollment limit
	if(first_year> ENROLLMENTLIMIT) {
		cout<<"\nThe number of students enrolled in year 1 is over the limit. \n\n";
	}

	if(second_year> ENROLLMENTLIMIT) {
		cout<<"\nThe number of students enrolled in year 2 is over the limit. \n\n";
	}

	if(third_year> ENROLLMENTLIMIT) {
		cout<<"\nThe number of students enrolled in year 3 is over the limit. \n\n";
	}

	if(fourth_year>ENROLLMENTLIMIT) {
		cout<<"\nThe number of students enrolled in year 4 is over the limit. \n\n";
	}
	system("pause");
	return 0;
}
