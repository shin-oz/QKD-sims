#include <stdio.h>
#include <time.h>	//time()を内蔵->ビット乱数生成に用いる
#include "MT.h"		//メルセンヌ・ツイスタを内蔵


int main (int argc, char *args[] ){
  
	init_genrand((unsigned)time(NULL));	//メルセンヌ・ツイスタのシードをtimeベースで指定

  // 得たビット状態
  int n;

	n = genrand_int32()%2;

  printf("I'm an observer on QKD.\n");
  printf("%d\n",n);
}