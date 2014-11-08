#include <iostream>
using namespace std;

class Fish
{
	protected:
		bool FreshWaterFish;
		
	public:
		void Swim()
		{
			if (FreshWaterFish) cout << "Swims in lake" << endl;
			else cout << "Swims in sea" << endl;
		}
};

class Tuna: public Fish
{
	public:
		Tuna()
		{
			FreshWaterFish = false;
		}
};

class Carp: public Fish
{
	public:
		Carp()
		{
			FreshWaterFish = true;
		}
};

int main()
{
	Tuna myLaunch;
	Carp myDinner;
	cout << "getting my food to swim" << endl;
	
	cout << "Tuna " ;
	myLaunch.Swim();
	cout << "Carp " ;
	 myDinner.Swim();

	return 0;
}
