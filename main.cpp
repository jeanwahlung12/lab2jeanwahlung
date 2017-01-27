#include <iostream>
#include <stdio.h>      
#include <stdlib.h>    
#include <time.h>       
using namespace std;
int num1 ;
int num2;
int user;
bool resp;
int band;
int bandera=500;
int bandera2=1;
bool ciclo = true;
int numeroelec;
int main (){
	srand((unsigned int) time (NULL));
	cout << "ingrese el numero de ejercicio 1/2/3";
	cin >> user;
	if (user ==1){
		cout << " ingrese el numero 1/pensador 2/ adivinador";
		cin >> num1;
		if (num1 ==1){
		
			num2 = (rand()%(500 - 1)) + 1;		
			while (ciclo ==true){

				cout << num2 << endl;
				cout <<" 1/el numero es mayor  2/el numero es menor  3/el numero es correcto";
				cin >> numeroelec;
				if (numeroelec ==1){
					
					bandera2 = num2;
    					num2 = (rand()%(bandera - bandera2)) + bandera2;
					if (bandera-bandera2 <=1){
						cout<< " Ya lo Adivine";	
					}
				}
				if (numeroelec ==2){
					
					bandera = num2;		
			                num2 = (rand()%(bandera - bandera2)) + bandera2;
					
					if (bandera-bandera2 <=1){
                                                cout<< " Ya lo Adivine";
                                        }

				


				}
				else if (numeroelec ==3){
					ciclo = false;
					cout << " a GANADO EL JUEGO";
					
				}
			}
		
		
		}
		int numeror;
		int b;
                if (num1 ==2){

                       
               		 num2 = (rand()%(500 - 1)) + 1;
			cout <<"el numero seleccionado por la maquina es :" << num2 << endl;
                        while (ciclo ==true){
				cout << "el numero es :";
				cin >> numeror;
				if ( numeror > num2){
					cout << " es menor " << endl;
					b =numeror;
				}
				if (numeror < num2){
					cout << " es mayor" << endl;
				}
				else if (numeror == num2) {
					cout << " adivinaste " << endl;
					ciclo = false;
					return 0;
	 
                		}
			}
	        }        
	}
	int n;
	int n2;
	int cont = 0;
	int cont2 =0;
	if (user ==3){
		cout << "ingrese el primer numero: ";
		cin >> n;
		cout << " ingrese el segundo numero:";
		cin >> n2;
		for (int t=1;t<n;t++){
			if (n%t==0){
				cont+=t;
				

			}
		
		}for (int i=1;i<n2;i++){
                        if (n2%i==0){
                                cont2+=i;
				
                        }
                }
		cout << cont << endl ;
		cout << cont2;
		
		if (cont == n2 && cont2 ==n){
			cout << " son numeros Amigos";

	 	}else {
			cout << " no son amigos";
		}
	}
	return 0;
}
	
				
		
	
