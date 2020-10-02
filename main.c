#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if(s < 140) {
    if(d < 90) {
      printf("Stage 2 Hypertension\n");
    }
  }
if(s < 120){
  if(d < 80){
    printf("Normal\n");
  }  }
  if(s >180)
    if(d > 120){
  printf("Hypertensive Crysis\n");
    }
}
if(s >120 && s <129){
if(s >80){
  printf("Elevated\n");
  }
}
if(s >130 && s <139){
  if(d >80 && d <89){
    printf("stage 1 Hypertension\n");
  }
