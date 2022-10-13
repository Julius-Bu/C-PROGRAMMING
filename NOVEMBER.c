#include<stdio.h>
#include<conio.h>
#include<string.h>

void replace();

void main ( int argc, char *argv[] ) {

FILE *fp,*ft;
char str[80],str1[30],str2[30],nwstr[100];

//clrscr();

if(argc!=4) {

puts("Improper argements passed!");
//exit();
}

strcpy(str1,argv[1]);
strcpy(str2,argv[2]);

fp=fopen(argv[3],"r");

if(fp==NULL) {

puts("cannot open source file!");
//exit();
}

ft=fopen("NEW.TXT","w+");

if(ft==NULL) {

puts("cannot open target file!");
//exit();
}

while(fgets(str,79,fp)!=NULL) {

replace(str,str1,str2,&nwstr);

fputs(nwstr,ft);
}

fclose(fp);
fclose(ft);

remove("FILE.TXT");
rename("NEW.TXT","FILE.TXT");

printf("\n\nTask completed!\n\n");

getch();

}

void replace(char *s, char s1[80], char s2[80], char *n) {

int i=0,j=0,k=0;
char temp[100],temp2[100],main[100],*t=temp,*m=main;


/*******************************/
/* copying to temporary string */
/*******************************/


while(*s!='\0') {

*t=*s;

t++;
s++;

}

*t='\0';

/**********************/
/* checking each word */
/**********************/


while(temp[i]!='\0') {

temp2[j]=temp[i];

if(temp[i]==' ' || temp[i]==',' || temp[i]=='.') {

temp2[j]='\0';

if(strcmpi(temp2,s1)==0) {

strcpy(temp2,s2);

}

j=0;

while(temp2[j]!='\0') {

main[k]=temp2[j];

k++;
j++;
}

main[k]=' ';  /* adding space after each word is copied */

k++;     /* increment so that the next word won't replace the space */

j=-1;

}

i++;
j++;
}

temp2[j]='\0';              /* last word terminated */

if(strcmpi(temp2,s1)==0){    /* checking last word too */

strcpy(temp2,s2);

}

/***************************/
/* last word of the string */
/***************************/

j=0;

while(temp2[j]!='\0') {

main[k]=temp2[j];

k++;
j++;
}

main[k]='\0';   /* new string is completely ready */


/******************************************************************/
/* preparing new string to return to main and printing it on file */
/******************************************************************/

while(*m!='\0') {

*n=*m;

n++;
m++;
}

*n='\0';


}

