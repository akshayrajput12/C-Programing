#include <stdio.h>
int main(){

    printf("hello world\n I am Akshay Pratap singh\n");
    //\n is used for or as enter 
    //variables and their Declaration
    /*
    1) Variables as container : 
    eg; int x=5;

    */
    int x;
    x=5;
    x=x+5;
    printf("%d\n",x);//%d is used to print value of integer in c file.
    int z=5;
    int y=2;
    printf("%d\n",x+y);
    printf("%d\n",x*y);
    printf("%d\n",x-y);
    printf("%d\n",x/y);
    printf("%d\n",z/y);/*anser should be 2.5 but answer will be 2 because value stored in int not float.*/
    float a;
    scanf("%f",&a);//for taking input of a 
    float b=2.8;
    printf("%f\n",a*b);// %f is used to print float number in c.
    /* if 5/2=2
    5.0/2=2.5
    if both int value anser is int and if one of input is float then float answer
    */
    printf("%f\n",a/y);
    //scanf is used to take input from user
    char name;
    scanf("%c\n",&name);

    /*question take two input p and q and find remainder
    */
   int p;
   printf("Enter the value of p: ");
   scanf("%d",&p);
   int q;
   printf("Enter a value of q: ");
   scanf("%d",&q);
//remiander = % by easy methode but by dividend rule remainder=

    int remainder=p%q;
    printf("%d",remainder);

    return 0;

    //Operators 
    // note: if y%x=y and [x>y]


   //Hierachy of operators  {BODMAS} but in computer B , O, D/M[IN THIS FOLLOW LEFT TO RIGHT] ,A/S

    



} 
