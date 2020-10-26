#include "List.h"
#include <iostream>
#include <string>
#include <fstream>
#include<cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
	List test(5);
	char* filename;
	int num=0;
	unsigned int inputnum=0;
	filename=argv[1];
	
	
	fstream newfile;
	newfile.open(filename,ios::in);
	if(newfile.is_open())
	{
		string tp;
		while(getline(newfile, tp))
		{ //read data from file object and put it into string.
			//cout << tp << "\n"; //print the data of the string
			//cout<<atoi(tp.c_str())<<"\n";
			if(num==0)
			{
				inputnum=atoi(tp.c_str());
				//cout<<inputnum;

				num=num+1;
			}
			
		}
		newfile.close();
	}
	List test1(inputnum);
	ifstream fin(filename);
	num=0;
	 while(fin.good())
    {
		if(num==0)
		{
			num++;
			continue;
		}
		else
		{
			fin >> test1;
		}
		  		//This doesn't read anything in. 
    }
	ofstream fl;
	fl.open("Result.file");
	fl<<"List test1   "<<test1;
	cout<<test1.getElement(0)<<"\n";
	List test2(1);
	test2=test1;
	fl<<"List test2   "<<test2;
	cout<<test2.getElement(2)<<"\n";
	List test3(test1);
	cout<<test3.getElement(2)<<"\n";
	fl<<"List test1    "test3;
	List test4(inputnum);
	for (unsigned int i = 0; i < inputnum; i++ )
	{
		test4.setElement(i,test1.getElement(i));
	}
	cout<<test4.getElement(2)<<"\n";
	fl<<"List test4   "<<test4;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
