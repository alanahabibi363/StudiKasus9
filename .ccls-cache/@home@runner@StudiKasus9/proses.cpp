#include "../base.h"
#include <string.h>
using namespace std;
  
 

void tabel::proses(){


string data_A[100]={"A","1900018018","Andri Pengestu"," ","1900018029", "Sadajiwa Kuncoro"," ", "2000018011", "Sasa Nur Safitri", " ","2000018023", "Karin Ayu"," ", "2000018030", "Dika Saputra","B","1900018001","Sandika aji"," ","2000018045", "Putri Larasati"," ", "2000018046", "Najib Nur Kholisa", " ","2000018048", "Ayu Dewi Kencana"," ", "2000018050", "Kirana Sekar","C","1900018033","Sadewa Jatmiko"," ","1900018101", "Cipta Dewandaru"," ", "1900018150", "Endra Iswaman", " ","2000018056", "Laksana Lingga"," ", "2000018060", "Mada Nismara"};
  string output[50][50];
  
  int i,j,k,l;
  int x=0;
  

  //menampilkan array 1 dimensi
  for (int j=0; j<45; j++){
    cout<<data_A[j];
  }
  cout<<endl;


  //perubahan array 1D menjadi 2D
  for(int k=0; k<15; k++){
    for(int l=0; l<3; l++){
      output[k][l]=data_A[x];
      x++;
    }
  }

  //menampilkan array 2D
  for(int k=0; k<15; k++){
    for(int l=0; l<3; l++){
      cout<<output[k][l]<<"  ";
    }
    cout<<endl;
  }  
}

int main (){
  tabel X;
  X.proses();

  return 0;
}
  