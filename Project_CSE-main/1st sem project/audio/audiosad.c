#include<windows.h>
#include<conio.h>
#include<MMsystem.h>
#include<stdio.h>

int main()
{
    PlaySound(TEXT("testsad.wav"),NULL,SND_ASYNC);
    system("pause");



    return 0;
}


