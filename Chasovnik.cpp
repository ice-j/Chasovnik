#include <iostream>
using namespace std;

int main()
{
	int h,m;
	cin >> h >> m;
	int count=0;
	for(int i=0;i<10;i++)
	{
		if(m==9 || m ==19 || m==29 || m==39 || m==49 || m==59)
			count+=2;
		else count++;
		if(m==59)
		{
			if(h==9 || h==19 || h==23)
				count+=2;
			else count++;
			if(h==23)
				h=0;
			else h++;
			m=0;
			continue;
		}
		m++;
	}
	cout << count;
	return 0;
}