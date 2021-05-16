#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double rates[5][3] = { {3.4, 56.7, 8.99}, {11.23, 4.67, 85.4}, {34.6, 2.4, 9.0}, {6.3, 8.0, 4.1}, {4.0, 2.0, 3.5} };
	double sum = 0.0;
	double avg;
	
	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			sum = sum + rates[row][col];
		}
	}
	avg = sum / 15;
	cout << fixed << setprecision(2);
	cout << "The sum of the array is: " << sum << endl;
	cout << "The average of the array is: " << avg << endl;

	return 0;
}