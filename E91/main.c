#include <stdio.h>
#include "quantum.h"
#include "observer.h"
#include "physical_layer.h"

int main (int argc, char *args[]) {
  printf("Hello, this is E91sim made by chanou\n");
  observe();
  physical();

  int a[10];
  for(int i = 0; i<10; i++){
    a[i] = i;
  }
  ran(a,10,2);
  for(int i = 0; i<10; i++){
    printf("%d\n",a[i]);
  }
  
}