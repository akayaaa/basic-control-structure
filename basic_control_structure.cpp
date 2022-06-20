#include<iostream>
using namespace std;

int main(){
    cout<<"Welcome to my first C++ program!"<<endl;
    cout<<"Please select a task to perform (-1 to exit):"<<endl;
    cout<<"\n1) Draw a pyramid";
    cout<<"\n2) Draw a star";
    cout<<"\n3) Compute the Fibonacci numbers"<<endl;
    int num;
    cin>>num;
    if(!(num==1||num==2||num==3))
    {
        cout<<"You have entered an invalid value for selection."<<endl;
    }
    else
    {
        while(1){
            if(num==1){
                int i,j,spc,rows,k;
                cout<<"Please enter the height of the pyramid (between 1 and 40): ";
                cin >> rows;
                if(rows<1||rows>40){
                    cout<<"You have entered an invalid value for height."<<endl;
                }else{
                spc=rows+4-1;
                for(i=1;i<=rows;i++){
                    for(k=spc;k>=1;k--)
                    {
                        cout<<" ";
                    }
                    for(j=1;j<=i;j++)
                    cout<<"*"<<" ";
                    cout<<endl;
                    spc--;
                }
                }
            }
            else if(num==2){
                int number;
                cout<<"Please enter the size of the star (between 1 and 20): ";
                cin>>number;
                if(number<1||number>20){
                    cout<<"You have entered an invalid value for index."<<endl;
                }else{
                int i, j, count;
                count = number*2-1;
                for (i = 1; i <= count; i++)
                {
                    for (j = 1; j <= count; j++)
                {
                if(j==i||(j==count-i+1))
                {
                    cout<<"*";
                }else{
                cout<<" ";
                }
                }
                cout<<"\n";
                }
                }
            }
            else if(num==3){            
                int a, b, c, i, n;
                cout<<"Please enter the index of the Fibonacci number to be computed: ";
                cin>>n;
                a=0;
                b=1;
                c=0;
                for(i=1;i<=n;i++){
                    a=b;
                    b=c;
                    c=a+b;
            }
            cout<<"answer is :"<<c<<endl;
                }
        }
    }
    return 0;
}