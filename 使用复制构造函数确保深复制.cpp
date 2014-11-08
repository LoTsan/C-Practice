#include <iostream>
#include <string.h> 
using namespace std;

class myString
{
	private:
		char* Buffer;
		
	public:
		//Constructor
		myString (const char* InitialInput)
		{
			cout << "Constructor: creating new myString class" << endl; 
			if (InitialInput != NULL)
			{
				Buffer = new char [strlen(InitialInput) +1];
				strcpy(Buffer, InitialInput);
				
				//Display memory address pointed by local buffer
				cout << "Buffer points to: 0x" <<hex;
				cout << (unsigned int*)Buffer <<endl;
			}
			else Buffer = NULL;
		}
		
		//Copy constructor
		myString(const myString& CopySource)
		{
			cout << "Copy constructor: copying from myString" <<endl;
			
			if(CopySource.Buffer != NULL)
			{
				//ensure deep copy by first allocating own buffer
				Buffer = new char [strlen(CopySource.Buffer)+1];
				
				//Copy from the source into local buffer
				strcpy(Buffer, CopySource.Buffer);
				
				//Display memory address pointed by Local buffer
				cout << "Buffer points to: 0x" << hex;
				cout << (unsigned int*)Buffer << endl;
			}
			else Buffer = NULL;
		}
		
		//Destructor
		~myString()
		{
			cout << "Invoking destructor, clearing up" << endl;
			if (Buffer != NULL) delete[] Buffer;
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

void useMyString(myString Input)
{
	cout << "String buffer in Mystring is " << Input.getLength();
	cout << " Characters long" << endl;
	
	cout << "Buffer contains: " << Input.getString() <<endl;
}

int main()
{
	myString SayHello("Hello from String Class");
	
	//Pass SayHello by value (will be copied)/*as a parameter to the function*/
	useMyString(SayHello);
	return 0;
}
