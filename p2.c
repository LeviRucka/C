#include <stdio.h>

int main(void)
{
  //Here we declare our variables
  double energy_drink_amount, yogurt_amount;
  double pounds_of_oranges, cost_of_oranges;
  double cost_of_energy_drink, tax_of_energy_drink;
  double cost_of_yogurt, tax_of_yogurt;
  double total_cost_amount, total_tax_amount, grand_total;

  //Here we get user input
  printf("Enter pounds of oranges: ");
  scanf("%lf", &pounds_of_oranges);
  printf("\n (Debug Statement) pounds_of_oranges = %.2f\n", pounds_of_oranges);

  printf("Enter amount of energy Drinks: ");
  scanf("%lf", &energy_drink_amount);
  printf("\n (Debug Statement) energy_drink_amount = %.0f\n", energy_drink_amount);

  printf("Enter amount of yogurt: ");
  scanf("%lf", &energy_drink_amount);
  printf("\n (Debug Statement) yogurt_amount = %.0f\n", yogurt_amount);

  //Here we do our calculations
  cost_of_oranges = 0.95 * pounds_of_oranges; //$0.95 per pound of oranges
  cost_of_energy_drink = 1.50 * energy_drink_amount; //$1.50 per energy drink
  tax_of_energy_drink = 0.065 * cost_of_energy_drink; //6.5% tax on energy drinks
  cost_of_yogurt = 0.75 * yogurt_amount; //$0.75 per yogurt
  tax_of_yogurt = 0.065 * cost_of_yogurt; //6.5% tax on yogurt

  total_cost_amount = cost_of_oranges + cost_of_energy_drink + cost_of_yogurt; //sum of costs
  total_tax_amount = tax_of_energy_drink + tax_of_yogurt; //sum of taxes
  grand_total = total_cost_amount + total_tax_amount; //sum of totals

  //Here we print our output
  printf ("Item  Cost  Tax\n");
  printf("Oranges  %.2f\n", cost_of_oranges);
  printf("Energy Drink  %.2f  %.2f\n", cost_of_energy_drink, tax_of_energy_drink);
  printf("Yogurt  %.2f  %.2f\n\n", cost_of_yogurt, tax_of_yogurt);
  printf("Totals  %.2f  %.2f\n", total_cost_amount, total_tax_amount);
  printf("Grand Total:  %.2f\n\n", grand_total);

  return 0;
}
