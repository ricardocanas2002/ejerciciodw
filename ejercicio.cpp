#include <iostream>

using namespace std;

int main (){

    float saldo = 1000.0;
    float deposito = 0.0;
    float retiro = 0.0;
    int opcion = 0;

    do {
    cout<<"-------- MENU DE CAJERO AUTOMATICO ----------" <<endl;
    cout<<"----------- 1. Consultar saldo --------------" <<endl;
    cout<<"----------- 2. Depositar dinero -------------" <<endl;
    cout<<"----------- 3. Retirar dinero ---------------" <<endl;
    cout<<"---------------- 4. Salir -------------------" <<endl;
    cout<<"---------------------------------------------" <<endl;
    cin>>opcion;

        switch (opcion){
            //Consultar dinero
            case 1:
                cout<<"Su saldo es de $ " << saldo << endl;
                break;
            //Depositar dinero
            case 2:
                cout<<"Ingrese la cantidad de dinero a depositar: " << endl;
                cin>>deposito;   
                if (deposito < 0.1 or deposito > saldo){
                    cout<<"Dato erroneo, ingrese un numero valido" <<endl;
                }
                else {
                    saldo = saldo + deposito;
                    cout<<"Usted tiene $" << saldo << " en su cuenta" << endl;
                }
                break;
            //Retirar dinero
            case 3:
                cout<<"Ingrese la cantidad de dinero que desea retirar: " << endl;
                cin>>retiro;
                if (retiro < 0.1 or retiro > saldo){
                    cout<<"Dato erroneo, ingrese un numero valido" << endl;
                }
                else {
                    saldo = saldo - retiro;
                    cout<<"Queda la cantidad de $ " << saldo << " en su cuenta." << endl;
                }
                break;
            //Salir del menu
            case 4:
                cout<<"Saliendo del programa..." <<endl;
        }
    }
    while (opcion !=4);

    return 0;
}