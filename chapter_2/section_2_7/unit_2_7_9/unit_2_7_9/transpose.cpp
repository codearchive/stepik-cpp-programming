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

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
	int ** new_m = create_array2d(cols, rows);
	for (unsigned i = 0; i != rows; ++i) {
		for (unsigned j = 0; j != cols; ++j) {
			if (i == j) {
				new_m[i][j] = m[i][j];
			}
			else {
				new_m[j][i] = m[i][j];
			}
		}
	}
	return new_m;
}