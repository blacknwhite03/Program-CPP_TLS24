// guessing random number game
#include <iostream>
#include <time.h>

using namespace std;

int main(){
    char answer;
    mainlagi:
    cout << "Bermain? (y/n) : ";
    cin >> answer;
    
    if(answer == 'y'){   
        srand(time(NULL));
        int angkaTebakan = rand() % 100;
        cout << angkaTebakan << endl;
        
        for(int i=0;i<5;i++){
            int angkaDitebak;
            
            cout << "Tebak Angka (1-100) : ";
            cin >> angkaDitebak;
            
            if(angkaDitebak == angkaTebakan){
                cout << "Anda Menang" << endl;
                break;
            }
            else if(angkaDitebak != angkaTebakan){
                if(i == 4){
                    cout << "Anda Kalah" << endl;
                    cout << "Angkanya adalah " << angkaTebakan << endl;
                }
                else{
                    if(angkaDitebak > angkaTebakan){
                        cout << "Anda Salah (turun)" <<  endl;
                    }
                    else{
                        cout << "Anda Salah (naik)" << endl;
                    }
                }
            }
        }
        goto mainlagi;
    }
    else if(answer == 'n'){
        cout << "Terimakasih telah bermain" << endl;
    }
    else{
        cout << "Silakan masukkan huruf yang valid" << endl;
        goto mainlagi;
    }
    
    return 0;
}