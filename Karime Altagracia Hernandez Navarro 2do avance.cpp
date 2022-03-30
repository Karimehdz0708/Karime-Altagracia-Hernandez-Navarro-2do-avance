/*Karime Altagracia hernandez Navarro 2do avance*/
#include <iostream>
#include <cstdlib>
#include <array>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int op, nc , i, hr[3][5], cm , j ;//cita modificada numero de cita
    char nom[3][50], nt[3][30], desc[3][200],p[6][6];//nombre tratamiento

    cout << "                           INICIO                    " << endl;
    cout << "....................................................." << endl;
    cout << "1.- Agendar cita" << endl;
    cout << "2.- Moificar cita" << endl;
    cout << "3.- Eliminar cita" << endl;
    cout << "4.- Lista de citas vigentes" << endl;
    cout << "5.- Limpiar pantalla" << endl;
    cout << "6.- Salir" << endl;
    cout << "_____________________________________________________" << endl;
    cout << "\nIngrese el numero de la opcion que desee ejecutar " << endl;
    cin >> op;

    switch (op) {
    case 1:
        cout << "Agendar Cita" << endl;
        for (i = 0; i <= 3; i++) {
            for (j = 0; j <= 3; j++) {
                cout << "Numro  cita"; i+1;
                Regex.IsMatch(s ? ? "", @"^[\w\s]+$");
                cout << "Nombre el paciente:" << endl;
                cin >> nom[i][j];
                Regex.IsMatch(s ? ? "", @"^[\w\s]+$");
                cout << "Hora l trataminto (00:00)(24hrs)" << endl;
                cin >> hr[i][j];
                cout << "Nombre del tratamiento a realizar:" << endl;
                cin >> nt[i][j];
                cout << "Descripcion:" << endl;
                cin >> desc[i][j];
                cout << "Precio unitario de tratamiento" << endl;
                j = j + 1;
            }
            i = i + 1;
        }
        cout << "____________________________________________" << endl;
        cout << "Pulse cualquier tecla para regsar al inicio" << endl;
        system("pause>nul");
        break;

    case 2:
        cout << "Modificar cita" << endl;
        cout << "Ingrese el numero de la cita que desea modificar" << endl;
        cin >> cm;
        for (i = cm;i <= 3;i++) {
            if (i = !cm) {
                cout << "____________________________________________" << endl;
                cout << "Pulse cualquier tecla para regsar al inicio" << endl;
                system("pause>nul");
            }
            for (j = 0; j <= 3; i++) {
                cout << "Numro  cita"; i+1;
                Regex.IsMatch(s ? ? "", @"^[\w\s]+$");
                cout << "Nombre el paciente:" << endl;
                cin >> nom[i][j];
                Regex.IsMatch(s ? ? "", @"^[\w\s]+$");
                cout << "Hora l trataminto (00:00)(24hrs)" << endl;
                cin >> hr[i][j];
                cout << "Nombre del tratamiento a realizar:" << endl;
                cin >> nt[i][j];
                cout << "Descripcion:" << endl;
                cin >> desc[i][j];
                cout << "Precio unitario de tratamiento:" << endl;
                cin >> p[i][j];
                j = j + 1;
            }
            i = i + 1;
        }
        cout << "____________________________________________" << endl;
        cout << "Pulse cualquier tecla para regsar al inicio" << endl;
        system("pause>nul");
        break;

    case 3:
        cout << "Eliminar Cita" << endl;
        using std::cout; using std::endl;
        using std::array; using std::fill;
        using std::fill_n;

        int main() {
            

            cout << "| ";
            for (i = 0; i <= 3; i++) {
                for (j = 0; j <= 3; j++) {
                    cout << "Numro  cita"; i + 1;
                    cout << "Nombre el paciente:"; nom[i][j];
                    cout << "Hora l trataminto (00:00)(24hrs)"; hr[i][j];
                    cout << "Nombre del tratamiento a realizar:"; nt[i][j];
                    cout << "Descripcion:";desc[i][j];
                    cout << "Precio unitario de tratamiento:"; p[i][j];
                    j = j + 1;
                }
                i = i + 1;            
                cout << item << " | ";
            }
            cout << endl;

            std::fill_n(nums.begin(), nums.size(), 0);

            cout << "| ";
            for (const auto& item : nums) {
                cout << item << " | ";
            }

            return EXIT_SUCCESS;
        }
        system("pause>nul");
        break;

    case 4:
        cout << "Lista de citas vigentes" << endl;
        for (i = 0; i <= 3; i++) {
            for (j = 0; j <= 3; j++) {
                cout << "Numro  cita"; i+1;
                cout << "Nombre el paciente:"; nom[i][j];
                cout << "Hora l trataminto (00:00)(24hrs)"; hr[i][j]; 
                cout << "Nombre del tratamiento a realizar:"; nt[i][j];
                cout << "Descripcion:";desc[i][j];
                cout << "Precio unitario de tratamiento:"; p[i][j];
                j = j + 1;
            }
            i = i + 1;
        }
        system("pause>nul");
        break;

    case 5:
        cout << "Limpiar pantalla" << endl;
        system("pause>nul");
        break;


    case 6:
        cout << "____________________________________________" << endl;
        cout << "Pulse cualquier tecla para regsar al inicio" << endl;
        system("pause>nul");
        break;
    }
   
    return 0;
}