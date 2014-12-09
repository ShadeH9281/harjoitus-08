//Made by Toni Pajukanta,Ryhmä IIO14S1
#include <iostream> 
using namespace std;
int main()
{
	cout << "laita kolme lukua, ohjelma laittaa ne suuruus jarjestykseen.";
	/*
	a)
	int luku1;
	int luku2;
	int luku3;*/
	// b)
	float luku1;
	float luku2;
	int luku3;
	cout << "\nLaita ensimmainen luku. ";
	cin >> luku1;
	cout << "\nLaita toinen luku. ";
	cin >> luku2;
	cout << "\nLaita kolmas luku. ";
	cin >> luku3;
	if (luku1 > luku2 && luku1 > luku3 && luku2 > luku3)
	{
		cout << "\n" << luku1 << " > " << luku2 << " > " << luku3;
	}
	else
		if (luku3 > luku2 && luku3 > luku1 && luku2 > luku1)
		{
		cout << "\n" << luku3 << " > " << luku2 << " > " << luku1;
		}
		else
			if (luku1 > luku2 && luku1 > luku3 && luku2 > luku3)
			{
		cout << "\n" << luku1 << " > " << luku2 << " > " << luku3;
			}
			else
				if (luku2 > luku1 && luku2 > luku3 && luku1 > luku3)
				{
		cout << "\n" << luku2 << " > " << luku1 << " > " << luku3;
				}
				else
					if (luku2 > luku3 && luku2 > luku1 && luku3 > luku1)
					{
		cout << "\n" << luku2 << " > " << luku3 << " > " << luku1;
					}
					else
						if (luku3 > luku1 && luku3 > luku2 && luku1 > luku2)
						{
		cout << "\n" << luku3 << " > " << luku1 << " > " << luku2;
						}
						else
							if (luku1 > luku3 && luku1 > luku2 && luku3 > luku2)
							{
		cout << "\n" << luku1 << " > " << luku3 << " > " << luku2;
							}
							else
								cout << "\nERROR\n";
								return 0;
}
