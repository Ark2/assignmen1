#include <string>
#include <iostream>
using namespace std ;
#include "student.h"

char convert(char a) ;
template <typename T>
int compare(T obj , T obj2);
int cmp(char obj1[] , char obj2[] ) ;
void Redirect(int r = 150) ;
int id_Adjustment(char obj[]) ;
long int chartoInt(char obj[]) ;

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
	system("CLS");
	cout << name << endl;
while (checker == -1)
{
	cout << "Name validation Fails Please enter the name again \n Name : " << endl ;
	cin.getline(name , 100 ) ;
	checker = name_adjuster(name);
	system("CLS");
	cout << name << endl;
}
cout <<"Id : " << endl ;
char temp[100] ;
cin.getline(temp, 100) ;
checker = id_Adjustment(temp);
	
while (checker == -1)
{
	cout << "ID validation Fails Please enter the ID again \n ID : " << endl ;
	cin.getline(temp , 100 ) ;
	checker = id_Adjustment(temp);
	system("CLS");
	cout << id << endl;
}
id = chartoInt(temp) ;
Redirect() ;


}
int id_Adjustment(char obj[]){
	bool check = false;
	bool check_S = false ;
	int j = 0 ;
	char abr[100] ;
		while ( (obj[j] < 48 || obj[j] > 57))
		{
			j++ ;
			check = true ;
		if (j == strlen(obj))
		{
			return -1 ;
		}	

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
			check = true ;
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
			i-- ;	
			}
			
		}
		////////////////////// invalid in mid of name
	for (int i = 0,j=0; obj[i] != 0 ; i++)
	{
		if(obj[i]<48 || obj[i]>57)
		{
			j=i;
			while (obj[j] != 0)
			{
				obj[j] = obj[j+1];
			 	j++;
			}
			i--;
		}
	}


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
		if (j == strlen(obj))
		{
			return -1 ;
		}	

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
			check = true ;
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
			i-- ;	
			}
			
		}
		////////////////////// invalid in mid of name
	for (int i = 0,j=0; obj[i] != 0 ; i++)
	{
		if(obj[i]<65&&obj[i]!=32 || obj[i]>122&&obj[i]!=32 || obj[i]>90&&obj[i]<97&&obj[i]!=32)
		{
			j=i;
			while (obj[j] != 0)
			{
				obj[j] = obj[j+1];
			 	j++;
			}
			i--;
		}
	}

	
		//Phase 1 cleared
	return 0 ;
}



void sort(student *obj[],const int size){
	
	int *ptr = new int[size] ;
	//ptr = 0 ;
	int *post = new (nothrow) int[size] ;
	if (post == 0)
	{
		cout << "ERROR" << endl ;
		
	}
	
	ptr[1] = 0 ;
	for (int i = 0; i < size; i++)
	{
		ptr[i] = i ;
		post[i] = i ;
	}
	system("cls") ;
 
	int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      //loop for sorting by name 
	  for(i = 1; (i < size) /*&& flag*/; i++)
     {
          flag = 0;
		  for (j=0; j < (size); j++)
         {
               if (cmp(obj[i]->name,obj[j]->name) == -1)      // ascending order simply changes to <
              { 
				  int temp ;
					temp = post[i];
					post[i] = post[j] ;
					post[j] = temp ;
					flag = 1;               // indicates that a swap occurred.
               }
          }
     }
	  //loop for dorting by id
	 for(i = 1; (i < size) ; i++)
     {
          flag = 0;
		  for (j=0; j < (size); j++)
         {
			 if (obj[i]->id > obj[j]->id)      // ascending order simply changes to <
              { 
					int temp ;
					temp = ptr[i];
					ptr[i] = ptr[j] ;
					ptr[j] = temp ;
					flag = 1;               // indicates that a swap occurred.
               }
          }
     }


	 //prints the 
	 cout << "ORDER"<<"----------------"<<"NAME"<< "------"<< "ID" <<endl ;
	  for (int i = 0; i < size ; i++)
	  {
		  cout << post[i] << "--------------------"  ;
		  cout << obj[post[i]]->name << "----" << obj[post[i]]->id << endl ;
	  }
	  system("pause") ;
	  system("cls") ;

	  cout << "ORDER"<<"----------------"<<"NAME"<< "------"<< "ID" <<endl ;
	  for (int i = 0; i < size ; i++)
	  {
		  cout << ptr[i] << "--------------------"  ;
		  cout << obj[ptr[i]]->name << "----" << obj[ptr[i]]->id << endl ;
	  }


}

int cmp(char obj1[] , char obj2[] ){
	for (int i = 0; obj1[i] != 0 || obj2[i] != 0 ; i++)
	{
		
		
		if (compare (convert(obj1[i]) , convert(obj2[i]) ) == -1)
		{
			return -1 ;
		}
		if (compare (convert(obj1[i]) , convert(obj2[i]) ) == 1)
		{
			return +1 ;
		}
	}

	return  0 ;
}


template <typename T>
int compare(T obj , T obj2){
	if (obj == obj2)
	{
		return 0 ;
	}
	if (obj > obj2)
	{
	return 1 ;
	}
	return -1 ;
}

char convert(char a){
	if(a > 90){return a-32;}
	return a;
}

long int chartoInt(char obj[]){
	    int i=1;
		long result = (int)obj[0] - '0';
		while(i<strlen(obj)){
			result = result * 10 + ((int)obj[i] - '0');
         ++i;
    }
    return result;
}


void Redirect(int r)
{
	cout << "Redirecting." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting.." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting..." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting...." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting....." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting......" << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting......." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting........" << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting........." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting.........." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting..........." << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting............" << endl ;

	_sleep(r) ;
	system ("cls") ;
	cout << "Redirecting............." << endl ;
	system ("cls") ;
}