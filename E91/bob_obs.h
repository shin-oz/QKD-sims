#ifndef _BOB_OBS_H_
#define _BOB_OBS_H_

void bob_obs(int a, int en_type){
  printf("I'm bob.\n");
  if(en_type==0){
    printf("I observed %d bit.\n",a);
  }else if(en_type==1){
    printf("I observed %d bit.\n",a);
  }else if(en_type==2){
    printf("I observed %d bit.\n",(a + 1) % 2);
  }else{
    printf("I observed %d bit.\n",(a + 1) % 2);
  }
}

#endif