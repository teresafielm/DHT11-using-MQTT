#include "iostream"
#include <stdio.h>
#include <string.h>
#include"stdlib.h"

using namespace std;
string clave,clave2;//En esta variable estará almacenado el nombre ingresado.
int saldo=2000;//Variable global que guarda el saldo del usuario
int boletos;//Variable que almacenará el número de boletos para cada caso
int opcionp1,valorp1=0;
int opcionp2,valorp2=0;
int opcionp4,opcionp5;
int val=0;

int main()
{
    cout << "Bienvenido al zoológico de Guadalajara." << "\n" << "Por favor ingrese su clave de acceso:" << endl; //Impresión de bienvenida
    cin >> clave; //Se lee el nombre
    int salir=0;
    do
    {
        int opcion;
        cout << "\n"<<endl;
        cout << "Bienvenido al sistema AlZoo" <<endl;
        cout << "¿Qué desea realizar?"<<"\n" <<endl;
        cout << "1. Menú paquetes de adulto"<<endl;
        cout << "2. Menú paquetes de niño"<<endl;
        cout << "3. Realizar pago"<<endl;
        cout << "4. Recarga de tarjeta"<<endl;
        cout << "5. Salir"<<endl;
        cout << "\n\n"<<endl;
        cout << "Seleccione una opción (1-5)"<<endl;
        cin >> opcion;
        switch (opcion)
        {
            case 1:
            {
                cout << "Haz elegido el paquete de adultos."<<endl;
                cout<< "Selecciona una opción:"<<endl;
                cout<< "1. Guardazoo - $90 por boleto"<<endl;
                cout<< "2. Diamante  - $305 por boleto"<<endl;
                cout<< "3. Premiere  - $255 por boleto"<<endl;
                cout<< "4. Acuario   - $140 por boleto"<<endl;
                cout<< "5. Antártida - $125 por boleto"<<endl;
                cout<< "6. Safari    - $135 por boleto"<<endl;
                cout<< "7. Tren      - $125 por boleto"<<endl;
                cout << "\n\n"<<endl;
                cout << "Seleccione una opción (1-5)"<<endl;
                cin >> opcionp1;
                switch (opcionp1)
                {
                    case 1:
                    {
                        cout<<"¿Cuántos boletos Guardazoo requiere?"<<endl;
                        cin>>boletos;
                        valorp1=+boletos*90;
                    }
                    break;
                    case 2:
                    {
                        cout<<"¿Cuántos boletos Diamante requiere?"<<endl;
                        cin>>boletos;
                        valorp1+=boletos*305;
                    }
                    break;
                    case 3:
                    {
                        cout<<"¿Cuántos boletos Premiere requiere?"<<endl;
                        cin>>boletos;
                        valorp1+=boletos*255;
                    }
                    break;
                    case 4:
                    {
                        cout<<"¿Cuántos boletos Acuario requiere?"<<endl;
                        cin>>boletos;
                        valorp1+=boletos*140;
                    }
                    break;
                    case 5:
                    {
                        cout<<"¿Cuántos boletos Antártida requiere?"<<endl;
                        cin>>boletos;
                        valorp1+=boletos*125;
                    }
                    break;
                    case 6:
                    {
                        cout<<"¿Cuántos boletos Safari requiere?"<<endl;
                        cin>>boletos;
                        valorp1+=boletos*135;
                    }
                    break;
                    case 7:
                    {
                        cout<<"¿Cuántos boletos Tren requiere?"<<endl;
                        cin>>boletos;
                        valorp1+=boletos*125;
                    }
                    break;
                    default:
                        cout<<"Lo sentimos, el valor que ingresó no es válido."<<endl;
                    break;
                }
            }
            break;
            case 2:
            {
                cout << "Haz elegido el paquete de niños."<<endl;
                cout<< "Selecciona una opción:"<<endl;
                cout<< "1. Guardazoo - $55 por boleto"<<endl;
                cout<< "2. Diamante  - $225 por boleto"<<endl;
                cout<< "3. Premiere  - $175 por boleto"<<endl;
                cout<< "4. Acuario   - $85 por boleto"<<endl;
                cout<< "5. Antártida - $80 por boleto"<<endl;
                cout<< "6. Safari    - $85 por boleto"<<endl;
                cout<< "7. Tren      - $95 por boleto"<<endl;
                cout << "\n\n"<<endl;
                cout << "Seleccione una opción (1-5)"<<endl;
                cin >> opcionp2;
                switch (opcionp2)
                {
                    case 1:
                    {
                        cout<<"¿Cuántos boletos Guardazoo requiere?"<<endl;
                        cin>>boletos;
                        valorp2=+boletos*55;
                    }
                    break;
                    case 2:
                    {
                        cout<<"¿Cuántos boletos Diamante requiere?"<<endl;
                        cin>>boletos;
                        valorp2+=boletos*225;
                    }
                    break;
                    case 3:
                    {
                        cout<<"¿Cuántos boletos Premiere requiere?"<<endl;
                        cin>>boletos;
                        valorp2+=boletos*175;
                    }
                    break;
                    case 4:
                    {
                        cout<<"¿Cuántos boletos Acuario requiere?"<<endl;
                        cin>>boletos;
                        valorp2+=boletos*85;
                    }
                    break;
                    case 5:
                    {
                        cout<<"¿Cuántos boletos Antártida requiere?"<<endl;
                        cin>>boletos;
                        valorp2+=boletos*80;
                    }
                    break;
                    case 6:
                    {
                        cout<<"¿Cuántos boletos Safari requiere?"<<endl;
                        cin>>boletos;
                        valorp2+=boletos*85;
                    }
                    break;
                    case 7:
                    {
                        cout<<"¿Cuántos boletos Tren requiere?"<<endl;
                        cin>>boletos;
                        valorp2+=boletos*95;
                    }
                    break;
                    default:
                        cout<<"Lo sentimos, el valor que ingresó no es válido."<<endl;
                    break;
                }
            }
            break;
            case 3:
            {
                int park,park2;
                int total;
                cout<<"Haz elegido la opción realizar pago. "<<endl;
                cout<<"A continuación se muestra el total de tu compra: "<<endl;
                cout<<"\n\n"<<endl;
                if(valorp1>=1)
                {
                    cout<<"Paquetes de adultos: "<<endl;
                    cout<<"$"<<valorp1<<endl;
                    cout<<"\n"<<endl;
                }
                if(valorp2>=1)
                {
                    cout<<"Paquetes de niños: "<<endl;
                    cout<<"$"<<valorp2<<endl;
                    cout<<"\n"<<endl;
                }
                cout<<"TOTAL A PAGAR:"<<endl;
                cout<<"$"<<valorp1<<"+"<<valorp2<<"="<<valorp1+valorp2<<endl;
                cout<<"\n\n"<<endl;
                cout<<"¿Desea pagar el estacionamiento con su tarjeta de prepago? (El costo es de $50)"<<endl;
                cout<<"Pulse 1 para si y 0 para no: "<<endl;
                cin>>park;
                if(park==1)
                {
                    system("cls");
                    cout<<"A continuación se muestra el total de tu compra: "<<endl;
                    cout<<"\n\n"<<endl;
                    if(valorp1>=1)
                    {
                        cout<<"Paquetes de adultos: "<<endl;
                        cout<<"$"<<valorp1<<endl;
                        cout<<"\n"<<endl;

                    }
                    if(valorp2>=1)
                    {
                        cout<<"Paquetes de niños: "<<endl;
                        cout<<"$"<<valorp2<<endl;
                        cout<<"\n"<<endl;
                    }
                    cout<<"Estacionamiento: "<<endl;
                    cout<<"$50"<<endl;
                    cout<<"\n"<<endl;
                    cout<<"TOTAL A PAGAR:"<<endl;
                    cout<<"$"<<valorp1<<" + $"<<valorp2<<" + $50 = "<<valorp1+valorp2+50<<endl;
                    cout<<"\n\n"<<endl;
                    cout<<"Su total a pagar es de: "<<valorp1+valorp2+50<<endl;
                    cout<<"Digite su clave de acceso: "<<endl;
                    cin>>clave2;
                    int x,y;
                    x=clave.size();
                    y=clave2.size();
                    if(x==y)
                    {
                        if(clave==clave2)
                        {
                            total=valorp1+valorp2+50;
                            if(saldo-total<0)
                            {
                                cout<<"Lo sentimos, no cuenta con suficiente saldo para realizar su compra."<<endl;
                                cout<<"Le recomendamos realizar una recarga en el menú principal."<<endl;
                                system("pause");
                                system("cls");
                            }
                            else
                            {
                                if(total>=1000)
                                    {
                                        cout<<"Debido a que sus compras superaron los 1000 pesos, se ha hecho acreedor de: "<<endl;
                                        cout<<"Una bebida gratis para toda la familia.\n"<<endl;
                                    }
                                saldo-=total;
                                cout<<"Su saldo restante es de: "<<saldo<<endl;
                            }
                        }
                        else
                        {
                        cout<<"Lo sentimos, las claves no son iguales."<<endl;
                        }
                     }
                    else
                    {
                        cout<<"Lo sentimos, las claves no son iguales."<<endl;
                    }
                }
                else
                {
                    cout<<"Su total a pagar es de: "<<valorp1+valorp2<<endl;
                    cout<<"Digite su clave de acceso: "<<endl;
                    cin>>clave2;
                    int x,y;
                    x=clave.size();
                    y=clave2.size();
                    if(x==y)
                    {
                        if(clave==clave2)
                        {
                            total=valorp1+valorp2;
                            if(saldo-total<0)
                            {
                                cout<<"Lo sentimos, no cuenta con suficiente saldo para realizar su compra."<<endl;
                                cout<<"Le recomendamos realizar una recarga en el menú principal."<<endl;
                                system("pause");
                                system("cls");
                            }
                            else
                            {
                                if(total>=1000)
                                    {
                                        cout<<"Debido a que sus compras superaron los 1000 pesos, se ha hecho acreedor de: "<<endl;
                                        cout<<"Una bebida gratis para toda la familia."<<endl;
                                    }
                                saldo-=total;
                                cout<<"Su saldo es de: "<<saldo<<endl;
                            }
                        }
                        else
                        {
                        cout<<"Lo sentimos, las claves no son iguales."<<endl;
                        }
                     }
                    else
                    {
                        cout<<"Lo sentimos, las claves no son iguales."<<endl;
                    }
                }
            valorp1=valorp2=0;
            }
            break;
            case 4:
                {
                    cout<<"Usted ha elegido la opción de realizar recarga."<<endl;
                    cout<<"Por favor, elige el monto a recargar en tu tarjeta: "<<endl;
                    cout<<"\n\n"<<endl;
                    cout<<"1. $300"<<endl;
                    cout<<"2. $500"<<endl;
                    cout<<"3. $800"<<endl;
                    cout<<"\n\n"<<endl;
                    cin>>opcionp4;
                    switch(opcionp4)
                    {
                    case 1:
                        {
                            cout<<"Su saldo recargará $300"<<endl;
                            saldo=saldo+300;
                            cout<<"Su saldo tras la recarga es de:"<<saldo<<endl;
                            val=val+1;
                            if(val==3)
                                {
                                    cout<<"Debido a que realizó tres recargas de $300, se ha hecho acreedor a: "<<endl;
                                    cout<<"$100 de bonificación."<<endl;
                                    saldo=saldo+100;
                                    cout<<"Su saldo ahora es de: "<<saldo<<endl;
                                }
                        }break;
                    case 2:
                        {
                            cout<<"Su saldo recargará $500"<<endl;
                            saldo=saldo+500;
                            cout<<"Su saldo tras la recarga es de:"<<saldo<<endl;
                        }break;
                    case 3:
                        {
                            cout<<"Su saldo recargará $800"<<endl;
                            saldo=saldo+800;
                            cout<<"Su saldo tras la recarga es de:"<<saldo<<endl;
                        }break;
                    default:
                        {
                            cout<<"Lo sentimos, el valor ingresado no es válido."<<endl;
                        }
                    }
                }
                break;
            case 5:
                {
                    cout<<"¿Realmente desea salir del menú?"<<endl;
                    cout<<"Presione 1 para si y 0 para no"<<endl;
                    cin>>opcionp5;
                    if(opcionp5==1)
                    {
                        cout<<"Esperemos haya disfrutado su día en el Zoológico Guadalajara"<<endl;
                        system("pause");
                        salir=2;
                    }
                    else
                    {
                        if(opcionp5==0)
                        salir=0;
                        else
                        cout<<"Opción no válida."<<endl;
                    }
                }
                break;
                default:
                    cout<<"Lo sentimos, el valor que ingresó no es válido."<<endl;
        }
    }while(salir==0);
   return 0;
}
