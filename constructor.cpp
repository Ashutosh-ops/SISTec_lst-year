#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
		A(int a,int b)
		{
			int x=a,y=b;
			cout<<"you are in paramatrised constructor"<<endl;
			cout<<"x ="<<x<<"\ny= "<<y<<"\n";
		}
};
int main()
{
	int a,b;
	cout<<"enter two numbers\n";
	cin>>a>>b;
	A a1(a,b);
	return 0;
}
