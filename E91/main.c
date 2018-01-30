#include <stdio.h>
#include <math.h>

#include "quantum.h"
#include "observer.h"
#include "physical_layer.h"
#include "entanglement.h"
#include "ali_obs.h"
#include "bob_obs.h"

int main (int argc, char *args[]) {
  printf("Hello, this is E91sim made by chanou\n");
  double a_0,a_1,a_2,a_3;
  int en[1];
  en[0] = 0;
  ran(en,1,4);
  // &をつけると、アドレス自体
  entanglement(en[0], &a_0, &a_1, &a_2, &a_3);

  // entanglementの種類
  int en_type = observe(a_0,a_1,a_2,a_3);
  // physical();

  // aliceが受信するビット
  int a[1];
  a[0] = 0;
  ran(a,1,2);
  // printf("%d\n",a[0]);
  ali_obs(a[0],en_type);
  bob_obs(a[0],en_type);

}



  // double a = pow( 4.0, 2.0 );
  // double b = sqrt( 2 );
  // double a = pow( b, 2.0 );
  // printf( "a=%f b=%f\n", b, a );

  
  // int a[10];
  // for(int i = 0; i<10; i++){
  //   a[i] = i;
  // }
  // ran(a,10,2);
  // for(int i = 0; i<10; i++){
  //   printf("%d\n",a[i]);
  // }