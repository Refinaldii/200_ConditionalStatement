#include <iostream>
using namespace std;

int main()
{
	int bilanganA, bilanganB;
	string status;

	srand(time(0));

	bilanganA = rand() % 10;
	bilanganB = rand() % 10;

	if (bilanganA == bilanganB)
	{
		status = "sama besar";
	}
	else if (bilanganA < bilanganB)
	{
		status = "Bilangan A lebih kecil dari Bilangan B";
	}
	else
	{
		status = "bilangan A lebih besar dari Bilangan B";
	}
	cout << "bilangan A = " << bilanganA << endl;
	cout << "bilangan B = " << bilanganB << endl;
	cout << status << endl;

	return 0;
}