void rotate(int a[], unsigned size, int shift)
{
	int temp;
	int * swapA;
	int * swapB;
	int rep = size - (shift % size);
	int cnt = size - 1;
	for (int i = 0; i < rep; ++i) 
	{
		for (int j = cnt; j >= 1; --j)
		{
			swapA = &a[j - 1];
			swapB = &a[j];
			temp = *swapA;
			*swapA = *swapB;
			*swapB = temp;
		}
	}
}