#include <iostream>
using namespace std;

class Fish
{
	protected:
		int FreshWater_Fish;
		
	public:
		Fish(bool isFreshWate): FreshWater_Fish (isFreshWate){
			cout << "Setting isFreshWater attribute" <<endl; 
			}
		
		
		void Swim()
		{
			cout <<Fish::FreshWater_Fish<<endl;
			if (FreshWater_Fish) cout << "Swims in lake" <<endl;
			else cout << "Swims in sea" << endl;
		}
};

class Tuna: public Fish{
	public:
		Tuna():Fish(false){
		} 
};

class Carp: public Fish{
	public:
		Carp():Fish(true){
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

	// 取消此注释可以看到被保护的成员变量不可从类之外访问
	//myLunch.FreshWaterFish = false;	
	return 0;	
}
