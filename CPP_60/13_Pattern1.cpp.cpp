#include<iostream>
using namespace std;

int
main ()
{

  int n, m;
  //cin >> n>>m;
  cin >> n;

//   for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//   for (int i = 1; i <= n; i++)
//  {
//    for (int j = 1; j <= m; j++)
//      {
//        if (i<=m-j) //1<2-1=1 1<2-2=0
//          {
//            cout <<"";
//          }
//        else
//          {
//            cout <<i;
//          }
//      }
//         cout<<endl;
//  }
  // int count=1;
  // for(int i=1; i<=n; i++){
  //     for(int j=1; j<=i; j++){
  //         cout<<count<<"";
  //         count++;
  //     }cout<<endl;
  // }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            
            cout<<"*";
        }    
        int space=2*n - 2*i; //2*4 - 2*1 = 6
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            
            cout<<"*";
        }
        
      
        cout<<endl;;
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            
            cout<<"*";
        }    
        int space=2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            
            cout<<"*";
        }
        
      
        cout<<endl;;
    }


  return 0;
}
