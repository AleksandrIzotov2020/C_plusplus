#include <iostream>

void Sort(int*, int, int);

void replace(int* A, int p, int r)
{
	if (A[p] > A[r])
	{
		int max = A[p];
		A[p] = A[r];
		A[r] = max;
	}
}

void Merge(int *A, int p, int q, int r)
{
	if (r - p < 2) replace(A, p - 1, r - 1);
	else replace(A, q - 1, q);
}

void Sort(int* A, int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		Sort(A, p, q);
		Sort(A, q + 1, r);
		Merge(A, p, q, r);
	}
}

bool check(int* A, int length)
{
	int check = 1;
	for (int i = 0; i < length; i++)
	{
		if (A[i] <= A [i+1]) check++;
	}

	if (check == length) return false;
	else return true;
}

int main()
{
	int A[] = {5,2,4,6,1,3,8,7,7,5,3,4,9};
	int length = sizeof(A) / sizeof(A[0]);

	while (check(A, length)) Sort(A, 1, length);

	for (int i = 0; i < length; i++)
	{
		std::cout << A[i] << std::endl;
	}
	return 0;
}


