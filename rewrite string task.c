#include <stdio.h>
#include <string.h>

char capital (char x)
{
    switch (x)
    {
        case 'a':
        {
            return 'A';

            break;
        }
        case 'b':
        {
            return 'B';

            break;
        }
        case 'c':
        {
            return 'C';

            break;
        }
        case 'd':
        {
            return 'D';

            break;
        }
        case 'e':
        {
            return 'E';

            break;
        }
        case 'f':
        {
            return 'F';

            break;
        }
        case 'g':
        {
            return 'G';

            break;
        }
        case 'h':
        {
            return 'H';

            break;
        }
        case 'i':
        {
            return 'I';

            break;
        }
        case 'j':
        {
            return 'J';

            break;
        }
        case 'k':
        {
            return 'K';

            break;
        }
        case 'l':
        {
            return 'L';

            break;
        }
        case 'm':
        {
            return 'M';

            break;
        }
        case 'n':
        {
            return 'N';

            break;
        }
        case 'o':
        {
            return 'O';

            break;
        }
        case 'p':
        {
            return 'P';

            break;
        }
        case 'q':
        {
            return 'Q';

            break;
        }
        case 'r':
        {
            return 'R';

            break;
        }
        case 's':
        {
            return 'S';

            break;
        }
        case 't':
        {
            return 'T';

            break;
        }
        case 'u':
        {
            return 'U';

            break;
        }
        case 'v':
        {
            return 'V';

            break;
        }
        case 'w':
        {
            return 'W';

            break;
        }
        case 'x':
        {
            return 'X';

            break;
        }
        case 'y':
        {
            return 'Y';

            break;
        }
        case 'z':
        {
            return 'Z';

            break;
        }

    }

}
int main()
{
    char x[100],y[100];
    int j,z;
    char c;
    printf("enter string ");
    gets(x);
    strlwr(x);
    for (int i =0 ;i<100;i++)
    {
        if (!(((x[i]<='z')&&(x[i]>='a'))||(x[i]=='.')||(x[i]==';')||(x[i]==',')))
                {
                z = 1;
                break;
                }

    }
    if (z!=1)
    {
    for(int i =0 ;i<100;i++)
    {
        if (x[i]=='\0')
        {
            break;
        }
        else if (i == 0)
        {
            x[i]= capital(x[i]);
        }
        else if ((x[i]=='.')||(x[i]==',')||(x[i]==';'))
        {
            for(c=(i+1);c<100;c++)
            {
                if (x[c-1]=='\0')
                    break;
                y[c]=x[c];
            }
            for(c=(i+1);c<100;c++)
            {
                if (y[c-1]=='\0')
                    break;

                x[c+1]=y[c];
            }
            x[i+1]=' ';

        }
    }
    printf("string is %s",x);
    }
    else
    {
        printf("error there is non letter element in the input");
    }

    return 0 ;

}

