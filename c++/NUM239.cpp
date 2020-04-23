#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'
#define pl cout<<endl;
void fast() { ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); }
int main() {
 
	#ifndef ONLINE_JUDGE
	freopen("D:\\Ajay\\in.txt", "r", stdin);
	freopen("D:\\Ajay\\out.txt", "w", stdout);
	#endif
	int t,l,r,count;
	cin >> t;
	while(t--)
	{
		count = 0;
		cin >> l >> r;
		for (int i = l; i <= r; ++i)
		{
			/* code */
			if ((i%10 == 2) || (i%10 == 3) || (i%10 == 9))
			{
				count++;
			}
		}
		cout << count <<endl;
	}
 
	return 0;
}