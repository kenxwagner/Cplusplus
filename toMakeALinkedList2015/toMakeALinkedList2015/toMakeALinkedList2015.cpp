
//Ken Wagner makes a linked list to play with

# include <iostream>
# include <fstream>
using namespace std;

struct ListNode
{
	double value; //declare an initial value
	ListNode *next;

	// Here comes the Constructor

	ListNode(double value1, ListNode *next1 = NULL)
	{
		value = value1;
		next = next1;
	}

};

int main()
{
	//This will open a file that will be looked at for data.
	ListNode *numberList = NULL; // self explanatory.

	ifstream numberFile("numberFile.dat");
	if (!numberFile)
	{
		cout << "Error in opening your file.";
	}

	//Have the file read into a linked list.
	double number;   //variable declared to help read the file.
	cout << "The contenst of your file are:" << endl;
	while (numberFile >> number)
	{
		cout << number << "  ";
		//time to creat a node to hold that number.
		numberList = new ListNode(number, numberList);
	}

	//List traversal, or "move through the list".
	cout << endl << "The contents of the list are: " << endl;
	ListNode *ptr = numberList;
	while (ptr != NULL)
	{
		cout << ptr->value << "  "; //See what's in the node
		ptr == ptr->next;           // Onto the next node   
	}


	return 0;
}
