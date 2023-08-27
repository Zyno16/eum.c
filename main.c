#include <stdio.h>
#include <stdlib.h>


enum{c_lan,cpp,java,php};
typedef enum e1{
a,
b,
c,
d,
e

}en1;
enum e2{
floor1=22,
floor2=22,
floor3=33,
floor4=44,
floor5=55
};

int main()
{ enum e1 my1 =a;
en1 my2=b;
    printf("%d\n",my1);
    printf("%d\n",my2);
    printf("%d",floor5);
    return 0;
}
