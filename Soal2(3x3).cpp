#include <iostream>
using namespace std;

int data1[3][3];
int data2[3][3];
int data3[3][3];

void main() {
	cout << "Masukkan matrik data 1 :\n";
	cout << "------------------------\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {

			cout << "Nilai ke-" << i << "," << j << " : ";
			cin >> data1[i][j];
		}
		cout << "\n";
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << data1[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\nMasukkan matrik data 2 :\n";
	cout << "------------------------\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {

			cout << "Nilai ke-" << i << "," << j << " : ";
			cin >> data2[i][j];
		}
		cout << "\n";
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << data2[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\nHasil dari perkalian matriks yaitu : \n";
	cout << "======================================\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			data3[i][j] = data1[i][0] * data2[0][j] + data1[i][1] * data2[1][j] + data1[i][2] * data2[2][j];
			cout << data3[i][j] << " ";
		}
		cout << "\n";
	}
}