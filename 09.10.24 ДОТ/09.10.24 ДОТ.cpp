#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[3][3] = { {-1,2,8}, {-6,5,9}, {-11,4,6} };

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	int _Min = arr[0][0];
	int _Max = arr[0][0];
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (_Min > arr[i][j])
			{
				_Min = arr[i][j];
			}
			else if (_Max < arr[i][j])
			{
				_Max = arr[i][j];
			}
		}
	}
	cout << "Max = " << _Max << endl;
	cout << "Min = " << _Min << endl;


}
