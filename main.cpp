#include <iostream>
#include <sstream>
using namespace std;

bool readmatr(int matrix[3][3])
{
    bool success = true;
    for( int i = 0; i < 3; ++i ) 
    {
        string string; 
        getline( cin, string );
        istringstream stream( string );
            for(int j=0;j<3;j++)
            {
            if( !( stream >> matrix[ i ][ j ] ) ) 
            {
                success = false;
                break;
            }
            }
            if(!(success)) 
            {
                break;
            }
    }
    
   return success;
}
int main()
{
    int matr1[3][3];int matr2[3][3]; string op;
    if (readmatr(matr1))
    {
        getline(cin,op);
        if(op=="+")
        {
            if (readmatr(matr2))            
            {
                for( int i = 0; i < 3; ++i )
                {
                    for( int j = 0; j < 3; ++j )
                    {
                        cout<<(matr1[i][j]+matr2[i][j])<<' ';
                    }
                    cout<<endl;
                }
            } 
            else 
            {
                cout << "An error has occured while reading input data" << endl;
                return -1;
            }
        }
        else  if(op=="-")
        {
            if (readmatr(matr2))
            {
                for( int i = 0; i < 3; ++i )
                {
                    for( int j = 0; j < 3; ++j )
                    {
                        cout<<(matr1[i][j]-matr2[i][j])<<' ';
                    }
                    cout<<endl;
                }
                }
            else 
            {
                cout << "An error has occured while reading input data" << endl;
                return -1;
            }
        }
        else if(op=="*")
        {
            if (readmatr(matr2))
            {
               for( int i = 0; i < 3; ++i )
               {
                    for( int j = 0; j < 2; ++j ) 
                    {
                        int result = 0;
                        for( int k = 0; k < 2; ++k ) 
                        {
                            result += matr1[i][k] * matr2[k][j];
                        }
                        cout <<result<<' ';
                    }
                        cout<<endl;
                }
            }
            else 
            {
                cout << "An error has occured while reading input data" << endl;
                return -1;
            }
        }
        else 
        {
            cout << "An error has occured while reading input data" << endl;
            return -1;
        }
    }
    else
    {
        cout << "An error has occured while reading input data" << endl;
    }
                
        
    
}
