#include <stdio.h>

main()
{
    //question 1
    int x = 0x0A , a = 0x03 , b , c ; //deceration of variables
    b = x ^ a; //swap LSB for the hexadecimal 1st and 2nd
    c = ((b>x+1)||(b<x-1))? x : b; // check that last last bits wasn't same number (11) or (00)

    printf(" value of x = %X \n value of a = %X \n value of b = %X \n value of c (Final  result after swap)= %X",x,a,b,c);
    //show results


    //question 2
    unsigned int x = 1234 , a , b , c ; // deceration of variables
    a = x /100;  //get part 12
    b = ( x - (a*100))*100; //get paer 34
    c = a + b; // swap them
    printf("\n\nthe first number=%d   \npart 1=%d   \npart2=%d   \nThe final result=%d",x,a,b,c); //show results


    //question 3
    int a = 1 , b =2 , c = 3 , d = 1 , e = 2 , f =1 , g = 2, h = 3 ,  i , j , k , i1 , i2 , i3, i4, i5, i6, i7 ,i8,i11,o1,o2,o3,o4,o5,o6;
    i = ( a ^ b ^ c ^ d ^ e ^ f ^ g ^ h );    j = ~( i);
    i1 = ((a & b)|((~a)&(~b)));    i2 = ((c & d)|((~c)&(~d)));    i3 = ((e & f)|((~e)&(~f)));    i4 = ((g & h)|((~g)&(~h)));
    i5 = ((i1 & i2)|((~i1)&(~i2)));    i6 = ((i3 & i4)|((~i3)&(~i4)));    i7 = ((i5 & i6)|((~i5)&(~i6)));    k = ~ (i7 );
    i8 = (((~a)|b) & (a | (~b)));       i11 = ( a & b & c & d & e & f & g & h );
    o1 = (((a^b) == i)|((a^b )== 0))?-1:2;    o2 = (((c^d) == i)|((c^d )== 0))?-1:2;
    o3 = (((e^f) == i)|((e^f) == 0))?-1:2;    o4 = (((g^h) == i)|((g^h) == 0))?-1:2;
    o5 = (a+b)*o1 + (c+d)*o2 + (e+f)*o3 + (g+h)*o4;    o6 = o5/4;
    printf("%u   %u    %u  \n %u    %u    %u  \n   %u   %u    %u   \n %u ",i,j,k, ~i1, ~i2, ~i3 ,~i4 ,~i5 ,~i6 ,~i7);
    printf("\n\n %u     %u",i10,i11);    printf("\n\n %d     %d    %d     %d   %d    %d",o1,o2,o3,o4,o5,o6);
    int a1,a2,a3,a4,a5,a6,a7,b1,b2,b3,b4,b5,b6,c1,c2,c3,c4,c5,d1,d2,d3,d4,e1,e2,e3,f1,f2,g1,h1,at,bt,ct,dt,et,ft,gt,ht;
    int p1,p2,p3,p4,p5,p6,p7,p8;

    a1 =(a == b)?1:0;    a2 = (a == c)?1:0;    a3 = (a == d)?1:0;    a4 = (a == e)?1:0;
    a5 = (a == f)?1:0;    a6 = (a == g)?1:0;    a7 = (a == h)?1:0;
    b = (a1 == 1)?0:b;    c = (a2 == 1)?0:c;    d = (a3 == 1)?0:d;    e = (a4 == 1)?0:e;
    f = (a5 == 1)?0:f;    g = (a6 == 1)?0:g;    h = (a7 == 1)?0:h;
    b1 = (b == h)?1:0;    b2 = (b == c)?1:0;    b3 = (b == d)?1:0;
    b4 = (b == e)?1:0;    b5 = (b == f)?1:0;    b6 = (b == g)?1:0;
    c = (b2 == 1)?0:c;    d = (b3 == 1)?0:d;    e = (b4 == 1)?0:e;
    f = (b5 == 1)?0:f;    g = (b6 == 1)?0:g;    h = (b1 == 1)?0:h;
    c1 = (c == d)?1:0;    c2 = (c == e)?1:0;    c3 = (c == f)?1:0;
    c4 = (c == g)?1:0;    c5 = (c == h)?1:0;
    d = (c1 == 1)?0:d;    e = (c2 == 1)?0:e;    f = (c3 == 1)?0:f;
    g = (c4 == 1)?0:g;    h = (c5 == 1)?0:h;
    d1 = (d == e)?1:0;    d2 = (d == f)?1:0;    d3 = (d == g)?1:0;    d4 = (d == h)?1:0;
    e = (d1 == 1)?0:e;    f = (d2 == 1)?0:f;    g = (d3 == 1)?0:g;    h = (d4 == 1)?0:h;
    e1 = (e == f)?1:0;    e2 = (e == g)?1:0;    e3 = (e == h)?1:0;
    f = (e1 == 1)?0:f;    g = (e2 == 1)?0:g;    h = (e3 == 1)?0:h;
    f1 = (f == g)?1:0;    f2 = (f == h)?1:0;
    g = (f1 == 1)?0:g;    h = (f2 == 1)?0:h;
    g1 = (g == h)?1:0;    h = (g1 == 1)?0:h;
    h1 = (h != 0)?1:0;
    at = (a != 0)*(a1+a2+a3+a4+a5+a6+a7+1);    bt = (b != 0)*(b1+b2+b3+b4+b5+b6+1);
    ct = (c != 0)*(c1+c2+c3+c4+c5+1);    dt = (d != 0)*(d1+d2+d3+d4+1);
    et = (e != 0)*(e1+e2+e3+1);    ft = (f != 0)*(f1+f2+1);
    gt = (g != 0)*(g1+1);    ht = (h != 0)*(h1+1);
    printf("\n\n %d      %d      %d      %d      %d      %d      %d      %d     ",at,bt,ct,dt,et,ft,gt,ht);
    printf("\n %d      %d      %d      %d      %d      %d      %d      %d     ",a,b,c,d,e,f,g,h);
    p1 = ((at%2)==0)?1:0;    p2 = ((bt%2)==0)?1:0;    p3 = ((ct%2)==0)?1:0;
    p4 = ((dt%2)==0)?1:0;    p5 = ((et%2)==0)?1:0;    p6 = ((ft%2)==0)?1:0;
    p7 = ((gt%2)==0)?1:0;    p8 = ((ht%2)==0)?1:0;
    printf("\nThe even number= %d  %d  %d  %d  %d  %d  %d  %d ",p1*a,p2*b,p3*c,p4*d,p5*e,p6*f,p7*g,p8*h);

}
