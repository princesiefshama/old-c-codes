#include <stdio.h>
//Uncomment if you're using VS
//#include <conio.h>
enum dataType { INT, FLOAT, DOUBLE };

typedef struct
{
   int u_intValue;
   int u_intValue_2;
   float u_floatValue;
   float u_floatValue_2;
   double u_doubleValue;
   double u_doubleValue_2;

}data;
typedef struct
{
   int    u_resInt;
   float u_resFloat;
   double u_resDouble;

}result;

void add(data val1, result* val2, enum dataType type);

int main() {
    data S1;
    result Result;
   // INT data type
   S1.u_intValue = 5000;
   S1.u_intValue_2 = 8000;
     add(S1, &Result, INT);
   printf("Integer Addition result is : %d \n", Result.u_resInt);
   //FLOAT data type
   S1.u_floatValue = 50.2f;
   S1.u_floatValue_2 = 67.5f;
   add(S1, &Result, FLOAT);
   printf("Float Addition result is : %f \n", Result.u_resFloat);
   //DOUBLE data Type
   S1.u_doubleValue = 300.22;
   S1.u_doubleValue_2 = 805.12;
   add(S1, &Result, DOUBLE);
   printf("Double Addition result is : %lf \n", Result.u_resDouble);
   // Uncomment if you're using VS


