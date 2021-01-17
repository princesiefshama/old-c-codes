#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

void code (char *input,char *output,char start);
void decode (char *input,char *output,char start);
main(int argc,char *argv[])
{


	if(argc!=5)
	{
		printf("usage : input output encode/decode offset\n");
		exit(1);
	}
	if(!isalpha(*argv[4]))
	{
		printf("start letter must be alphabetical character \n");
		exit(1);
	}
	if(toupper(*argv[3])=='E')  code(argv[1],argv[2],*argv[4]);
	else decode(argv[1],argv[2],*argv[4]);
	return(0);
}

void code( char *input,char *output ,char start)
{
	int ch;
	FILE *fp1,*fp2;

	if((fp1=fopen(input,"r"))==NULL)
	{
		printf("can't open input file\n");
		exit(1);
	}

	if((fp2=fopen(output,"w"))==NULL)
	{
		printf("can't open output file\n");
		exit(1);
	}

	start= tolower(start);
	start=start-'a';
	do
	{
		ch=getc(fp1);
		ch=tolower(ch);
		if(isalpha(ch))
		{
			ch=ch+start;
			if(ch<'n') ch=ch+13;
			else if (ch>'m') ch = ch-13;
		}
		if(feof(fp1)) break;
		putc(ch,fp2);
	}while(!ferror(fp1)&&!ferror(fp2));
	fclose(fp1); fclose(fp2);
}

void decode( char *input,char *output ,char start)
{
	int ch;
	FILE *fp1,*fp2;

	if((fp1=fopen(input,"r"))==NULL)
	{
		printf("can't open input file\n");
		exit(1);
	}

	if((fp2=fopen(output,"w"))==NULL)
	{
		printf("can't open output file\n");
		exit(1);
	}

	start= tolower(start);
	start=start-'a';
	do
	{
		ch=getc(fp1);
		ch=tolower(ch);
		if(isalpha(ch))
		{
			ch=ch-start;
			if(ch<'n') ch=ch+13;
			else if (ch>'m') ch = ch-13;
		}
	    if(feof(fp1)) break;
		putc(ch,fp2);
	}while(!ferror(fp1)&&!ferror(fp2));
	fclose(fp1);fclose(fp2);
}



