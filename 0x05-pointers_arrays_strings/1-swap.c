#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 * swap_int - swap value a with b
 * @a - takes the value of b
 * @b - takes the value of a
 */
void swap_int(int *a, int *b)
{
  const int p = *a;
  *a = *b;
  *b = p;
}    
 
