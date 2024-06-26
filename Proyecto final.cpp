#include <iostream>
using namespace std;

int main() {
    int opción;
    int jugador1, jugador2;
    int resultado;
    int puntajeJugador1 = 0, puntajeJugador2 = 0;
    
    cout << "----Menu----" << endl; 
    cout << "1. Jugar" << endl;
    cout << "2. Salir del juego" << endl;
    cout << "Elegir opción: ";
    cin >> opción;

    do {
        switch (opción) {
            case 1:
                // Iniciar juego
                do {
                    cout << "Turno del Jugador 1" << endl;
                    cout << "Elija: 0 - Piedra, 1 - Papel, 2 - Tijera: " <<endl;
                    cin >> jugador1;
                    
                    cout << "Turno del Jugador 2" << endl;
                    cout << "Elija: 0 - Piedra, 1 - Papel, 2 - Tijera: " <<endl;
                    cin >> jugador2;
                    
                    if (jugador1 == jugador2) {
                        resultado = 0; // Empate
                    } else if ((jugador1 == 0 && jugador2 == 2) ||
                               (jugador1 == 1 && jugador2 == 0) ||
                               (jugador1 == 2 && jugador2 == 1)) {
                        resultado = 1; // Jugador 1 gana
                    } else {
                        resultado = 2; // Jugador 2 gana
                    }
                    
                    if (resultado == 0) {
                        cout << "Empate!" << endl;
                    } else if (resultado == 1) {
                        cout << "Jugador 1 gana esta ronda!" << endl <<endl;
                        puntajeJugador1++;
                    } else {
                        cout << "Jugador 2 gana esta ronda!" << endl <<endl;
                        puntajeJugador2++;
                    }
                    
                    cout << "Puntaje:" << endl;
                    cout << "Jugador 1: " << puntajeJugador1 << endl <<endl;
                    cout << "Jugador 2: " << puntajeJugador2 << endl << endl;
                    
                } while (puntajeJugador1 < 3 && puntajeJugador2 < 3); // Ejemplo de juego al mejor de 3 rondas
                break;
                
            case 2:
                // Salir del juego
                cout << "Saliendo del juego..." << endl;
                break;
                
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
                break;
        }
        
        if (opción != 2) {
            cout << "----Menu----" << endl; 
            cout << "1. Jugar" << endl;
            cout << "2. Salir del juego" << endl;
            cout << "Elegir opción: ";
            cin >> opción;
        }
        
    } while (opción != 2);
    
    return 0;
}
