#include <stdio.h>
#include <math.h>

#include "quantum.h"
#include "observer.h"
#include "physical_layer.h"
#include "entanglement.h"

int main (int argc, char *args[]) {
  printf("Hello, this is E91sim made by chanou\n");
  // observe();
  // physical();
  double X = entanglement(3);

  // for(int a=0; a<4; a++){
    printf("%f\n",X);
    // if(a==3){
      // printf("\n");
    // }else{
      // printf(",");
    // }
  // }

  // double a = pow( 4.0, 2.0 );
  double b = sqrt( 2 );
  double a = pow( b, 2.0 );
  // printf( "a=%f b=%f\n", b, a );

  
  // int a[10];
  // for(int i = 0; i<10; i++){
  //   a[i] = i;
  // }
  // ran(a,10,2);
  // for(int i = 0; i<10; i++){
  //   printf("%d\n",a[i]);
  // }


}