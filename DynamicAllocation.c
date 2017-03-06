#include <stdlib.h>
int *array = malloc(10 * sizeof(int));
array[5] = 5;
free(array);
