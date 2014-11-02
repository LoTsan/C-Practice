#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		string Name;
		int Age;
		
	public:
		Human()
		{
			cout << "A New Human Class has been Created" << endl;
		}
		
		Human(string HumansName)
		{
			cout << "A New Human Class Named " + HumansName +" has been Created" << endl;
			Name = HumansName;
		}
				
		string Sex;
		
		void setSex (string HumansSex)
		{
			Sex = HumansSex;
		}
		
		void setName (string HumansName)
		{
			Name = HumansName;
		}
		
		void setAge (int HumansAge)
		{
			Age = HumansAge;
		}
		
		int getAge()
		{
			return Age;
		}
		
		void introduceSelf()
		{
			cout << "I am "+ Name << " and am " << Age << " years old" << endl;
 		}
};

int main()
{
	Human FirstMan ("Adam");
	FirstMan.setAge(30);
	
	Human Eve;
	Eve.setName("Eve");
	Eve.setAge(20);
	Eve.setSex("Woman"); 
	
	FirstMan.introduceSelf();
	Eve.introduceSelf();
	
	cout << Eve.getAge() << endl;
	
	cout << Eve.Sex;
	
	return 0;
}
