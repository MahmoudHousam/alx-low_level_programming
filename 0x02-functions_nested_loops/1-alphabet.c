#include "main.h"

int main(void){

  char message[] = "abcdefghijklmnopqrstuvwxyz";
  int i;
  for (i = 0; i < 26; ++i)
  {
      _putchar(message[i]);
  };
  _putchar('\n');
  return 0;
}
