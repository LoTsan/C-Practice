#include <iostream>
#include <string.h>
using namespace std;
/*
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
		
		~Human()
		{
				
		};
				
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
	Eve.Sex = "Man";
	cout << Eve.Sex;
	
	return 0;
}
*/
class MyString
{
	private:
		char* Buffer;
		
	public:
		MyString(const char* InitialInput)
		{
			if (InitialInput != NULL)
			{
				Buffer = new char [ strlen (InitialInput) +1];
				strcpy(Buffer, InitialInput);
			}
			else
				Buffer = NULL;
		}
		
		~MyString()
		{
			cout << "Invoking destructor, clearing up"	<< endl;
			if (Buffer != NULL) delete [] Buffer;
		}
		
		int getLength()
		{
			return strlen(Buffer);
		}
		
		const char* getString()
		{
			return Buffer;
			
		}
};

int main()
{
	MyString SayHello("Hello from String Class");
	cout << "String Buffer in Mystring is " << SayHello.getLength();
	cout << "characters long" << endl;
	
	cout << "Buffer contains: ";
	cout << "Buffer contains: "<< SayHello.getString() << endl;
}
