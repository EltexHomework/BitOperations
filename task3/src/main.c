#include <stdio.h>

int get_leftmost_bit(int value);

void print_binary(int value); 

int count_ones_in_binary(int value);

int read_value(); 

int main(void) {
  int value = read_value();
  int ones_count = count_ones_in_binary(value);

  printf("Integer value in binary: ");
  print_binary(value);
  printf("\n");
  
  printf("Number of ones in binary form of number: %d", ones_count);
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

int count_ones_in_binary(int value) {
  int count = 0;
  int bits_count = sizeof(value) * 8;

  for (int i = 0; i < bits_count; i++) {
    if (get_leftmost_bit(value) == 1) {
      count++;
    } 
    value = value << 1;
  }

  return count;
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
