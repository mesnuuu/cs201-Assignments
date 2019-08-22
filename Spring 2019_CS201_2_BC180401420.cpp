#include <iostream>
using namespace std;

// Global variables 


void menuList(){
cout << "\n\n";
cout << "***************************************************" << endl;
cout << "Press 1 To Enter Values In Array." << endl;
cout << "Press 2 To Read Array Elements." << endl;
cout << "Press 3 To Show Array Elements In Reverse Order. "<< endl; 
cout << "Press 4 To Show Array Elements Which Are Multiples Of 3." << endl;
cout << "Press 5 To Show Sum Of All The Elements. "<< endl;
cout << "Press 6 To Exit. "<< endl;
cout << "***************************************************" << endl;
}

void getValues(int a[]){
    cout << "\n\n Enter Data in Array.\n"<<endl;

    for (int i=0; i<5; i++){
    cout << "> Enter Value: " ;
    cin >> a[i] ;
    }
    cout << "\n5 elements Entered \n\n";
}

void displayArray(int *a){
   cout << "\nRead the Array elements  \n" << endl;
   for (int i=0; i<5; i++){
   cout << "a[" << i << "] : " << a[i] << endl ;
    }
}
void reverseArray(int *a){
   cout <<"\n Show Array Elements in Reverse Order \n" << endl;
   for (int i=4; i>=0; i--){
   cout << "a[" << i << "] : "  << a[i] << endl ;
   }
} 
void multipleOf3(int *a){
    cout  << "\n Array elements Which are Multiple of 3 \n\n";
    for (int i=0; i<5; i++){
    a[i] ;
     if (a[i]%3 == 0){
        cout << a[i] << endl ;
     }
    }
}
void sumOfElements(int *a){
   cout << " \nShow Sum of All the Elements \n" << endl ;
   int sum = 0;
   for  (int i=0; i<5; i++){
      sum = sum + a[i];
   }
   cout << "Sum =  " << sum << endl ;
}


int main() {

int *a = new int [5] ;
char menu = ' ' ;
char continue_me = '0';

while (true) {

menuList();
cout << "\n > Enter your choice: " ;
cin >> menu;


if (menu != '1'){
   cout << "\n\n  Array is empty , first Enter data in Array.\n"<<endl;
   cout << "> Do you want to continue ? press Y/y for yes:  ";
   cin >> continue_me ;
   if (continue_me = 'Y' || continue_me ==  'y'){
      continue ;
}

}
if (menu == '1'){
   break;
}

} // while end

while (true)
{
   switch (menu) {  

case '1' :
getValues(a);
break ;

case '2' :
displayArray(a);
break ;

case '3' :
reverseArray(a);
break ;

case '4' :
multipleOf3(a);
break ;

case '5' :
sumOfElements(a);
break ;

case '6' :
return 0 ;
} // Switch End

    ///**************************************************************
       
	    cout << "\n***************************************************" << endl;
        cout << "\n> Do you want to continue ? press Y/y for yes:  ";
        cin >> continue_me ;
        if (continue_me = 'Y' || continue_me == 'y')
        {
            menuList();
            cout << "\n > Enter your choice: " ;
            cin >> menu;
            continue;
        }
} // while end
return 0;
}

