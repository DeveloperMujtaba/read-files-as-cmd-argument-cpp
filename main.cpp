// Name of program mainreturn.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
	cout << "You have input " << argc-1
		<< " file(s):" << "\n";
        string AllTxt;
	for (int i = 1; i < argc; i++){
		string Txt;
		string fileName = argv[i];
		ifstream File(fileName);
		while(getline(File, Txt)){
		AllTxt=AllTxt+Txt+"\n";
		}
	}
	if(AllTxt==""){
	cout<<"Nothing to print!"<<endl;
	}
	cout<<AllTxt;

	return 0;
}

