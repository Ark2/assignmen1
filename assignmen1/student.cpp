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
//system("CLS");
cout << name << endl;




}

int name_adjuster(char obj[]){
	//space removal//
	bool check = false;
	bool check_S = false ;
	int j = 0 ;
	char abr[100] ;
		//Phase 1---------------loop to check violating characters before any name 
		while ( (obj[j] < 65 || obj[j] > 90) &&  (obj[j] < 97 || obj[j] > 122) )
		{
			j++ ;
			check = true ;
			
		}

		if (check)
		{
			int ins = 0;
			while (obj[j] != 0)
			{

				abr[ins] = obj[j] ;
				j++ ;
				ins ++ ;
			}
			abr[ins] = 0 ;
			strcpy(obj , abr) ;
			check = false ;
}
		for (int i = 0; obj[i] != 0; i++)
		{
			if (obj[i]== ' ' && obj[i+1] == ' ')
			{
					j = i ;
				while (obj[j] != 0)
				{

					obj[j] = obj[j+1] ;
					j++ ;
				}	
				
			}
		}

		//Phase 1 cleared
	return 0 ;
}

//void exception(char obj[]){
//
//	bool check = false;
//	int j = 0 ;
//	char abr[100] ;
//		//Phase 1---------------loop to check violating characters before any name 
//		while ( (obj[j] < 65 || obj[j] > 90) &&  (obj[j] < 97 || obj[j] > 122) )
//		{
//			j++ ;
//			check = true ;
//			
//		}
//		if (check)
//		{
//			int ins = 0;
//			while (obj[j] != 0)
//			{
//
//				abr[ins] = obj[j] ;
//				j++ ;
//				ins ++ ;
//			}
//			abr[ins] = 0 ;
//			strcpy(obj , abr) ;
//			check = false ;
//}
//
//}



