/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
string nome [] = {"Sara Lemes","Ricardo Jafé"};
double salario [] = {12000, 10243.20};
int idade[]={30, 45};

int main()
{
    
int op;

cout << "\nEscolha uma das opções a baixo:"; 
cout << "\n1) Listar apenas os nomes"; 
cout << "\n2) Listar todos os dados com o aumento de 10% no salario"; 
cout << "\n3) Sair do programa\n"; 
 
 cin >> op; 
 
 
 if (op==1){
     
    cout << "\nEscolha 1";  
    
     for (int i = 0; i < 2 ; i ++) { 
    
     cout << "\n" << nome [i];    
    
    
}
     
 } else if (op==2){
     
    cout << "\nEscolha 2";  
    
    for (int i = 0; i < 2 ; i ++) { 
        
    
    salario [i] = salario [i]*1.1;   
    
     cout << "\n" << nome [i] << "-" << idade [i] << "-" << salario [i];    
    
    
}
     
 } else if (op==3){
     
    cout << "\nEscolha 3";  
    
    return 0;
     
 }else{
     
    cout << "\nOpção não contida";  
     
 }
    
   

    return 0;
}
