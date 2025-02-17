//uso de diferentes tipos de datos para calcular y generar el costo total de varios artículos
#include <stdio.h>

int main() {
  // Create variables of different data types
  int items = 37;
  float cost_per_item = 8.12;
  float total_cost = items * cost_per_item;
  char currency = '$';

  // Print variables
  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);

  return 0;
}
