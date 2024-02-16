#include <stdio.h>
void England() {
  printf("You are in England.\n");
  return;
}

void Australia() {
  printf("You are in Australia.\n");
  England();
  return;
}

void Nepal() {
  printf("You are in Nepal.\n");
  Australia();
  return;
}

int main () {
  Nepal();
  return 0;
}