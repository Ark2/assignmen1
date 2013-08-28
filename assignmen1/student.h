#pragma once


void name_adjuster() ;

class student
{
private:
	long int id ;
	char *name ;
	class position

	{
	public:
		int post ;
	};

public:
	student();
	~student();
	void sort_id();
	void sort_name();
	void get_data() ;
	friend int name_adjuster(char obj[]) ;
	friend void sort (student *[] , int ) ;
};



