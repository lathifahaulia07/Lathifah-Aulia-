/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() 
{
    
    int data;
    float nilai, jumlah, rata;
    
    cout << "\t Menghitung Jumlah & Rata-rata Nilai \n\n";
    
    cout << "Masukkan Jumlah Data : ";
    cin  >> data;
    cout << endl;
    
    for ( int i= 1; i<= data; i++)
    {
        cout<< "Data Nilai ke-" << i<< ":";
        cin>> nilai;
        
        jumlah += nilai;
        
    }
    
    cout<< "\n Jumlah Semua Nilanya :" << jumlah;
    
    rata= jumlah / data;
    cout<< "\n Nilai Rata-ratanya : " << rata;
    
   

    return 0;
}

