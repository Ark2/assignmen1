#include <iostream>
#include "student.h"
//#include "student.cpp"
using namespace std ;


int cmp(char obj1[] , char obj2[] ) ;

int main(void)
{
	student *abr[3] ;	
	for (int i = 0; i < 3; i++)
	{ 
		abr[i] = new student ;
		abr[i]->get_data() ;
	}
	sort(abr , 3) ;

	//cout << cmp("abeers" , "hunnybehan") << endl ;



}
