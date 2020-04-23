#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
	int t,n,gi,li;
	cin >> t;
	for (int i=0;i<t;i++)
	{
		gi = li = 0;
		cin >> n;
		int a[n];
		for (int j=0;j<n;j++)
		{
			cin >> a[j];
//			cout << a[j]<<endl;
		}
		if (n == 1)
		cout << "YES"<<endl;
		else
		{
			for (int j=0;j<n-1;j++)
			{
//				cout << "Outer for loop "<<j<<endl;
				for (int k =j+1;k<n;k++)
				{
//					cout << "Inner for loop "<<k<<endl;
					if ((a[j] > a[k]) && (j!=k-1))
					{
						gi++;
					}
					else if ((a[j] > a[k]) && (j == k-1))
					{
						li++;
						gi++;
					}
				}
			}
			if (gi == li)
				cout << "YES"<<endl;
			else
				cout << "NO"<<endl;
		}
	}
	
	return 0;
}
