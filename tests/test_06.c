#include <stdio.h>
#include <sys/types.h>

extern int64_t test_06(int64_t,int64_t);

int64_t test_function(int64_t x, int64_t y)
{
  if (x > y)
    return x;
  else
    return y;
}

int main()
{
  
  int64_t i, j, k;
  int errors=0;
  int success=0;

  for (i=-2,j=10; i<20; i++,j--)
    if (test_06(i,j)!=test_function(i,j))
	  errors++;
	else
	  success++;

  printf("success,%d\nerrors,%d\ntotal,%d\n",success,errors,success+errors);

  return 0;
}
