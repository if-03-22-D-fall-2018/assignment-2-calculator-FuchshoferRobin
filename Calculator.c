#include <stdio.h>

double add(double operand1, double operand2){
  double sum = operand1+operand2;
  return sum;
}
double substract(double operand1, double operand2){
  double sub = operand1-operand2;
  return sub;
}
double multiply(double operand1, double operand2){
  double mul = operand1*operand2;
  return mul;
}
double division(double operand1, double operand2){
  double div = operand1/operand2;
  return div;
}


int main(int argc, char const *argv[]) {
  double firstOperand;
  double secondOperand;
  double solution;
  int type_of_operation;

  do {

  printf("Choose one of the following operations\n");
  printf("Add(1)\n");
  printf("Subtract(2)\n");
  printf("Multiply(3)\n");
  printf("Devide(4)\n");
  printf("Stop program(-1)\n");
  scanf("%d", &type_of_operation);
  }
  while(type_of_operation != 1 && type_of_operation != -1 && type_of_operation != 2 &&type_of_operation != 3 &&type_of_operation != 4);

  if(type_of_operation != -1)
  {
  printf("Please enter first operand: \n");
  scanf("%lf", &firstOperand);
  printf("Please enter second operand: \n");
  scanf("%lf", &secondOperand);

  if (type_of_operation == 1) {
    solution = add(firstOperand, secondOperand);
  }
  else if (type_of_operation == 2) {
    solution = substract(firstOperand, secondOperand);
  }
  else if (type_of_operation == 3) {
    solution = multiply(firstOperand, secondOperand);
  }
  else if (type_of_operation == 4) {
    solution = division(firstOperand, secondOperand);
  }

  printf("Die Lösung ist: %4.2f \n", solution);
  }

  return 0;
}
