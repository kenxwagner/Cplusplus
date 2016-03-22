#include <iostream>
#include <string>


using namespace std;

int main()
{
	int i = 0, n = 20;


	do

	{

		printf("*");
		//cout << "line " << i << endl;

		i--;

	} while ( ~i < n);

	getchar();
	return 0;
}