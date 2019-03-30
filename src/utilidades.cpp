
#include "utilidades.h"
using namespace std;


void leerContenido(int *coleccion, int & util){
    do{
      cout << "Introduce cuantos: ";
      cin >> util;
    }while (util > CAPACIDAD);
    
    for(int i = 0; i < util; i++){
        cin >> coleccion[i];
    }   
}

/**
 * @brief Muestra los elementos del array en la salida estandar
 * @param array array a imprimir
 * @param utilArray numero de elementos utiles en el array
 * @pre array debería contener al menos un elemento
 */
void imprimirArray(const int *array, int utilArray) {
    cout << utilArray << ' ';
    for (int i = 0; i < utilArray; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

/**
  * @brief Obtiene un array con la secuencia más larga creciente de números enteros
  * @param array puntero a primer componente del array de entrada
  * @param utilArray numero de elementos utiles en el array
  * @param secuenciaCreciente puntero a primer componente de salida con la secuencia más larga creciente
  * @param util_secuenciaCreciente numero de elementos utiles en secuenciaCreciente
 */
void obtenerMayorSecuenciaMonotonaCreciente(const int *array, int utilArray,int * secuenciaCreciente,int &utilSecuenciaCreciente) {
    
    //compruebo que el array no este vacio
    if(utilArray>0){
        
        int long_actual=1;
        const int * pos_actual=array;
        const int * pos_max=array;
        
        //inicializo el util de la secuencia creciente
        utilSecuenciaCreciente=1;
        
        //recorro el array
        for(const int * i = array+1; i<array+utilArray; i++){
            
            //si el valor de la posicion i es mayor a la posicion i-1 entra
            if(*i>*(i-1)){
                
                //incremento la longitud actual
                long_actual++;
                if(long_actual>utilSecuenciaCreciente){
                    //mete la longitud_actual en el tamaño que va a ser utilizado utilSecuenciaCreciente
                    utilSecuenciaCreciente=long_actual;
                    //modifico la posicion maxima por la posicion actual
                    pos_max=pos_actual;
                }
            }else{
                //en caso contrario resetea los valores de long_actual y pos_actual
                long_actual=1;
                pos_actual=i;
            }
            
        }

        //recorro el vector a partir de la posicion_max y guarda los valores en el vector secuenciaCreciente
        for(int * i=secuenciaCreciente;i<secuenciaCreciente+utilSecuenciaCreciente;i++){
            *i = *pos_max;
            pos_max++;
        }
        
    }                    
}
                                            
                                    
void hallarMinMax(const int * array, int utilArray, const int * & pmin, const int * & pmax){
    //pmin y pmax se pueden modificar pero a lo que apunta no
    pmin = array;
    pmax = array;
    
    for(const int * p=array;p<array+utilArray;p++){
        
        if(*p<*pmin){
          pmin=p;
        }
        if(*p>*pmax){
            pmax=p;
        }
    }
    
}

