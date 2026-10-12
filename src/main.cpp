/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR)
   E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
   Curso: 5° Año 3° División
   Profesor: Prof. York
   Estudiante: Sofia Mojica
   Archivo: main.cpp
   Objetivo: Control de accesos operando directamente sobre la RAM con punteros.
   ====================================================================
*/

#include <iostream>

using namespace std;

int main() {
    int edad = 0;
    int* p = &edad; // El puntero 'p' guarda la dirección de memoria física de 'edad'

    // ====================================================================
    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // Modifiquen la salida agregando su Nombre y Apellido reales.
    // ====================================================================
    cout << "=====================================================" << endl;
    cout << "   CONTROL DE ACCESO RAM - ESTUDIANTE: Sofia Mojica   " << endl;
    cout << "=====================================================" << endl;

    cout << "=> Ingrese su edad: ";
    
    // ====================================================================
    // 1. CAPTURA MEDIANTE DESREFERENCIACIÓN
    // Usamos '*p' para guardar el número directo en el casillero de 'edad'.
    // ====================================================================
    cin >> *p; 

    cout << "\n--- ANALIZANDO ACCESO SEGURO EN MEMORIA ---" << endl;
    
    // ====================================================================
    // 2. CONDICIONAL CON PUNTERO DESREFERENCIADO
    // Evaluamos el valor alojado en la memoria usando '*p >= 18'.
    // ====================================================================
    if (*p >= 18) {
        cout << "[ACCESO APROBADO] El usuario es mayor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    } else {
        cout << "[ACCESO RECHAZADO] Menor de edad." << endl;
        cout << "Edad registrada: " << *p << " anos." << endl;
        cout << "Direccion fisica en RAM Hexadecimal: " << p << endl;
    }

    cout << "=====================================================" << endl;
    return 0; // Finalización exitosa de Windows (Código 0)
}
