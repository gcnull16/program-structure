#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN 55



//prototypes:
int addThree(int);
void showmessage();
void checkRange(int);
void showmessagetew();

int main()

{//start main{}


  checkRange(70);


    return 0;
//end main{}
}

int addThree(int x)
{
     return x + 3;
}
void showmessage()
{
    printf("Value is out of range lmao!.\n");
}
void showmessagetew()
{
    printf("Value is in raaaaaaaange.\n");
}
void checkRange(int enteredValue)
{

     if (enteredValue > MAX || enteredValue < MIN)
     {
        showmessage();
     }
     if (enteredValue < MAX || enteredValue > MIN)
     {
         showmessagetew();
     }
}
