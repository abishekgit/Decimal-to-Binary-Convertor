#include <stdio.h>

void decimal_to_binary(int decimal_num);
void binary_to_decimal(int binary_num);

int main() {
  int option, decimal_num, binary_num;

  printf("Please Choose the convertor you want:\n");
  printf("1. Decimal to binary\n");
  printf("2. Binary to decimal\n");
  scanf("%d", &option);

  switch (option) {
  case 1:
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);
    decimal_to_binary(decimal_num);
    break;

  case 2:
    printf("Enter a binary number: ");
    scanf("%d", &binary_num);
    binary_to_decimal(binary_num);
    break;

  default:
    printf("Invalid option\n");
    break;
  }

  return 0;
}

void decimal_to_binary(int decimal_num) {
  int binary_num[32];
  int i = 0;

  while (decimal_num > 0) {
    binary_num[i] = decimal_num % 2;
    decimal_num = decimal_num / 2;
    i++;
  }

  printf("Binary equivalent is: ");

  for (int j = i - 1; j >= 0; j--)
    printf("%d", binary_num[j]);
}

void binary_to_decimal(int binary_num) {
  int decimal_num = 0;
  int base = 1;

  while (binary_num > 0) {
    int last_digit = binary_num % 10;
    binary_num = binary_num / 10;
    decimal_num = decimal_num + last_digit * base;
    base = base * 2;
  }

  printf("Decimal equivalent is: %d", decimal_num);
}
