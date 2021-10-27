#include <iostream>

using namespace std;

int main()
{
	int A[100];
	int N;

	cout << "adad vared konid" << endl;
	cin >> N;

	for (int i = 0; i<N; i++)
	{
		cout << "adad vared konid " << i + 1 << " :" << endl;
		cin >> A[i];
	}

	int i = 0;

	for (int i = 1; i < N; i++)
	{
		if (A[i - 1] > A[i])
		{
			i = 1;
			break;
		}

	}
}