#include <stdio.h>

int main()
{
  const char *s="test";
  int ret=puts(s); //return value is nondet (internal to built-in, thus non-controllable)

  if(ret<0)
  {
    return 1;
  }

  return 0;
}
