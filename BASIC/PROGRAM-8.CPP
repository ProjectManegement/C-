
#include <bits/stdc++.h>
using namespace std;

int middleElement(int array1[],
			int array2[], int k)
{
	int i = 0; 
	int j = 0; 
	int count;
	int m1 = -1, m2 = -1;

	for (count = 0; count <= k; count++)
	{
		if (i == k)
		{
			m1 = m2;
			m2 = array2[0];
			break;
		}

		else if (j == k)
		{
			m1 = m2;
			m2 = array1[0];
			break;
		}
		if (array1[i] <= array2[j])
		{
			m1 = m2;
			m2 = array1[i];
			i++;
		}
		else
		{
			m1 = m2;
			m2 = array2[j];
			j++;
		}
	}

	return (m1 + m2)/2;
}

int main()
{
	int array1[] = {1, 16, 15, 26, 38};
	int array2[] = {2, 23, 20, 30, 45};

	int n1 = sizeof(array1) / sizeof(array1[0]);
	int n2 = sizeof(array2) / sizeof(array2[0]);
	if (n1 == n2)
		cout << "middleElement IS "
			<< middleElement(array1, array2, n1) ;
	else
		cout << "ERROR";
	getchar();
	return 0;
}

