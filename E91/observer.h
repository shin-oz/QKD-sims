#ifndef _OBSERVE_H_
#define _OBSERVE_H_

int probability(double a_0, double a_1, double a_2, double a_3);

int observe(double a_0, double a_1, double a_2, double a_3){
  printf("I'm an observer on QKD.\n");

  printf("%f\n",a_0);
  printf("%f\n",a_1);
  printf("%f\n",a_2);
  printf("%f\n",a_3);

  return probability(a_0,a_1,a_2,a_3);

}

int probability(double a_0, double a_1, double a_2, double a_3){
  double probability;
  if(a_0 != 0){
    probability = 1/pow(a_0,2.0) * 100;
  }else if(a_1 != 0){
    probability = 1/pow(a_1,2.0) * 100;
  }else if(a_2 != 0){
    probability = 1/pow(a_2,2.0) * 100;
  }else{
    probability = 1/pow(a_3,2.0) * 100;
  }

  if((a_0 > 0) && (a_0 + a_3 > 0)){
    printf("this entanglement is |Phi^+> = (|00> + |11>)/√2\n");
    printf("%fの確率で|00> or |11>\n",probability);
    return 0;
  }else if((a_0 > 0) && (a_0 + a_3 <= 0)){
    printf("this entanglement is |Phi^-> = (|00> - |11>)/√2\n");
    printf("%fの確率で|00> or -|11>\n",probability);
    return 1;
  }else if((a_0 == 0) && (a_1 + a_2 > 0)){
    printf("this entanglement is |Psi^+> = (|01> + |10>)/√2\n");
    printf("%fの確率で|01> or |10>\n",probability);
    return 2;
  }else if((a_0 == 0) && (a_1 + a_2 <= 0)){
    printf("this entanglement is |Psi^-> = (|01> - |10>)/√2\n");
    printf("%fの確率で|01> or -|10>\n",probability);
    return 3;
  }

}

#endif