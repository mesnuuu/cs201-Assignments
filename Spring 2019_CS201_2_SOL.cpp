// S19_CS201_2.cpp : Defines the entry point for the console application.
//


#include"stdio.h"
#include"iostream"
#include"conio.h"
using namespace std;
void getValue(int array[]);
void display(int array[]);
void reverse(int array[]);
void multipleOf3(int array[]);
void sum(int array[]);

int main()
{
	int arr[5];
	int ch1;
	char ch2;
    int arrayStatus=0;

	
	do
	{
		cout<<endl<<endl;
		cout<<"Press 1 To Enter Data In Array"<<endl;
		cout<<"Press 2 To Read The Array Elements"<<endl;
		cout<<"Press 3 To Show Array Elements In Reverse Order."<<endl;
		cout<<"Press 4 To Show Array Elements Which Are Multiples Of 3."<<endl;
		cout<<"Press 5 To Show Sum Of All The Elements."<<endl;
		cout<<"Press 6 To Exit."<<endl;
		cout<<"Enter Your Choice ";
		cin>>ch1;
		cout<<endl;
	switch(ch1)
	{
	case 1:
         getValue(arr);	
         arrayStatus++;
		 break;
	case 2:
         if(arrayStatus==0)
             cout<<endl<<"Array is empty, first enter data in array"<<endl;
         else
             display(arr);	
		break;
	case 3:
         if(arrayStatus==0)
              cout<<endl<<"Array is empty, first enter data in array"<<endl;
         else
		     reverse(arr);
		break;
	case 4:if(arrayStatus==0)
              cout<<endl<<"Array is empty, first enter data in array"<<endl;
         else
		     multipleOf3(arr);
		break;

	case 5:
         if(arrayStatus==0)
              cout<<endl<<"Array is empty, first enter data in array"<<endl;
         else
             sum(arr);	
		 break;

	case 6:
		exit(0);
		break;
	default:
		cout<<endl<<"You Entered Wrong Choice"<<endl;

	}
	cout<<endl<<"Do you want to coninue? Press Y/y for yes: ";
	cin>>ch2;
	}while(ch2=='y' || ch2=='Y');
	return 0;
}



void getValue(int array[]){
     	cout<<endl<<"Enter Data In Array"<<endl<<endl;
		for(int i=0; i<5; i++)
		{
			cout<<"Enter value: ";
			cin>>array[i];
		}
		cout<<endl<<"5 elements entered"<<endl;
     
     
     }
  void display(int array[])
     
     {
        int *ptr1= array;
        cout<<endl<<"Read The Array Elements"<<endl<<endl;
		for(int i=0; i<5; i++)
		{
			cout<<*ptr1<<endl;
			ptr1++;
		}		
  
  }
   void reverse(int array[]){
  
   
  cout<<endl<<"Show Array Elements In Reverse Order"<<endl<<endl;
		int *ptr1= array;
		ptr1 += 4;
		for(int i=4; i>=0; i--)
		{			
			cout<<*ptr1<<endl;
			ptr1--;
			
		}
    }
    
    void multipleOf3(int array[]){
         cout<<endl<<"Show Array Elements Which Are Multiples Of 3"<<endl<<endl;
		int *ptr1 = array;
		for(int i=0; i<=4; i++)
		{			
			if(*ptr1%3==0)
				cout<<*ptr1<<endl;
			ptr1++;
			
		}
         }
         
         void sum(int array[])
         {
         cout<<endl<<"Show Sum Of All The Elements"<<endl<<endl;
         int sum = 0;
		int *ptr1 = array;
		
		for(int i=0; i<=4; i++)
		{			
			sum = sum + *ptr1;
			ptr1++;
			
		}
		cout<<endl<<"Sum = "<<sum<<endl;
              }
              
