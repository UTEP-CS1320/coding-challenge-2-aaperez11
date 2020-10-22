#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if((s > 140)||(d >=90)) {
      printf("Stage 2 Hypertension\n");
    }else if (s< 120){
  if(d < 80){
    printf("Normal\n");
  }  }else if ((s > 180)||(d >= 120)){
  printf("Hypertensive Crysis\n");
else if(s >120 && s <129){
if(d >80){
  printf("Elevated\n");
  }
}else if ((s >130 && s< 139)||(d >=80 && d<89)){
  printf("stage 1 Hypertension\n");
  }
  }
             
