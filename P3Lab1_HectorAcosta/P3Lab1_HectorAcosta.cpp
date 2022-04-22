#include <iostream>

using namespace std;

int main()
{
   
    char resp = 's';

    while (resp == 's' || resp == 'S') {

        int incognita;
        string initialEquation = "c^2 = a^2 + b^2";
        string aEquation = "a^2 = c^2 - b^2";
        string bEquationn = "b^2 = c^2 - a^2";

        cout << "----Teorema de Pitagoras----\n";
        cout << "Seleccione incognita A/B/C : \n";

        //El usuario ingresa la incognita
        cin >> incognita;
        
        if (incognita == 1) {
            cout << "Despejar para A: \n";
            cout << aEquation << endl ;

            int c;
            int b;

            // El usuario ingresa el valor de C
            cout << "\nIngrese valor de C: \n";
            cin >> c;

            // El usuario ingresa el valor de B
            cout << "\nIngrese valor de B: \n";
            cin >> b;

            //Validar que la hipotenusa es mayor que el cateto
            if ( c > b) {

                //Muestra la ecuacion a resolver
                cout << "Ecuacion: A^2 = " << c << "^2 - " << b << "^2\n";

                int cSquare = c * c;
                int bSquare = b * b;
                int subtraction = cSquare - bSquare;

                cout << "a^2 = " << cSquare << " - " << bSquare << endl;
                cout << "a^2 = " << subtraction << endl;

                int result;
                if (subtraction == 0 || subtraction == 1) {
                    result = subtraction;
                }else {
                    int i = 1;
                    int j = 1;
                    while(j <= subtraction){
                        i++;
                        j = i * i;
                    }

                    int resultTest = (i - 1) * (i - 1 );
                    //cout << "Result teast: " << resultTest;
                    if ( resultTest == subtraction) {
                        cout << "A = " << i-1 << endl;
                    } else {
                        cout << "El resultado de la raiz no es exacto \n";
                    }
          
                }
            } else {
                cout << "La hipotenusa debe ser mayor que el cateto \n";
            }

        } else if (incognita == 2) {

            cout << "Despejar para B: \n";
            cout << "Ecuacion: " << bEquationn << endl ;

            int c;
            int a;

            //El usuario ingresa el valor de c
            cout << "\nIngrese valor de C: \n";
            cin >> c;

            // El usuario ingresa el valor de a
            cout << "\nIngrese valor de B: \n";
            cin >> a;

            if ( c > a ) {
                // Muestra la ecuacion a resolver
                cout << "Ecuacion: b^2 = " << c << "^2 - " << a << "^2\n";

                int cSquare = c * c;
                int aSquare = a * a;
                int subtraction = cSquare - aSquare;

                cout << "b^2 = " << cSquare << " - " << aSquare << endl;
                cout << "b^2 = " << subtraction << endl;

                int result;
                if (subtraction == 0 || subtraction == 1) {
                    result = subtraction;
                }
                else {
                    int i = 1;
                    int j = 1;
                    while (j <= subtraction) {
                        i++;
                        j = i * i;
                    }

                    int resultTest = (i - 1) * (i - 1 );
                    if (resultTest == subtraction) {
                        cout << "B = " << i - 1 << endl;
                    }
                    else {
                        cout << "El resultado de la raiz no es exacto \n";
                    }
                }
            }else {
                cout << "La hipotenusa debe ser mayor que el cateto \n";
            }

        } else if ( incognita == 3 ) {
            cout << "Ecuacion inicial: \n" << initialEquation << endl;
            cout << "Ya esta despejado \n";

            int a;
            int b;

            //El usuario ingresa el valor de a
            cout << "\nIngrese valor de a: \n";
            cin >> a;

            // El usuario ingresa el valor de b
            cout << "\nIngrese valor de b: \n";
            cin >> b;

            int aSquare = a * a;
            int bSquare = b * b;
            int addition = aSquare + bSquare;

            cout << "C^2 = " << aSquare << " + " << bSquare << endl;
            cout << "C^2 = " << addition << endl;

            int result;
            if (addition == 0 || addition == 1) {
                result = addition;
            }
            else {
                int i = 1;
                int j = 1;
                while (j <= addition) {
                    i++;
                    j = i * i;
                }

                int resultTest = (i - 1) * (i - 1);
                if (resultTest == addition) {
                    cout << "C = " << i - 1 << endl;
                }
                else {
                    cout << "El resultado de la raiz no es exacto \n";
                }
            }

        } else {
            cout << "Opcion Invalida, Intente de nuevo \n";
        }

        cout << "\nDesea continuar calculando? s/n: \n";
        cin >> resp;
    }


    return 0;

}
