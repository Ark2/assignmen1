#include <string>
#include <iostream>
using namespace std ;
#include "student.h"



student::student(void)
{
}


student::~student(void)
{
}



void student::get_data(){
cout <<"Name : " << endl ;
 name = new char [100] ;
 cin.getline(name , 100 ) ;
//name validation
int checker ;


checker = name_adjuster(name);

while (checker == -1)
{
	cout << "Name validation Fails Please enter the name again \n Name : " << endl ;
	cin.getline(name , 100 ) ;
	checker = name_adjuster(name);
}
system("CLS");
cout << name << endl;




}

int name_adjuster(char obj[]){
	char a ;
	int elements ;
	elements = sizeof(obj) / sizeof(a) ;
	//space removal//
	bool check = false;
	int j = 0 ;
	for (int i = 0; i < elements; i++)
	{
		//loop to check violating characters before any name 
		j = i ;
		while ( (obj[j] < 65 || obj[j] > 90) &&  (obj[j] < 97 || obj[j] > 122) )
		{
			j++ ;
			check = true ;
			
		}

		if (check)
		{
			int ins = i ;
			check = false ; 
			while(obj[j] != '\0'){
				obj[ins] = obj[j];
				j++ ;
				ins++ ;
			}
			obj[j] = '\0' ;
		}
		/*if (obj[i] == ' ')
		{
			
			while (obj[j] <)
			{

			}
			while (j < elements)
			{
				obj[j] = obj[j+1] ;
			}
		}*/
	}



	return 0 ;
}