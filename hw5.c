#include <stdio.h>

int main() {

  char var_char = 'c';
  int var_int = 2;
  long var_long = 35;

  printf("\nVariables\n");

  printf("char: %c\n", var_char);
  printf("int: %d\n", var_int);
  printf("long: %ld\n", var_long);

  printf("\nHex Adresses\n");

  printf("hex address of char: %p\n", &var_char);
  printf("hex address of int: %p\n", &var_int);
  printf("hex address of long: %p\n", &var_long);

  printf("\nDecimal Adresses\n");

  printf("decimal address of char: %lld\n", &var_char);
  printf("decimal address of int: %lld\n", &var_int);
  printf("decimal address of long: %lld\n", &var_long);

  printf("\nPointers' Values\n");

  char* char_pointer = &var_char;
  int* int_pointer = &var_int;
  long* long_pointer = &var_long;

  printf("pointer of char: %c\n", *char_pointer);
  printf("pointer of int: %d\n", *int_pointer);
  printf("pointer of long: %ld\n", *long_pointer);

  printf("\nChanged Pointers' Values\n");

  *char_pointer = 'd';
  *int_pointer = 12345;
  *long_pointer = 1234567890;

  printf("pointer of char: %c\n", *char_pointer);
  printf("pointer of int: %d\n", *int_pointer);
  printf("pointer of long: %ld\n", *long_pointer);

  printf("\nChanged Variables\n");

  printf("new char: %c\n", var_char);
  printf("new int: %d\n", var_int);
  printf("new long: %ld\n", var_long);

  printf("\nUnsigned Ints\n");

  unsigned int var_unsigned_int = 1000000;

  printf("new unsigned int: %u\n", var_unsigned_int);

  int* unsigned_int_pointer1 = &var_unsigned_int;
  char* unsigned_int_pointer2 = &var_unsigned_int;

  printf("\nUnsigned Int Pointers\n");

  printf("pointer 1 address: %p points to: %d\n", unsigned_int_pointer1, *unsigned_int_pointer1);
  printf("pointer 2 address: %p points to: %c\n", unsigned_int_pointer2, *unsigned_int_pointer2);

  printf("\nUnsigned Int Hex and Decimal\n");

  printf("hex of unsigned int: %x\n", var_unsigned_int);
  printf("decimal of unsigned int: %u\n", var_unsigned_int);

  printf("\nIndividual Bytes of an Unsigned Int\n");

  printf("unsigned hex: %hhx\n", unsigned_int_pointer2);
  printf("unsigned decimal: %hhu\n", unsigned_int_pointer2);

  printf("\nIncrement Each Byte\n");
  
  unsigned_int_pointer2++;
  printf("incremented by 1 unsigned hex: %hhx\n", unsigned_int_pointer2);
  printf("incremented by 1 unsigned decimal: %hhu\n", unsigned_int_pointer2);

  printf("\n");

  unsigned_int_pointer2 += 16;
  printf("incremented by 16 unsigned hex: %hhx\n", unsigned_int_pointer2);
  printf("incremented by 16 unsigned decimal: %hhu\n", unsigned_int_pointer2);

  printf("\n");
  return 0;

  // int test = 5;
  // printf("%d\n", test);
  // int *test_point = &test;
  // *test_point = 4;
  // printf("%d\n", test);
  //
  // char test2 = 'c';
  // printf("%c\n", test2);
  // char *test_point2 = &test2;
  // *test_point2 = 'd';
  // printf("%c\n", test2);

}
