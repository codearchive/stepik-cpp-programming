#ifndef TRANSPOSE_H
#define TRANSPOSE_H

int ** create_array2d(unsigned r, unsigned c);
int ** transpose(const int * const * m, unsigned rows, unsigned cols);

#endif