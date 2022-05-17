#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void swap(int &a, int &b)
{

		int t = a;
			a = b;
			b = t;
}


int main()
{
	int age[6] = { 27, 11, 3, 5, 10, 9 };

	int s, p;


		for (s = 0; s < 6; s++)
		{
			for (p = 0; p < (6 - 1); p++)
			{
				if (age[p] > age[p + 1])
				{ //===============swap==============
					swap(age[p], age[p + 1]);
				}
			}
		}

	cout << "sorted array" << endl;
	for (s = 0; s < 6; s++)
		cout << age[s] << "      " << endl;

	system("pause");
	

} 