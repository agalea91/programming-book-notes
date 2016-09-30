#include <stdio.h>
#include <math.h>

char get_grade(int score);

int main(){
  int score = 61;
  char grade;
  grade = get_grade(score);
  printf("Score = %d\n", score);
  printf("Grade = %c\n", grade);
  return (0);
}

char get_grade(int score){
  char val;
  if (score > 90)
    val = 'A';
  else if (score > 80)
    val = 'B';
  else if (score > 70)
    val = 'C';
  else if (score > 60)
    val = 'D';
  else
    val = 'F';
  return (val);
}
