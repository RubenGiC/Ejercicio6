/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "utilidades.h"
#include <iostream>

using namespace std;

int main(){
    const int SIZE=20;
    int vec[SIZE]{0};
    int util=0, utilSecuenciaCreciente=0;
    const int *pmin;
    const int *pmax;
    int secuenciaCreciente[SIZE]{0};
    
    leerContenido(vec,util);
    
    hallarMinMax(vec, util,pmin,pmax);
    
    cout << endl << endl << "El minimo es: " << *pmin << " -- " << pmin << endl;
    cout << endl << "El maximo es: " << *pmax << " -- " << pmax << endl << endl;
    
    imprimirArray(vec,util);
    
    obtenerMayorSecuenciaMonotonaCreciente(vec, util,secuenciaCreciente,utilSecuenciaCreciente);
    
    imprimirArray(secuenciaCreciente,utilSecuenciaCreciente);
    
    return 0;
}