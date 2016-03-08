#include <iostream>
using namespace std;
int main()
{
	int t;//共t个数组；
	cin >> t;
	for (int  i = 0;i < t; i++)  //循环输入t个case；
	{
		int n;
		cin >> n; //每个数组共有n个数；
		int head = 1, tail = 1,curhead=1;
		int sum = 0, max = -99999;
		for (int j = 0; j < n; j++)
		{
			int temp;
			cin >> temp;
			if (sum<0)
			{
				curhead = j + 1;
				sum = temp;
			}
			else
			{
				sum += temp;
			}
			if (max<sum)
			{   
				tail = j + 1;
				head = curhead;
				max=sum;
			}
		}
		
		cout << "Case " << i + 1 <<":"<< endl;
		cout << max << " " << head << " " << tail << endl;
		if(i!=t-1)
				cout<< endl;

	}
	return 0;
}