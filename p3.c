#include <stdio.h>

int main (void)
{
  //declaring variables
  int years, month, final_month;
  double loan_balance, interest_for_this_month, monthly_payment, total_interest;
  double monthly_interest_rate, annual_interest_rate;
  double left_over_payment;

  //gathering user input
  printf("\n\nLoan Amount = ");
  scanf("%lf", &loan_balance);
  printf("%10.2f\n", loan_balance);

  printf("\nNumber of Years = ");
  scanf("%i", &years);
  printf("%10i\n", years);

  printf("\nAnnual Interest Rate in %% = ");
  scanf("%lf", &annual_interest_rate);
  printf("%10.2f\n", annual_interest_rate);

  printf("\nMonthly payment = ");
  scanf("%lf", &monthly_payment);
  printf("%10.2f\n", monthly_payment);

  /*
  loan_balance = 200000;
  years = 30;
  annual_interest_rate = 6.0;
  monthly_payment = 1199.10;
  */

  //performing calculations
  monthly_interest_rate = (annual_interest_rate / 100.0) / 12;

  final_month = years * 12; //number of months for the loan
  total_interest = 0.0; //initialize total interest to 0

  //performing for loop
  for(month = 1; month <= final_month, month++)
  {
    interest_for_this_month = monthly_interest_rate * loan_balance;

    total_interest = total_interest + interest_for_this_month;

    loan_balance = loan_balance - (monthly_payment - interest_for_this_month);

    left_over_payment = monthly_payment - interest_for_this_month;

    printf("Month (%i), interest = %.2f, left_over_payment = %.2f, balance = %.2f\n", interest_for_this_month, left_over_payment, loan_balance);
  }

  //printing total interest rate and final loan balance
  printf("\nTotal Interest = %10.2f\n", total_interest);
  printf("Final Loan Balance = %5.2f\n\n\n", loan_balance);

  return 0;
}
