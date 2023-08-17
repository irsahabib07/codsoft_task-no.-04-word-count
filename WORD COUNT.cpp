#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    string fileName,word;
    int tot=0;
    cout<<"\t\t\t'WORD COUNT'\n\n";
    cout<<"Enter a Text Filename:";
    cin>>fileName;
     ifstream inFile(fileName);
   
    if(inFile>>word){
        tot++;
    cout<<"\nTotal Words in a Given File is: "<<tot;
}
    else
{
	cout<<"File deos'nt exist!";
}
    return 0;
}
