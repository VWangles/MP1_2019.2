#include <iostream>
#include "velha.hpp"

using namespace std;

int main() {
    int velha[9] = {2, 0, 1,
                    0, 2, 0,
                    1, 0, 1};

switch(testaVelha(velha)) {
    case 1: cout << "Vencedor foi X." << endl;
                    break;
    case 2: cout << "Vencedor foi O." << endl;
                    break;
    case 0: cout << "Jogo empatado." << endl;
                    break;
    case -1: cout << "Jogo esta indefinido." << endl;
                    break;
    case -2: cout << "Jogo impossivel." << endl;
                    break;
}

return 0;
}