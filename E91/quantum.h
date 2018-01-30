#ifndef _QUANTUM_H_
#define _QUANTUM_H_

#include <time.h>	//time()を内蔵->ビット乱数生成に用いる
#include "MT.h"		//メルセンヌ・ツイスタを内蔵

int shuffle(int a[],int x);

//ビット乱数生成関数
int ran(int tgt[], int try, int decimal){	//a[]:乱数を代入したい配列　x:配列の要素数（試行回数）y:要素を示す進数の形式
  init_genrand((unsigned)time(NULL));	//メルセンヌ・ツイスタのシードをtimeベースで指定
	if(decimal==2){		//2進数にて乱数表示
		for(int i=0;i<try;i++){
			tgt[i] = genrand_int32()%2;
		}
	}else if(decimal==4){
		for(int i=0;i<try;i++){
			tgt[i] = genrand_int32()%4;
		}
	}else if(decimal==10){	//10進数にて乱数表示->各配列はすでに10進数にて初期化されている
		shuffle(tgt,decimal);	//配列の要素数(x)の数のうち、乱数の要素数(x')の乱数を取得したい->まずはx個の乱数を取得し、呼び出し時にx'個取得する
	}else{
		printf("乱数発生エラー\n");
	}
  return 0;
}

//fisher-yatesアルゴリズム（配列シャッフルアルゴリズム）
int shuffle(int a[],int x){
	int size = x;
	for(int i=0;i<size;i++){
		int j = genrand_int32()%size;	//配列の要素を指定するゆえ、約数と0がでれば良い
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	return 0;
}

#endif