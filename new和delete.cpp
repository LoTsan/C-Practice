/*
#include <iostream>
using namespace std;

int main()
{
	//�����ڴ�ռ� 
	int* pAge = new int; 
	
	//ʹ����Ƭ�ڴ�ռ�ȥ�洢һ��ֵ
	cout << "Enter your dog's age: ";
	cin >> *pAge;
	
	//ʹ�ý�����������* ȥ����ֵ
	cout << "Age " << *pAge << " is stored at " << pAge <<endl;
	
	//�ͷ��ڴ�ռ�
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

