#include "cs50.h"
#include <stdio.h>

int main(void)
{
  string answer = get_string("What's your name?\n");
  printf("hello, %s\n", answer);

  string animal = get_string("What's your prefer animal?\n");
  printf("I like %s too\n", animal);
}