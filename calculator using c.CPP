#include<stdio.h>
#include<conio.h>
#include<math.h>
int arith()
{
 int a,b,c,n;
 clrscr();
 printf("ARITHMATIC OPERATIONS MENU\n");
 printf("WHAT OPERATION DO YOU WANT TO PERFORM?\n");
 printf("FOR ADDITION PRESS 1\n");
 printf("FOR SUBTRACTION PRESS 2\n");
 printf("FOR MULTIPLICATION PRESS 3\n");
 printf("FOR DIVISION PRESS 4\n");
 scanf("%d",&n);
 switch(n){
 case 1:
      printf("Enter two numbers\n");
	  scanf("%d%d",&a,&b);
	  c=a+b;
	  printf("Addition result is %d\n",c);
	  break;
 case 2:
      printf("Enter two numbers\n");
	  scanf("%d%d",&a,&b);
	  c=a-b;
	  printf("Subtraction result is %d\n",c);
	  break;
 case 3:
      printf("Enter two numbers\n");
	  scanf("%d%d",&a,&b);
	  c=a*b;
	  printf("Multiplication result is %d\n",c);
	  break;
 case 4:
      printf("Enter two numbers\n");
	  scanf("%d%d",&a,&b);
	  c=a/b;
	  printf("Division result is %d\n",c);
	  break;
 default:
      printf("WRONG INPUT\n");
      break;
 }
 return 0;
}
int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
	f=f*i;
    }
    printf("Factorial of %d is %d\n",n,f);
    return 0;
}
int fart(int n){
    int f=1,i;
    for(i=1;i<=n;i++){
	f=f*i;
    }
    return f;
}
int krishna(int n){
 int s=0,p,c;
 c=n;
 while(n>0){
    p=n%10;
    s=s+fart(p);
    n=n/10;
 }
 if(c==s)
    printf("%d is a Krishnamurthy number\n",c);
 else
    printf("%d is not a Krishnamurthy number\n",c);
 return 0;
}
int palin(int n){
 int s=0,p,c;
 c=n;
 while(n>0){
    p=n%10;
    s=(s*10)+p;
    n=n/10;
 }
 if(c==s)
    printf("%d is a palindrome number\n",c);
 else
    printf("%d is not a palindrome number\n",c);
 return 0;
}
int arms(int n){
 int c,p,s=0;
 c=n;
 while(n>0){
    p=n%10;
    s=s+pow(p,3);
    n=n/10;
 }
 if(c==s)
    printf("%d is an armstrong number\n",c);
 else
    printf("%d is not an armstrong number\n",c);
 return 0;
}
void main()
{
 char z,x;
 int n;
 do{printf("FOR DOING ARITHMATIC OPERATIONS PRESS A\n");
 printf("FOR FINDING FACTORIAL PRESS F\n");
 scanf("%c",&z);
 switch(z){
 case 'A':
    arith();
    break;
 case 'F':
    printf("Enter the number\n");
    scanf("%d",&n);
    fact(n);
    krishna(n);
    palin(n);
    arms(n);
    break;
 default:
    printf("You have entered a wrong character \n");
    break;
 }
 printf("Do you want to calculate more??(Y/N) \n");
 scanf("%c",&x);
 }while(x=='Y'||x=='y');
 getch();
}