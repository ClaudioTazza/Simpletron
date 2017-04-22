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
void inputProgram(int memory[], int size);

int main(){
  int memory[SIZE], operationCode, operation;

  welcome();
  inputProgram(memory, SIZE);



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

void inputProgram(int memory[], int size){
  int input;
  size_t i = 0;

  while(1){
    scanf("%d", &input);
    if(input == -99999 || i == (size - 1)) break;

    memory[i] = input;
    ++i;
  }

  puts("*** Program loading completed ***");
}
