#include <iostream>

using namespace std;

int main()
{
    cout << "Dame el primero numero binario, numero por numero"<<endl;//DEFINIMOS EL PRIMER BINARIO
    int a[4];
    for(int i=0; i<4 ; i++){
        cin>>a[i];
    }
    cout << "Dame el segundo numero binario, numero por numero"<<endl;//DEFINIMOS EL SEGUNDO BINARIO
    int b[4];
    for(int i=0; i<4; i++){
        cin>>b[i];
    }
    /* OJO, PARA INGRESAR LOS BINARIOS SI INGRESAN DE DERECHA A IZQUIERDA, LA OPERACION LA REALIZA DE DERECHA A IZQUIERDA Y SOLO LO ORDENA EN EL ULTIMO FOR QUE IMPRIME*/

     //CREAMOS VARIABLE GLOBAL
    int result[4];
    int acarreo = 0;
    for(int i = 0; i <= 3; i++){ // AQUI SUMA CADA ELEMENTO LOS BINARIOS

        if(a[i] + b[i] + acarreo == 0){
            result[i] = 0;
            acarreo = 0;
        }
        else{

            if(a[i] + b[i] + acarreo == 1){
                result[i] = 1;
                acarreo = 0;
            }
            else{
                if(a[i] + b[i] + acarreo == 2){
                    result[i] = 0;
                    acarreo = 1;
                }

                else {//(a[i] + b[i] + acarreo > 2){
                    result[i] = 1;
                    acarreo = 1;
                }
                }
        }
    }
    for(int j = 0; j <= 3; j++){ // ES PARA IMPRIMIR EL RESULTADO , ESTABA AL REVES
        cout<<result[3-j]<<" ";
    }
    return 0;
}
