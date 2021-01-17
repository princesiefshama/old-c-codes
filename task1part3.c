#include <stdio.h>

main( )
{
    //task 1
    //question 3
    //tried to be solved in many ways
    //decleration of variables
    int a , b, c, d, e, f, g, h; //required numbers
    int a1,a2,a3,a4,a5,a6,a7,b1,b2,b3,b4,b5,b6,c1,c2,c3,c4,c5,d1,d2,d3,d4,e1,e2,e3,f1,f2,g1,h1,at,bt,ct,dt,et,ft,gt,ht; // for count
    int p1,p2,p3,p4,p5,p6,p7,p8; // for print

    //entering numbers
    printf("enter the first number = ");
    scanf("%d",&a);

    printf("\nenter the next number = ");
    scanf("%d",&b);

    printf("\nenter the next number = ");
    scanf("%d",&c);

    printf("\nenter the next number = ");
    scanf("%d",&d);

    printf("\nenter the next number = ");
    scanf("%d",&e);

    printf("\nenter the next number = ");
    scanf("%d",&f);

    printf("\nenter the next number = ");
    scanf("%d",&g);

    printf("\nenter the last number = ");
    scanf("%d",&h);


    // old way with many equations
    // this way to get count of repeated times for each number and make all repeated results = 0 to reduce numbers and make it easier to get

    //repeatation of a
    a1 =(a == b)?1:0;    a2 = (a == c)?1:0;    a3 = (a == d)?1:0;    a4 = (a == e)?1:0;
    a5 = (a == f)?1:0;    a6 = (a == g)?1:0;    a7 = (a == h)?1:0;

    //check that all same value turn into zero to prevent counting it again
    b = (a1 == 1)?0:b;    c = (a2 == 1)?0:c;    d = (a3 == 1)?0:d;    e = (a4 == 1)?0:e;
    f = (a5 == 1)?0:f;    g = (a6 == 1)?0:g;    h = (a7 == 1)?0:h;

    //repeatation of b
    b1 = (b == h)?1:0;    b2 = (b == c)?1:0;    b3 = (b == d)?1:0;
    b4 = (b == e)?1:0;    b5 = (b == f)?1:0;    b6 = (b == g)?1:0;

    //check that all same value turn into zero to prevent counting it again

    c = (b2 == 1)?0:c;    d = (b3 == 1)?0:d;    e = (b4 == 1)?0:e;
    f = (b5 == 1)?0:f;    g = (b6 == 1)?0:g;    h = (b1 == 1)?0:h;

    //repeatation of c

    c1 = (c == d)?1:0;    c2 = (c == e)?1:0;    c3 = (c == f)?1:0;
    c4 = (c == g)?1:0;    c5 = (c == h)?1:0;

    //check that all same value turn into zero to prevent counting it again

    d = (c1 == 1)?0:d;    e = (c2 == 1)?0:e;    f = (c3 == 1)?0:f;
    g = (c4 == 1)?0:g;    h = (c5 == 1)?0:h;

    //repeatation of d

    d1 = (d == e)?1:0;    d2 = (d == f)?1:0;    d3 = (d == g)?1:0;    d4 = (d == h)?1:0;

    //check that all same value turn into zero to prevent counting it again

    e = (d1 == 1)?0:e;    f = (d2 == 1)?0:f;    g = (d3 == 1)?0:g;    h = (d4 == 1)?0:h;

    //repeatation of e

    e1 = (e == f)?1:0;    e2 = (e == g)?1:0;    e3 = (e == h)?1:0;

    //check that all same value turn into zero to prevent counting it again

    f = (e1 == 1)?0:f;    g = (e2 == 1)?0:g;    h = (e3 == 1)?0:h;

    //repeatation of f

    f1 = (f == g)?1:0;    f2 = (f == h)?1:0;

    //check that all same value turn into zero to prevent counting it again

    g = (f1 == 1)?0:g;    h = (f2 == 1)?0:h;

    //repeatation of g

    g1 = (g == h)?1:0;

    //check that all same value turn into zero to prevent counting it again

    h = (g1 == 1)?0:h;

    //repeatation of h if it is not counted before

    h1 = (h != 0)?1:0;

    //counters results for each number
    at = (a != 0)*(a1+a2+a3+a4+a5+a6+a7+1);    bt = (b != 0)*(b1+b2+b3+b4+b5+b6+1);
    ct = (c != 0)*(c1+c2+c3+c4+c5+1);    dt = (d != 0)*(d1+d2+d3+d4+1);
    et = (e != 0)*(e1+e2+e3+1);    ft = (f != 0)*(f1+f2+1);
    gt = (g != 0)*(g1+1);    ht = (h != 0)*(h1+1);

    //show the number of repeated times for each with showing the number
    printf("\n\nThe repeated times=   %d      %d      %d      %d      %d      %d      %d      %d     ",at,bt,ct,dt,et,ft,gt,ht);
    printf("\nThe numbers=          %d      %d      %d      %d      %d      %d      %d      %d     ",a,b,c,d,e,f,g,h);

    //prints the numbers which is repeated even numbers
    p1 = ((at%2)==0)?1:0;    p2 = ((bt%2)==0)?1:0;    p3 = ((ct%2)==0)?1:0;
    p4 = ((dt%2)==0)?1:0;    p5 = ((et%2)==0)?1:0;    p6 = ((ft%2)==0)?1:0;
    p7 = ((gt%2)==0)?1:0;    p8 = ((ht%2)==0)?1:0;
    printf("\nThe even number=      %d      %d      %d      %d      %d      %d      %d      %d     \n\n ",p1*a,p2*b,p3*c,p4*d,p5*e,p6*f,p7*g,p8*h);

    return 0;
}

