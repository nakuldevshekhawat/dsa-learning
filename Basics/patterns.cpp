#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << "- ";
        }
        for (int star = 0; star < 2 * i + 1; star++)
        {
            cout << "* ";
        }
        for (int space2 = 0; space2 < n - i - 1; space2++)
        {
            cout << "- ";
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << "- ";
        }
        for (int star = 0; star < 2 * n - 2 * i - 1; star++)
        {
            cout << "* ";
        }
        for (int space2 = 0; space2 < i; space2++)
        {
            cout << "- ";
        }
        cout << endl;
    }
}
void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << "- ";
        }
        for (int star = 0; star < 2 * i + 1; star++)
        {
            cout << "* ";
        }
        for (int space2 = 0; space2 < n - i - 1; space2++)
        {
            cout << "- ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << "- ";
        }
        for (int star = 0; star < 2 * n - 2 * i - 1; star++)
        {
            cout << "* ";
        }
        for (int space2 = 0; space2 < i; space2++)
        {
            cout << "- ";
        }
        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void print12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * n - 2 * i; k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
}
void print13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;

        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
        
        for(char j='A';j<='A' + i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    for(int i=1;i<= n;i++){
        
        for(char j='A';j<=n-i +'A';j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print16(int n){
    for(char i='A';i<=n-1 +'A';i++){
        for(char j='A';j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print17(int n){
    for (int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){
            cout<<"- ";
        }
        //char
        char ch ='A';
        int breakpoint=(2*i+1)/2;
        for(int k =0;k<2*i+1;k++){
            cout<<ch<<" ";
            if(k<breakpoint ) ch++;
            else ch--;
        }
        // space
        for(int l=0;l<n-i-1;l++){
            cout<<"- ";
        }
        cout<<endl;
    }
}
void print18(int n){
    for(int i=0;i<n;i++){
        
        for(char j='E'-i;j<='E';j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
//  void print19(int n){
//     for(int i=0;i<n;i++){
//         // star
//         for(int j=0;j<n-i;j++)
//     {
//         cout<<"* ";
//     }           
//     // space
//     for(int j=0;j<2*i;j++){
//         cout<<"- ";
//     }
//         // star
//          for(int j=0;j<n-i;j++)
//     {
//         cout<<"* ";
//     }   
//         cout<<endl;
//     }
//     for(int i=1;i<=n;i++){
//             // star
//         for(int j=1;j<i+1;j++)
//     {
//         cout<<"* ";
//     }           
//     // space
//     for(int j=1;j<=2*n - 2*i;j++){
//         cout<<"- f";
//     }
//         // star
//          for(int j=1;j<i+1;j++)
//     {
//         cout<<"* ";
//     } 
//     cout<<endl;
//     }
// }
void print19(int n){
    int initialspace=0;
    for(int i=0;i<n;i++){
        // star
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        // space
        for(int j=1;j<=initialspace;j++){
            cout<<"  ";
        }
        // star
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
        initialspace+=2;
    }
    initialspace=2*n-2;
    for(int i=0;i<n;i++){
        // star
        for(int j= 0;j<=i;j++){
            cout<<"* ";
        }
        // space
        for(int j=0;j<initialspace;j++){
            cout<<"  ";
        }
        // star
        for(int j= 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
        initialspace-=2;
    }
    
}
void print20(int n){
    int initspace =2*n-2;
    for(int i=1;i<=2*n-1;i++){ 
        int star=i;
        if(i>n) star = 2*n-i;
        // star
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        // space
        for(int j=1;j<=initspace;j++){
            cout<<"  ";
        }
        // star
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i<n) {
            initspace-=2;
        }
        else initspace+=2;

    }
}
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==0||i==n-1||j==0||j==n-1){
            cout<<"  *  ";
        }
        else cout<<"  *  ";

    }
    cout<<endl<<endl;
}
}
void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int bottom=2*n-1-1-i;
            int right=2*n-1-1-j;
            int val=n-min(min(top,bottom),min(left,right));
            cout<<val<<" ";
        }cout<<endl;
    }
}
int main()
{   
        int n;
        cin >> n;
        print22(n);  
}
