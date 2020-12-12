#include <stdio.h>

int main() 
{
int sys, dia;

  

  printf(input your systolic pressure\n");
  scanf("%d", &sys);

  printf("input your diastolic pressure\n");
  scanf("%d", &dia);



  if(sys < dia)
  {
    printf("error");
    return 0;
  }




  if(sys <120 && dia <80)
  printf("normal  blood pressure\n");





  else if(sys >= 120 && sys <= 129 && dia < 80)
  printf("elevated blood pressure\n");




  else if(( sys>=130 && sys >= 139)||( dia >= 80 && dia <=89))




  else
  {
    printf("stage - 2 hypertension\n");
    if(sys > 180 || dia > 120)
        printf( "HYPERTENSIVE CRISIS AS WELL!!\n");
    }
    return 0;
}
