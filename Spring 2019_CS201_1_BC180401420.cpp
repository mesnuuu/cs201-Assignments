#include <iostream>
#include <conio.h>

using namespace std;

// Global Variable
int check_menu;
int year_1, year_2, year_3, year_4;
float total= 0;
float percentage = 0;
// Function Menu
void show_menu(){
cout << "======================================================"<< endl;
cout << "Please select the program option, in which you want to enter enrollments." << endl;
cout << "Please enter option 1 for BCS program." << endl ;
cout << "Please enter option 2 for BIT program." << endl ;
cout << "Please enter option 3 for BBA program." << endl ;
cout << "Please enter option 4 for BA program." << endl ;
cout << "======================================================"<< endl;
cout << "Please Enter Program option:      ";
cin >> check_menu ;
}
// Function Enrollment
void enter_enrollment_entries(){
cout << "> Please enter number of students in Year 1:    ";
cin >>  year_1 ;
cout << "\n> Please enter number of students in Year 2:    ";
cin >>  year_2 ;
cout << "\n> Please enter number of students in Year 3:    ";
cin >>  year_3 ;
cout << "\n> Please enter number of students in Year 4:    ";
cin >>  year_4 ;
cout << endl;
}
// Function show_enrollment
void show_enrollment_entries(){
cout << "The number of students in Year 1:    " << year_1 << endl ;
cout << "The number of students in Year 2:    " << year_2 << endl ;
cout << "The number of students in Year 3:    " << year_3 << endl ;
cout << "The number of students in Year 4:    " << year_4 << endl << endl ;
}
 // Function Enrollment percentage each year
void percentage_calculation(){
total = year_1 + year_2 + year_3 + year_4 ;
percentage = year_1/total * 100 ;
cout << "The percentage of students in year 1 is:    " << percentage <<"%" << endl ;
percentage = year_2/total * 100 ;
cout << "The percentage of students in year 2 is:    " << percentage <<"%" << endl ;
percentage = year_3/total * 100 ;
cout << "The percentage of students in year 3 is:    " << percentage <<"%" << endl ;
percentage = year_4/total * 100 ;
cout << "The percentage of students in year 4 is:    " << percentage <<"%" << endl << endl ;
// The total number of students in the program.
cout << "The Total Number of Students in the program is:     " << total << endl <<endl;
}
// Function Over Limit
void std_over_limit() {
if (year_1 > 100 ) cout << "The number of Students enrolled in year 1 is over the limit." << endl;
if (year_2 > 100 ) cout << "The number of Students enrolled in year 2 is over the limit." << endl;
if (year_3 > 100 ) cout << "The number of Students enrolled in year 3 is over the limit." << endl;
if (year_4 > 100 ) cout << "The number of Students enrolled in year 4 is over the limit." << endl;
}
int main(){
int year_1, year_2, year_3, year_4;

while(true){         // while loop start 
show_menu();

if (check_menu >= 1 && check_menu <= 4) {
break;
}
else {
cout << "\n THE PROGRAM OPTION IS INVALID PLEASE TRY AGAIN."<< endl;
cout << "\n Press any key to continue..."<<endl;

_getch();
system("cls");
}
}// while loop end
switch(check_menu) {
    case 1:
    enter_enrollment_entries();
    cout << "========== DEPARTMENT OF COMPUTERT SCIENCE ========== "<< endl << endl;
    show_enrollment_entries();
    percentage_calculation();
    std_over_limit();
    break;

    case 2:
    enter_enrollment_entries();
    cout << "========== DEPARTMENT OF COMPUTERT SCIENCE ========== "<< endl << endl;
    show_enrollment_entries();
    percentage_calculation();
    std_over_limit();
    break;

    case 3 :
    enter_enrollment_entries();
    cout << "========== DEPARTMENT OF BUSINESS ADMINSTRATION ========== "<< endl << endl;
    show_enrollment_entries();
    percentage_calculation();
    std_over_limit();
    break;

    case 4 :
    enter_enrollment_entries();
    cout << "========== DEPARTMENT OF FINE ARTS ========== "<< endl << endl;
    show_enrollment_entries();
    percentage_calculation();
    std_over_limit();
    break;
}
    return 0;
}
