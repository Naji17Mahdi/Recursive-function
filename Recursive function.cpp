#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int fact ( int );

main()
{
	int a = 4 ;
	
	cout<<fact ( a );
}

int fact ( int n )
{
	if ( n == 0 || n == 1 )
	{
		return 1;
	}
	else
	{
		return n * fact ( n - 1 );
	}
}


