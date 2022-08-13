/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "iostream"
#include "math.h"
using namespace std;




int main()
{
    
int n;

cout << "\nQuantos registros haverão? Min:1 | Max:4 :"; 
cin >> n; 


string nome[n];  
int cpf[n]; 
string endereco [n]; 
string email [n];
string telefone [n];    
    
    if(n>4){
        
    cout<<"Erro";
        
        
    }else{
        
     for (int i = 0; i < n ; i ++) { 
     
    cout << "\nQual o nome da pessoa " << i+1 << "?"; 
    cin >> nome[n];  
    
    cout << "\nQual o CPF da pessoa " << i+1 << "?"; 
    cin >> cpf[n];  
     
    cout << "\nQual o endereco da pessoa " << i+1 << "?"; 
    cin >> endereco [n]; 
    
    cout << "\nQual o email da pessoa " << i+1 << "?"; 
    cin >> email [n]; 
    
    cout << "\nQual o telefone da pessoa " << i+1 << "?"; 
    cin >> telefone [n]; 
 }      
        
    }
    
   
    
    
    
}