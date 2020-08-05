#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class binary
{
	string s;
	public:
		void set(void);
		void check(void);
		void rev(void);
		void display(void);
};

void binary :: set(void)
{
	cout <<"enter a binary number "<<endl;
	cin >>s;
}
void binary :: check(void)
{
	for(int i= 0 ; i< s.length(); i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout << "its not a binary number"<<endl;
			exit(0);
		}
	}
}
void binary :: rev(void)
{
	check();
	for(int i= 0; i<s.length(); i++)
	{
		if(s.at(i)=='0')
		{
			s.at(i)='1';
		}
		else
		{
			s.at(i)='0';
		}
	}
}
void binary :: display(void)
{
	for(int i=0 ; i<s.length(); i++)
	{
		cout <<s.at(i);
	}cout<<endl;
}

int main()
{
	binary o;
	o.set();
	o.rev();
	o.display();
	return 0;
}
