// Name of program mainreturn.cpp
#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
using namespace std;
int main(int argc, char** argv)
{
	//std::time_t t = tmit;
	cout << "You have input " << argc-1
		<< " file(s):" << "\n";
        string AllTxt;
	struct stat buf;
	for (int i = 1;	i < argc; i++)
	{
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
	cout<<"---------------------------Q1----------------------------"<<endl;
	cout<<endl;
	cout<<AllTxt<<endl;
	cout<<endl;
	cout<<"---------------------------Q2----------------------------"<<endl;
	cout<<endl;
	cout<<" Resolving Question 2 - this can be done via single"<<endl;
        cout<<" above loop, but I am doing it for the purpose if you"<<endl;
        cout<<" want to separate the questions later on -> "<<endl;
	cout<<endl;
	for(int i=1; i<argc; i++)
	{
		stat(argv[i], &buf);
		cout<<"Printing information for file ";
	        cout<<argv[i]<<endl;
		cout<<endl;
		cout << buf.st_dev << endl;
    		cout << buf.st_ino << endl;
     		cout << buf.st_mode << endl;
     		cout << buf.st_nlink << endl;
     		cout << buf.st_uid << endl;
     		cout << buf.st_gid << endl;
    		cout << buf.st_rdev << endl;
    		cout << buf.st_size << endl;
     		cout << buf.st_blksize << endl;
     		cout << buf.st_blocks << endl;
     		cout << buf.st_atime << endl;
     		cout << buf.st_mtime << endl;
     		cout << buf.st_ctime << endl;
		cout<<endl;
	}
	return 0;
}

