#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string sub[6] = {"Student Name",  "ENGLISH",  "MATH",  "SCIENCE",  "ICT",  "AVERAGE"};
	string studName[7] = {"Claire", "Cheska", "Shaira", "Adrian", "Aden", "Mark", "Rafael"};
	
	int gr[7][4] =
	{ {90, 85, 95, 91},  {95, 80, 85, 89}, {91, 92, 97, 89}, {85, 89, 87, 92}, 
                                                {87, 92, 86, 93}, {80, 78, 77, 75}, {81, 85, 75, 87} };
	int sum = 0;
	float ave = 0;
	
	for (int i=0; i<6; i++)
	{
		cout<<sub[i] << "\t";
	}
	cout <<endl;

	for (int x=0; x<7; x++)
	{
		sum=0;
		for (int y=0; y<6; y++)
		{
			if (y==0)
			{
				cout<<studName[x] <<"\t\t";
			}
			else if (y==5)
			{
				cout << fixed <<setprecision(2)<<sum/4.0;
				ave+=sum / 4.0;
			}
			else 
			{
				cout<<gr[y][x-1]<<"\t";
				sum += gr [y][x-1];
			}
		}
		cout<<endl;
	}
	ave /= 7.0;
	cout<< "\nTotal No. of Students: 7            Total Class Average: " << ave;
	
return 0;
	
}