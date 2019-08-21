#include <iostream>
using namespace std;
int main()
{
	int intSize;
	cout << "Print the size of the tree: \t";
	cin >> intSize;

	if (intSize <= 3 || intSize >= 15)
	{
		cout << "Height is out of bounds" << endl;
		exit(1);
	}

	for (int i = 0; i < intSize; i++)
	{
		
		for (int k = intSize; k > i + 1; k--)
			cout << " ";
		cout << "/";
		for (int j = 0; j <= 2 * i-1; j++)
			cout << " ";
		cout << "\\";
		cout << endl;
		
	}

	for (int l = 0; l <= 2 * intSize -1; l++)
		cout << "-";
	cout << endl;

	for (int m = 0; m < intSize / 2; m++)
	{
		for (int n = 0; n <= intSize -1; n++)
			cout << " ";
		cout << "||" << endl;;	// one extra ;
	}
		

}
