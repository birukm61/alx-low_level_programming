#include "holberton.h"
#include <stdio.h>
/**
 *_isupper - checks if the char is upper case or ot 
 *@c: character
 *return: 0 or 1
 */

int_isupper(int c);
{
  if ( c >= 65 && c <= 90 )
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
