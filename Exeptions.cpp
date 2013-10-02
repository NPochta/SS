#include "TXLib.h"

int zt ()
{
    throw 1;
}

int main ()
{ 
    try {zt ();} catch (char) {NULL;}
}
