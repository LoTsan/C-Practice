#include <iostream>
using namespace std;

class Fish
{
	protected:
		bool FreshWaterFish;
		
	public:
		void Swim()
		{
			if (FreshWaterFish) cout << "Swims in lake" <<endl;
			else cout << "Swims in sea" << endl;
		}
};

class Tuna: public Fish{
	public:
		Tuna(){
				FreshWaterFish = false;
		}
};

class Carp: public Fish{
	public:
		Carp(){
			FreshWaterFish = false;
		}
};

int main(){
	Carp myLunch;
	Tuna myDinner;
	
	cout << "Getting my food to swim" << endl;
	
	cout << "Lunch: ";
	myLunch.Swim();
	
	cout << "Dinner: ";
	myDinner.Swim();

	// ȡ����ע�Ϳ��Կ����������ĳ�Ա�������ɴ���֮�����
	//myLunch.FreshWaterFish = false;	
	return 0;	
}
