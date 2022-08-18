#include<stdio.h>     //standard input output functions
#include<conio.h>        //console functions
#include<string.h>       //string functions
#define MAX 50              //max size defined
int stack[MAX];             //a global stack
char post[MAX];             //a global postfix stack
int top=-1;                  //initializing top to -1
void pushstack(int tmp);       //push function
void evaluate(char c);          //calculate function
void main()
{
   int i,l;
   //clrscr();
   printf("Enter a valid postfix : ");
   gets(post);                    //getting a postfix expression
   l=strlen(post);               //string length
   for(i=0;i<l;i++)
   {
      if(post[i]>='0' && post[i]<='9')
      {
          pushstack(i);             //if the element is a number push it
      }
      if(post[i]=='+' || post[i]=='-' || post[i]=='*' ||
      post[i]=='/' || post[i]=='^')       //if element is an operator
      {
          evaluate(post[i]);             //pass it to the evaluate
      }
   }                      //print the result from the top
   printf("\n\nResult :: %d",stack[top]);
   getch();
}

void pushstack(int tmp)          //definiton for push
{
   top++;                              //incrementing top
   stack[top]=(int)(post[tmp]-48);    //type casting the string to its integer value
}

void evaluate(char c)       //evaluate function
{
   int a,b,ans;        //variables used
   a=stack[top];       //a takes the value stored in the top
   stack[top]='\0';     //make the stack top NULL as its a string
   top--;                //decrement top's value
   b=stack[top];         //put the value at new top to b
   stack[top]='\0';      //make it NULL
   top--;                //decrement top
   switch(c)     //check operator been passed to evaluate
   {
      case '+':          //addition
          ans=b+a;
          break;
      case '-':           //subtraction
          ans=b-a;
          break;
      case '*':            //multiplication
          ans=b*a;
          break;
      case '/':           //division
          ans=b/a;
          break;
      case '^':      //power
          ans=b^a;
          break;
      default:
          ans=0;      //else 0
   }
   top++;             //increment top
   stack[top]=ans;        //store the answer at top
}
