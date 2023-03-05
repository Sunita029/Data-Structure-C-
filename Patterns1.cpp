#include <iostream>
using namespace std;

int main() {


 /* Printing Solid rectangle */ 
  for(int row = 0; row<3;row=row+1){  //Outer loop
    for(int col=0; col<5;col=col+1){  // inner loop
      cout<<"* " ;
    }
    cout<<"\n";
  }

  
/* ******************************************** */ 

  
   /* Printing Solid Square on input asked by user */ 
  int n;
  cin>>n;

  for(int row = 0 ; row < n; row++){
    for(int col = 0 ; col < n ; col++){
      cout<<"* ";
    }
    cout << endl;
  }
/* ******************************************** */ 
  
     /* Printing Hollow Rectangle  */ 

  for(int row = 0 ; row<3; row++){
    if(row == 0 || row == 2){
      for(int col=0;col<5;col++){
        cout<<"* ";
      }
    }
    else{
      cout<<"* ";
      for(int i = 0;i<3;i++){
        cout<<"  "; 
      }
      cout<<"* ";
    }
    cout<< endl;
  }

 /* ******************************************** */ 
  
     /* Printing Half Pyramid  */ 

  int n;
  cin>>n;

  for(int row = 0;row<n;row++){
    for(int col = 0; col<row+1; col++){
      cout<<"* ";
      
    }
    cout<<endl;
  }


   /* ******************************************** */ 
  
     /* Inverse Half Pyramid  */ 

  int n;
  cin>>n;

  for(int row = 0;row<n;row++){
    for(int col = 0; col<n-row; col++){
      cout<<"* ";
      
    }
    cout<<endl;
  }

     /* ******************************************** */ 
  
     /* Numeric Half Pyramid  */ 

  int n;
  cin>>n;

  first method
  
  for(int row = 1;row<=n;row++){
    for(int col = 1; col<=row; col++){
      cout<<col;
      
    }
    cout<<endl;
  }


  second method
  for(int row = 0;row<n;row++){
    for(int col = 0; col<row+1; col++){
      cout<<col+1;
      
    }
    cout<<endl;
  }


   /* ******************************************** */ 
  
     /* Inverse Numeric Half Pyramid  */ 

  int n;
  cin>>n;

  for(int row = 0;row<n;row++){
    for(int col = 0; col<n-row; col++){
      cout<<col+1;
      
    }
    cout<<endl;
  }
  
  
}