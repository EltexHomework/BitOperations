#include <stdio.h>

int get_leftmost_bit(int value);

void print_binary(int value); 

void set_third_byte(int* value, int third_byte);

int read_value(); 

int read_third_byte();

int main(void) {
  int value = read_value();
  int third_byte = read_third_byte();  
  
  printf("Integer value in binary: ");
  print_binary(value);
  printf("\n");
  
  printf("Third byte in binary: ");
  print_binary(third_byte);
  printf("\n");
    
  set_third_byte(&value, third_byte);
  
  printf("Value with changed third byte in binary: ");
  print_binary(value);
  printf("\n");

  return 0;
}

int get_leftmost_bit(int value) {
  int bits_count = sizeof(value) * 8;
  return (value >> (bits_count - 1)) & 1;
}

void print_binary(int value) {
  int bits_count = sizeof(value) * 8;
  for (int i = 0; i < bits_count; i++) {
    printf("%d", get_leftmost_bit(value));
    value = value << 1;
  }
}

void set_third_byte(int* value, int third_byte) {
  *value = *value | (third_byte << 16);
}

int read_value() {
  int value = -1;
  while (value < 0) {
    printf("Enter positive integer number: ");
    if (scanf("%d", &value) == 0) {
      printf("Error occured");
      return 0;
    }
    if (value < 0) {
      printf("Number is not positive\n");
    }
  } 
  return value;
}

int read_third_byte() {
  int value;
  do {
    printf("Enter positive number (from 0 to 255): ");
    if (scanf("%d", &value) == 0) {
      printf("Error occured");
      return 0;
    }
    if (value < 0 || value > 255) {
      printf("Number is wrong\n");
    }
  } while (value < 0 || value > 255); 

  return value;

}
