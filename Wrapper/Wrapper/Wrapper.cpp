#include <iostream>
#include "Wrapper.h"

int main()
{
    IOWrapper* localWrapper = new IOWrapper;

    localWrapper->GetUserInput();
    localWrapper->GetUserInput();
    localWrapper->GetUserInput();

    localWrapper->DisplayAllInputs();
}