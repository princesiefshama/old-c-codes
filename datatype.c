#include <stdio.h>

#include "datatype.h"

typedef struct
{
    uint32 x,y;
    float32 a,b;
    float64 c,d;
}s1;
typedef struct
{
    uint32 z;
    float32 e;
    float64 f;
}s2;
typedef enum
{
  INT,
  FLOAT,
  DOUBLE,
}myenum;

void add(s1 one,s2 two,int x)
{
    switch (x)
    {
        case 0:
        two.z = one.x+one.y;
        break;
        case 1:
        two.e = one.a+one.b;
        break;
        case 2:
        two.f = one.c+one.d;
        break;

    }
}

int main()
{
    myenum w;
    s1 one;
    s2 two;
    one.x=1;
    one.y = 2;
    w = INT;
    add(one,two,w);
    one.a=5.5;
    one.b=6.8;
    w=FLOAT;
    add(one,two,w);
    one.c=89.25;
    one.d=58.25;
    w=DOUBLE;
    add(one,two,w);
    printf("results = %d %d %d",two.z,two.e,two.f);

    return 0;
}
