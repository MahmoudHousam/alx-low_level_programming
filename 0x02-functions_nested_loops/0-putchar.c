#include "main.h"
/**
 * main - print _putchare
 * Return: means success
 */

int main(void){  
  char message[] = "_putchar";
  int i = 0;
  while (i <= 8){
    _putchar(message[i]);
    ++i;
  }
  _putchar('\n');
  return 0;
}
