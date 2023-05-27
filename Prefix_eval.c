#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <math.h>

#define MAX 80

struct stack

{int top;

double items[MAX];

};

void push(struct stack *,int);

int pop(struct stack *);

void display(struct stack *);

int isdigit(char);

double eval(char []);

double oper(char,double,double);

void push(struct stack *s,int x)

{

if(s->top==MAX-1)

{printf(“nStack Overflow…!”);

return;

}

else

{s->items[++s->top]=x;

}

}

int pop(struct stack *s)

{

if(s->top==-1)

{printf(“nStack Underflow…!”);

return 0;

}

else

{return(s->items[s->top–]);

}

}

void display(struct stack *s)

{

int ctr;

if(s->top==-1)

{printf(“nStack is empty…!”);

return;

}

else

{

ctr=s->top;

while(ctr!=-1)

printf(“%dt”,s->items[ctr–]);

}

}

int isdigit(char ch)

{

return(ch>=’0′ && ch<=’9′);

}

double oper(char c,double opnd1,double opnd2)

{

switch(c)

{

case ‘+’: return(opnd1+opnd2);

case ‘-‘: return(opnd1-opnd2);

case ‘*’: return(opnd1*opnd2);

case ‘/’: return(opnd1/opnd2);

case ‘^’: return(pow(opnd1,opnd2));

default: printf(“nInvalid operator…!”);return 0;

}

}

double eval(char str[])

{

char c;

double opnd1,opnd2,val;

struct stack stk;

stk.top=-1;

int i;

for(i=0;(c=str[i])!=’�’;i++)

{

if(isdigit(c))

push(&stk,(double)(c-‘0′));

else

{

opnd2=pop(&stk);

opnd1=pop(&stk);

val=oper(c,opnd1,opnd2);

push(&stk,val);

}

}

return(pop(&stk));

}

void main()

{

char str[MAX];

int i,j,k;

char temp;

clrscr();

printf(“ntEnter prefix string:”);

for(i=0;(str[i]=getchar())!=’n’;i++);

str[i]=’�’;

k=i;

printf(“nThe prefix expression is: %s”,str);

for(i=0,j=k-1;i<=j;i++,j–)

{

temp=str[i];

str[i]=str[j];

str[j]=temp;

}

printf(“nPrefix expression after reversing is %s”,str);

printf(“nResult after evaluation is: %f”,eval(str));

getch();

}
