// 1. chiedere input dimensione array (n)
// 2. generare array random di n elementi (std::vector)
// 3. calcolare minimo, massimo e media
// int n;
// std::cout << "Inserire il numero di elementi:" << std::endl;
// std::cin >> n;
// 
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <stdio.h>


int main () {
	int n;
    int min;
    int max; 
	int i; 
	int l; 
	int c = 0;  ; 
	int p = 0;
	float media = 0;  
	int somma = 0; 
	int j ; 
	int t;
	std::cout << "Inserire il numero di elementi:" << std::endl;
	std::cin >> n;
	std::vector<int> array(n);
	std::srand(std::time(0));

	for( i=0; i<n; i++){
		array[i]= std::rand() % n;
		std::cout << "array :"<< array[i] << std::endl;
		somma = somma + array[i];
	}

std::cout << "\n" << std::endl;

	for(j=0; j<n; j++){
		min = j;
		for(i=j+1; i<n; i++){
 		  if(array[i] < array[min]){
    			
    			min = j;

				t=array[min];
				array[min]=array[i];
				array[i]=t;
			}
		}
		std::cout << "array :"<< array[min] << std::endl;

	}
		

	

	media = somma/n; 
	min = array[0]; 
	max = array[0];
	for(i=0; i<n; i++){
		if(min>array[i]){
			c=i;
			min=array[i];
		}

		if(max<array[i]){
			p=i;
			max=array[i];
		}


	}
	std::cout << "la media è : "<< media << std::endl;
	std::cout << "il massimo è : "<< max << std::endl;
	std::cout << "il massimo si trova nella posizione : "<< p+1 << std::endl;
	std::cout << "il minimo è : "<< min << std::endl;
    std::cout << "il minimo si trova nella posizione : "<< c+1 << std::endl;

	
	return 0;
}
