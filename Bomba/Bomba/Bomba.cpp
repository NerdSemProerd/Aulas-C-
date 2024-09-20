#include <iostream>
#include <Windows.h>

int main()
{
    int tic = 100;
    while (tic > 1) {
        Sleep(70);
        Beep(1500, tic);
        printf("%d", tic);
        tic--;
    }



    //for (int i = 1000; i > 200; i -= 100) {
    //    Beep(1000, 200); // Som do "tic"
    //    Sleep(500);      // Intervalo entre os beeps
    //}

    //// Acelera os tics antes da "explosão"
    //for (int i = 0; i < 5; i++) {
    //    Beep(1500, 100); // Sons mais rápidos
    //    Sleep(100);
    //}

    //// "Explosão"
    //Beep(300, 1000); // Som grave e longo para a explosão
    //std::cout << "BOOM!" << std::endl;

}
