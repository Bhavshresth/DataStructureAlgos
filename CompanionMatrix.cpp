//Companion Matrix to find the fibonacci number using matrix multiplication and power function
#include<iostream>
#include<vector>
using namespace std;
 
long long int power(long long int a, long long int n, long long int mod){//used to find the power of a number
    long long int ans = 1;
    
    while(n>0){
        if(n%2==1){
            ans = (ans * a) % mod;
        }       
        a = ( a*a ) % mod;  
        n = n/2;
    }
        
    return ans % mod;   
}
 
void multiply(long long int a[2][2], long long int b[2][2], long long int mod){//used to multiply two matrix
    long long int ans[2][2];
    for(int i=0;i<2;i++)    
    {    
        for(int j=0;j<2;j++)    
        {    
            ans[i][j]=0;    
            for(int k=0;k<2;k++)    
            {    
                ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]) % mod;    
                ans[i][j] = ans[i][j] % mod;
            }    
        }    
    }    
    
    for(int i=0;i<2;i++)    
    {    
        for(int j=0;j<2;j++)    
        {
              a[i][j] = ans[i][j];//used to store the result matrix into the a matrix
        }
    }
}
 
int powerMatrix(long long int a[2][2], long long int n, long long int mod){//used to find the power of a matrix
    long long int ans[2][2] = { {1,0},{0,1} };
    
    while(n>0){
        if(n%2==1){
            multiply(ans, a, mod);
        }               
        multiply(a, a, mod);
        n = n/2;
    }
        
    return ans[0][0];
}
 
int main(){
 
    int n = 12;
    long long int a[2][2] = { {1,1},{1,0} };
    
    cout<<powerMatrix(a,n-1,1000000007)<<endl;//used n-1 as derived from the formula
    
    return 0;
}
