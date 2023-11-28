

                               // HOME TASK FOR LAB 6



//#include<iostream>
//using namespace std;
//int main(){
	
	
                            	// TASK 1
	
	
/*int sum=0;
for(int i=0;i<50;i++){
if(i%2!=0){
	sum+=i;
continue;}
cout<<sum<<endl;

}
return 0;

}*/


                                 // TASK 2

 /*int n=0;
cout<<"enter n :"<<endl;
cin>>n;
for(int i=1; i<=n; i++){
	for(int j=1;j<=i;j++){
		cout<<' '<<endl;
		cout<<i<<endl;
	}
	
}return 0;

                                 // TASK 3
 int n=0;
cout<<"enter n :"<<endl;
cin>>n;
for(int i=1; i<=n; i++){
	for(int j=1;j<=i;j++){
		cout<<' '<<endl;
		cout<<j<<endl;
	}
	
}
return 0;  }
*/                                                     



                                                  // LAB TASK OF LAB 6




                                                           // TASK 1     PASCALS TRIANGLE 

/*
#include <iostream>
using namespace std;
int main() {
    int rows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int coef = 1;
        for (int space = 1; space < rows - i; space++)
            cout << " ";

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            cout << coef << " ";
        }
        cout <<endl;
    }return 0;
	}*/
	
	
	                                      // TASK 2 FEBONACHI SERIES
	
	
/*	#include <iostream>
using namespace std;


int main()
{
	//Declaring Variables

	int intNum1 = 0;
	int intNum2 = 1;
	int temp = 0;
	

	//Printing Fibonacci Sequence

	cout << "The First 5 digits of Fabonacci Sequence are: " << endl;
	cout << intNum1 << "," << intNum2 << ",";

	temp = intNum1 + intNum2;
	intNum1 = intNum2 + temp;

	cout << temp << "," << intNum1 << ",";


	intNum2 = intNum1 + temp;
	temp = intNum1 + intNum2;

	cout << intNum2 << "," << temp << endl;
	
	system ("pause");

	return 0;
	
	
}*/
