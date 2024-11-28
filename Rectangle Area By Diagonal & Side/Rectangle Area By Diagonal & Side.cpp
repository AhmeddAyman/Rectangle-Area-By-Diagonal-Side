#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_3_Solution_16
// Rectangle Area By Diagonal & Side.

void ReadNumbers(float& A, float& D)
{
	cout << "Please Enter Rectangle width A " << endl;
	cin >> A;

	cout << "Please Enter Rectangle Diagonal D " << endl;
	cin >> D;
}

float RectangleAreaByDiagonalAndSide(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) * pow(A, 2));

	return Area;
}

void PrintResult(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	float A, D;
	ReadNumbers(A, D);
	PrintResult(RectangleAreaByDiagonalAndSide(A, D));
}

