#include <iostream>
using namespace std;
int main()
{
	int t;//��t�����飻
	cin >> t;
	for (int  i = 0;i < t; i++)  //ѭ������t��case��
	{
		int n;
		cin >> n; //ÿ�����鹲��n������
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