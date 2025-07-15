#include <stdio.h>

// declaring boolean statements
#define TRUE 1
#define FALSE 0

// declaring check_if_prime function
_Bool check_if_prime (unsigned int);

// main function
int main (void)
{
  // declaring variables
  unsigned int nth_prime, number_of_primes;
  unsigned int test_int, divisor;
  _Bool isPrime;

  // gathering user input
  printf("Enter the nth_prime to find: ");
  scanf("%u", &nth_prime);
  printf("%u\n", nth_prime);

  // assigning values to variables
  number_of_primes = 0;
  test_int = 1;

  // while loop
  while (number_of_primes < nth_prime)
  {
    test_int++;
    isPrime = check_if_prime (test_int);

    if (isPrime == TRUE)
    {
      number_of_primes++;
    }
  }

// print statement to terminal
printf("The %u Prime Number = %u\n", nth_prime, test_int);

return 0;
}

// check_if_prime function
_Bool check_if_prime (unsigned int number)
{
  // declaring variables
  unsigned int divisor;

  // for loop
  for (divisor = 2; divisor * divisor <= number; divisor++)
  {
    if (number % divisor == 0)
    {
      return FALSE;
    }

  }
return TRUE;
}
