#include<iostream>
using namespace std;

int main()
{
	int i,n,sum=0;
	cout <<"enter value: ";
	cin >> n;

	for(i=1 ; i<=n ;++i)
	{
	    {
		if(i%2!=0)
		{
			cout << i <<',';
		}
		else
		{
			cout << i*i <<',';
		}
	    }
	}
    return 0;
}