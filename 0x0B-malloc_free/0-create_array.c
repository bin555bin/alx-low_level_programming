#include "main.h"
#include <stdlib.h>
{
  char *array;
  unsigned int i;
     if (size == 0)
     return (NULL);
  array = (char *)malloc(sizeof(char) * size);
  if (array == NULL)
     return (NULL);
  for (i = 0; i < size; i++)
     array[i] = c;
  return (array);
}
