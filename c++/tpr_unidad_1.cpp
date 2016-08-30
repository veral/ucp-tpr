#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    /*
     * Tipos de Datos utilizados en c y su asignaci�n en bytes.
     */
	cout << "Tipos de Datos utilizados en c y su asignaci�n en bytes." << endl;
   cout << "Tama�o en Bytes de un char : " << sizeof(char) << endl;
   cout << "Tama�o en Bytes de un int : " << sizeof(int) << endl;
   cout << "Tama�o en Bytes de un short int : " << sizeof(short int) << endl;
   cout << "Tama�o en Bytes de un long int : " << sizeof(long int) << endl;
   cout << "Tama�o en Bytes de un float : " << sizeof(float) << endl;
   cout << "Tama�o en Bytes de un double : " << sizeof(double) << endl;
   cout << "Tama�o en Bytes de un wchar_t : " << sizeof(wchar_t) << endl;
	system("PAUSE");
	
	/*
	 * Direcciones de Memoria de las variables.
	 */
	cout << "Direcciones de Memoria de las variables." << endl;
	int  var1;
	char var2[10];
	
	cout << "Direcci�n de var1 en la memoria: ";
	cout << &var1 << endl;
	
	cout << "Direcci�n de var2 en la memoria: ";
	cout << &var2 << endl;
	system("PAUSE");
	
	/*
	 * Declaraci�n de Variables.
	 */
	string nombre; //En esta variable estar� almacenado el nombre ingresado.
	float numero1, numero2; //Se declaran los n�meros que se sumar�n (pueden ser decimales) 
	int hasta = 5; // Dato de Hasta cuando debe funcionar el ciclo.
	int contador = 0; // Realizar la cuenta de las iteraciones.
	
	/*
	 * Imprimiendo Variables
	 */
	cout << "Hola! Este tu primer programa en C++" << "\n" << "Por favor ingrese su nombre:" << endl; //La instrucci�n \n es un salto de l�nea Mostrando los textos separados
	cin >> nombre; //Se lee el nombre
   	cout << "Bienvenido al sistema " << nombre << ". Gracias por usar la aplicaci�n" << endl;

	/*
	 * Trabajando con n�meros y operaciones aritm�ticas
	 */
    cout << "Realicemos una suma!" << endl;//Mensaje 
    
    cout << "Por favor ingrese el primer valor: " << endl; //Se pide el primer numero    
    cin >> numero1; //Se asigna el primer valor a numero1
    
    cout << "Por favor ingrese el segundo valor: " << endl; //Se pide el segundo numero    
    cin >> numero2; //Se asigna el segundo valor a numero2
    
    cout << "El resultado de la suma de " << numero1 << " + " << numero2 << " es: " << numero1 + numero2 << endl; //Se muestra el resultado.  
	
	system("PAUSE");
	
	/*
	 * Trabajando con estructuras de control sentencias IF - ELSE
	 */
	
	if (numero1 > numero2) {
        cout << "El n�mero 1: " << numero1 << "es mas grande que el n�mero 2: " << numero2 << "\n" << endl;
    } else if (numero1 < numero2) {
        cout << "El n�mero 2: " << numero2 << "es mas grande que el n�mero 1: " << numero1 << "\n" << endl;
    } else {
        cout << "Los n�meros son iguales." << "\n" << endl;
    }
	
	/*
	 * Trabajando con estructuras de control sentencias FOR, WHILE, DO WHILE
	 */
	
	for (contador = 0; contador < hasta; contador++) {
        cout << "Contador: " << contador << "\n" << endl;
    }


	while (contador > 0) {
        cout << "Contador: " << contador << "\n" << endl;
        contador--;
    }

	system("PAUSE");

	/*
	 * Manejo de Excepciones
	 *
	 *	try
	 *	{
	 *	   // El codigo que se debe ejecutar y que se protege
	 *	{
	 *	  // Codigo para manejar la excep
	 *	}
	 */

	try
	{
		double resultado = 0;
		double a = 10;
		double b = 0;
	
		if (b == 0){
			throw 5000;
		}
		
		resultado = a / b;
		
	}catch(int error){
		
		if(error == 5000){
         	cout << "La division no puede ser por 0. Numero de Error:" << error << endl;
    	}
	}

	system("PAUSE");
	return 0;
}
