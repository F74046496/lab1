#include<iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;
	cout<<num<<" ";

	while(num!=1)
	{
		if(num%2!=0)
			num=3*num+1;
		else
			num=num/2;
		cout<<num<<" ";
	}
	cout<<endl;

	return 0;
}
