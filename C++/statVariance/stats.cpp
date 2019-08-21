#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int* histogram(int, int*);
double deviation(int, int*);
double mean(int, int*);

int main()
{
	//declare and initialize variables
	int intSize = 0;
	int* intInput = new int[100];
	const int intMax = 100;
	double dblStanDev = 0.0;

	//create input loop to 100
	while (intSize < intMax)
	{
		cout << "please enter a score: " << endl;
		int intEntered;
		cin >> intEntered;
		intInput[intSize];
		if (intEntered < 0) //if entered is less than zero break out the loop
			break;
		if (intSize == 100) //if size reaches 99 break out the loop 
			break;
		intInput[intSize] = intEntered;
		++intSize;
	}

	// make the histogram
	int* intHistogram = histogram(intSize, intInput);
	for (int i = 9; i >= 0; i--)
		cout << left << setfill('*') << setw(intHistogram[i] + 2) <<to_string(i) + "|"  << endl;
		
	//calculate standard deviation
	cout << endl << "Calculating standard deviation: " << endl;
	cout << "Standard deviation: " << deviation(intSize, intInput) << endl;
	system("pause");
	return 0;
}

int* histogram(int size, int* Input)
{
	static int intHistogram[10];
	//sort the Numbers
	for (int i = 0; i < size; i++)
	{
		if (Input[i] >= 90)
			intHistogram[9] += 1;
		else if (Input[i] >= 80 && Input[i] < 90)
		{
			intHistogram[8] += 1;
		}
		else if (Input[i] >= 70 && Input[i] < 80)
			intHistogram[7] += 1;
		else if (Input[i] >= 60 && Input[i] < 70)
			intHistogram[6] += 1;
		else if (Input[i] >= 50 && Input[i] < 60)
			intHistogram[5] += 1;
		else if (Input[i] >= 40 && Input[i] < 50)
			intHistogram[4] += 1;
		else if (Input[i] >= 30 && Input[i] < 40)
			intHistogram[3] += 1;
		else if (Input[i] >= 20 && Input[i] < 30)
			intHistogram[2] += 1;
		else if (Input[i] >= 10 && Input[i] < 20)
			intHistogram[1] += 1;
		else
			intHistogram[0] += 1;
	}
	return intHistogram;
}

double deviation(int size, int* Input)
{
	//declare variables
	int intSum = 0;
	double dblOutput = 0.0;
	double* dblVariance = new double[size];
	double dblAverage = mean(size, Input);

	//find the standard variance
	for (int i = 0; i < size; i++)
	{
		//get the sum
		intSum += Input[i];
		// find the variance
		dblVariance[i] = pow(Input[i] - dblAverage, 2);
		dblOutput += dblVariance[i];
	}
	dblOutput = sqrt(dblOutput /= (size));
	
	return dblOutput;
}

double mean(int size, int* Input)
{
	double dblAverage = 0;
	//calculate the average
	for (int i = 0; i < size; i++)
		dblAverage += Input[i];

	return dblAverage / size;
}