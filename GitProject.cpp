/* GitProject.cpp : Defines the entry point for the console application.

   
*/
   
//

#include <iostream>

using  namespace std;

//please add your github user to names
//another change
char * names[] = { "mmail002", "rmarh001", "qle002",
                    NULL };


int main()
{ 

	cout << "hello class" << endl;

	string s;

	
	for ( int x = 0 ; names[ x ] != NULL ; x++ ) {
		cout << names[x] << endl;
	}

}