int ** create_array2d(unsigned r, unsigned c)
{
	int ** arr = new int * [r];
	arr[0] = new int[r * c];
	for (unsigned i = 1; i != r; ++i)
	{
		arr[i] = arr[i - 1] + c;
	}
	return arr;
}

void swap_min(int *m[], unsigned rows, unsigned cols)
{
	int min = m[0][0];
	int ** min_row = &m[0];
	for (unsigned i = 0; i != rows; ++i) {
		for (unsigned j = 0; j != cols; ++j) {
			if (m[i][j] < min) {
				min = m[i][j];
				min_row = &m[i];
			}
		}
	}
	int * t = new int[cols];
	t = m[0];
	m[0] = *min_row;
	*min_row = t;
}