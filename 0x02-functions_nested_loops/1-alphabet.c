#include "main.h"
#include <unistd.h>
/**
 * main - print _putchare
 * Return: means success
 */

int main(void){

  char i;
  for (i = 'a'; i <= 'z'; ++i)
  {
      _putchar(i);
  };
  _putchar('\n');
  return 0;
}
