/*
#include <iostream>
using namespace std;

int main()
{
	//请求内存空间 
	int* pAge = new int; 
	
	//使用这片内存空间去存储一个值
	cout << "Enter your dog's age: ";
	cin >> *pAge;
	
	//使用解除引用运算符* 去访问值
	cout << "Age " << *pAge << " is stored at " << pAge <<endl;
	
	//释放内存空间
	delete pAge; 
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	char a[50][50]=
	{"######",
	 "#O #  ",
	 "# ## #",
	 "#  # #",
	 "##   #",
	 "######"	
	};
	int i,x,y,p,q;
	char ch;
	
	x=1; y=1; p=1; q=5;
	for (i=0;i<=5;i++) puts(a[i]);

	ch=getchar();
	if(ch='s')
	{
		if(a[x+1][y]!='#')
		{
			a[x][y]=' ';
			x++;
			a[x][y]='O';
		}
	}
	
	system("cls");
	for (i=0;i<=5;i++) puts(a[i]);
	
	Sleep(5000);
	return 0;		
}

