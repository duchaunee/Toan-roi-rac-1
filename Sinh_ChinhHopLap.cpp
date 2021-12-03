#include<iostream>

using namespace std;

int n, k, a[10];
bool check = false;

void display()
{
	for (int i = 1; i <= k; i++) cout << a[i];
 	cout << " ";
}


void nextString()
{
	int i = k;
	while( a[i] == n && i>0 ) i--; // nếu a[i] = n và i > 0 thì giảm i

	if (i == 0) check = true; // nếu i = 0 thì đã đến cấu hình cuối cùng 
	else
	{
		a[i]++;     // tăng a[i] lên 1 đơn vị

		for (int j = i + 1; j <= k; j++) a[j] = 1;   
		// đặt tất cả phần tử phía sau a[i] = 1	
	}
}

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= k; i++) a[i] = 1;

	while( !check )
	{
	display();
	nextString();
	}
	system("pause");
}