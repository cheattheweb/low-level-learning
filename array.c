#include <stdio.h>
#include <stdlib.h>
int main() {

  // statically sized array
  //-stack based memory
  //-sze determined at compile time
  /******************************************/
  /*   int my_array[5] = {0};               */
  /*                                        */
  /* for (int i = 0; i < 5; i++) {          */
  /*   printf("%d : %d\n", i, my_array[i]); */
  /* }                                      */
  /******************************************/

  /******************************************/
  /* my_array[1] = 12345;                   */
  /* my_array[4] = 56565;                   */
  /*                                        */
  /* puts("----------");                    */
  /* for (int i = 0; i < 5; i++) {          */
  /*   printf("%d : %d\n", i, my_array[i]); */
  /* }                                      */
  /******************************************/



  // dynamically sized array
  // - heap based memory
  // - size determined at run time

  // 5 element int array
  int *my_array = malloc(sizeof(int) * 5);

  for (int i = 0; i < 5; i++) {
    printf("%d: %d\n", i, my_array[i]);
  }
  my_array[1] = 23232;
  my_array[3] = 34343;

  puts("---------");
  for (int i = 0; i < 5; i++) {
    printf("%d: %d\n", i, my_array[i]);
  }
  return 0;
}
