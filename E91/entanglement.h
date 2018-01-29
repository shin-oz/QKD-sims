#ifndef _ENTANGLEMENT_H_
#define _ENTANGLEMENT_H_

void entanglement(int flag){
  // 2量子エンタングルメントを作るための4*4行列
  printf("here is operator to make two qubit entanglement\n");
  int operator[4][4] = {{1,0,0,1},{0,1,1,0},{1,0,0,-1},{0,1,-1,0}};
  for(int b = 0; b < 4; b++){
    for(int a = 0; a < 4; a++){
      printf("%d",operator[a][b]);
      if(a==3){
        printf("\n");
      }else{
        printf(",");
      }
    }
  }

  // 2量子エンタングルメントとなる4*1行列
  printf("here is qubits to make two qubit entanglement\n");
  int qubit[4][1];
  if(flag==0){
    // |Phi^+>
    for(int i = 0; i<4; i++){
      if(i==0){
        qubit[i][0] = 1;
      }else if(i==1){
        qubit[i][0] = 0;
      }else if(i==2){
        qubit[i][0] = 0;
      }else{
        qubit[i][0] = 0;
      }
    }
  }else if(flag==1){
    // |Phi^->
    for(int i = 0; i<4; i++){
      if(i==0){
        qubit[i][0] = 0;
      }else if(i==1){
        qubit[i][0] = 0;
      }else if(i==2){
        qubit[i][0] = 1;
      }else{
        qubit[i][0] = 0;
      }
    }
    // qubit = {0,0,1,0};
  }else if(flag==2){
    // |Psi^+>
    for(int i = 0; i<4; i++){
      if(i==0){
        qubit[i][0] = 0;
      }else if(i==1){
        qubit[i][0] = 1;
      }else if(i==2){
        qubit[i][0] = 0;
      }else{
        qubit[i][0] = 0;
      }
    }      
    // qubit = {0,1,0,0};
  }else{
    // |Psi^->
    for(int i = 0; i<4; i++){
      if(i==0){
        qubit[i][0] = 0;
      }else if(i==1){
        qubit[i][0] = 0;
      }else if(i==2){
        qubit[i][0] = 0;
      }else{
        qubit[i][0] = 1;
      }
    }
    // qubit = {0,0,0,1};
  }
  for(int i=0;i<4;i++){
    printf("%d",qubit[i][0]);
    printf("\n");
  }

  // 2量子エンタングルメントの結果
  printf("resulut of making engtanglement|Phi^+>is below.\n");
  int entanglement[4][1] = {0,0,0,0};
  for(int a=0; a<4; a++){
    int test = 0;
    for(int x=0; x<4;x++){
      test += operator[x][a]*qubit[x][0];
    }
    entanglement[a][0] = test;
  }
  for(int a=0; a<4; a++){
    printf("%d",entanglement[a][0]);
    if(a==3){
      printf("\n");
    }else{
      printf(",");
    }
  }

}
#endif