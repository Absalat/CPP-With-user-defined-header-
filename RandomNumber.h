#include <ctime>
#include <cstdlib>


//User Defined Function

int getRandomNumber()
{
        srand(time(0));
        return rand() % 100+1;
}

