#include <iostream>
#include "student.h"
#include <Windows.h>
//#include "student.cpp"
using namespace std ;

void draw() ;
int cmp(char obj1[] , char obj2[] ) ;

int main(void)
{
	draw() ;
	student *abr[3] ;	
	for (int i = 0; i < 3; i++)
	{ 
		abr[i] = new student ;
		abr[i]->get_data() ;
	}
	sort(abr , 3) ;


}

void draw(){

system ( "color 09" );
	cout<<"<=============================================================================>\n";
	cout<<" | @   @ @@@ @   @    |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" | @   @ @   @   @    |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" | @ @ @ @@  @   @    |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" | @ @ @ @   @   @@@  |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" |  @ @  @@@ @@@      |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" |               @@@  |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" |  @@  @  @@ @@ @    |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" | @   @ @ @ @ @ @@   |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" | @   @ @ @   @ @    |~~~~~~~~~~~~~~|                                       |\n";
	cout<<" |  @@  @  @   @ @@@  |~~~~~~~~~~~~~~|                                       |\n";
	cout<<"<=============================================================================>\n";
	cout<<"<=============================================================================>\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~~~~~~~~~~~~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~~&&&&&&&~~~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~&&&&&&&&&~~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~&&  &&&  &&~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~&&&&&&&&&&&~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~&&& & &&&~~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~~&&&&&&&~~~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~~~&   &~~~~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~~~&   &~~~~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~~~&&&&&~~~~~|\n";
	cout<<" |                    |~~~~~~~~~~~~~~|                       |~~~~~~~~~~~~~~~|\n";
	cout<<"<===================================LOADING===================================>";
	Sleep(1000);
	system( "color 90" );
	Sleep(1000);
	system ( "color 09" );
	Sleep(1000);
	system( "color 90" );
	Sleep(1000);
	system ( "color 09" );
	system("CLS") ;





}
