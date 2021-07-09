#include<iostream>
#include<ctime>
#include <vector>
using namespace std;

void draw(int numbers, int balls)
{
	vector<int> results;
	for (int i = 0; i < numbers; i++)
	{
		int random = rand() % balls + 1;
		if (results.size() != 0)
		{
			while(1)
			{
				bool notduplicate = 1;
				for (int k = 0; k < results.size(); k++)
				{
					if (random == results[k])
					{
						notduplicate = 0;
						break;
					}
				}
				if (notduplicate == 1)
				{
					results.push_back(random);
					break;
				}
			}
		}
		else results.push_back(random);

	}
	for (int i = 0; i < results.size(); i++)
	{
		cout << results[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand(time(NULL));
	while (1)
	{
		cout << "Generator liczb v.1.0" << endl;
		cout << "1 - Lotto" << endl;
		cout << "2 - Mini Lotto" << endl;
		cout << "X - Zakoncz" << endl;
		string input;
		int numbers;
		int balls;
		cin >> input;
		if (input == "X")
			break;
		else if (input == "1")
		{
			numbers = 6;
			balls = 49;
		}
		else if (input == "2")
		{
			numbers = 5;
			balls = 42;
		}
		else
		{
			cout << "Bledny identyfikator" << endl;
			continue;
		}
		cout << "Podaj liczbe losow" << endl;
		unsigned int tokens;
		cin >> tokens;
		for (int i = 0; i < tokens; i++)
		{
			draw(numbers, balls);
		}
	}
	return 0;
}