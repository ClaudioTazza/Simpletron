#include <stdio.h>

#define READ 10
#define WRITE 11

#define LOAD 20
#define STORE 21

#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33

#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

#define SIZE 100

void welcome();
void inputProgram(int memory[], int SIZE);

int main(){
  int memory[SIZE], operationCode, operation;

  welcome();
  inputProgram(memory[], 100);



  return 0;
}

void welcome(){
  puts("*** Welcome to Simpletron ***\n"
       "*** Please enter your program one instruction ***\n"
       "*** (or data word) at time. I will type the   ***\n"
       "*** location number and a question mark (?).  ***\n"
       "*** You then type the word for that location. ***\n"
       "*** Type the sentinel -99999 to stop entering ***\n"
       "*** your program. ***\n");
}

void inputProgram(int memory[], int SIZE){
  int input;
  size_t i = 0;

  do{
    scanf("%d", &input);
    memory[i] = input;
    ++i;
  }while (input != -9999 || i < SIZE);

  puts("*** Program loading completed ***");
}
