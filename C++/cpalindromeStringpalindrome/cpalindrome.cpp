#include <iostream>
#include <string>

using namespace std;

void reverse(char*);

int main(int argc, char* argv[])
{
	char charCheck[100] = "";
	char charInput[100] = "";
	
	for(int i = 1; i < argc; i++)
		strcat_s(charInput, 100 , argv[i]);

	cout << charInput <<endl;

	for(int i = argc -1; i >= 1; i--)
	{
		strcat_s(charCheck, 100, argv[i]);

	}

	strcpy_s(charCheck, 100, charInput);
	

	cout << endl << charInput << endl;

	if (strcmp(charCheck, charInput) == 0)
	{
		cout << "palindrome" << endl;
	}
	else
	{
		cout << "not palindrome" << endl;
	}

	return 0;
}
