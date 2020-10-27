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
	ofstream fl;
	fl.open("Result.file");
	fl<<"get length List test1                                          "<<test1.getLength()<<"\n";
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

	
	fl<<"copy file to List test1 content                                "<<test1;
	//cout<<test1.getElement(0)<<"\n";
	List test2;
	fl<<"constructor test List test2  content                           "<<test2;
	fl<<"get length List test2                                          "<<test2.getLength()<<"\n";
	test2=test1;
	fl<<"copy test by using  operator=     test2=test1;                 "<<test2;
	fl<<"List test2                                                     "<<test2;
	fl<<"get length List test2                                          "<<test2.getLength()<<"\n";
	//cout<<test2.getElement(2)<<"\n";
	List test3(test1);
	//cout<<test3.getElement(2)<<"\n";
	fl<<"copy test by constuctor    List test3(test1);                  "<<test3;
	List test4;
	fl<<"List test4 length                                              "<<test4.getLength()<<"\n";
	test4.setLength(inputnum);
	fl<<"set length test  include recreate finction test                "<<"\n";
	fl<<"List test4 length                                              "<<test4.getLength()<<"\n";
	for (unsigned int i = 0; i < inputnum; i++ )
	{
		test4.setElement(i,test1.getElement(i));

		fl<<"getElement test  List test1 index     "<<i<<"              "<<test1.getElement(i)<<"\n";
	}
	//cout<<test4.getElement(2)<<"\n";
	fl<<"copy test by set element and get element test                  "<<"\n";
	fl<<"List test4                                                     "<<test4;
	fl<<"                                                               "<<"\n";
	fl<<"                                                               "<<"\n";
	test2=test1++;
	fl<<"++ operation    test2=test1++                                  "<<"\n";
	fl<<"assign operation first                                         "<<"\n";
	fl<<"List test1                                                     "<<test1;
	fl<<"List test2                                                     "<<test2;

	test2=++test1;
	fl<<"++(long) operation   test2=++test1                             "<<"\n";
	fl<<"add operation  first                                           "<<"\n";
	fl<<"List test1                                                     "<<test1;
	fl<<"List test2                                                     "<<test2;
	fl<<"                                                               "<<"\n";
	fl<<"                                                               "<<"\n";
	
	test1+=test2;
	fl<<"+= operation   test1+=test2                                    "<<"\n";
	fl<<"List test1                                                     "<<test1;
	fl<<"List test2                                                     "<<test2;
	fl<<"                                                               "<<"\n";
	fl<<"-- operation test1=test2--   test1=test2--                     "<<"\n";
	test1=test2--;
	fl<<"assign operation  first                                        "<<"\n";
	fl<<"List test1                                                     "<<test1;
	fl<<"List test2                                                     "<<test2;
	
	test1=--test2;
	fl<<"--(long) operation   test1=--test2                             "<<"\n";
	fl<<"minus operation  first                                         "<<"\n";
	fl<<"List test1                                                     "<<test1;
	fl<<"List test2                                                     "<<test2;
	fl<<"                                                               "<<"\n";
	fl<<"                                                               "<<"\n";
	test3=test1+test2;
	fl<<"+ operation test1 add test2 to test3                           "<<"\n";
	fl<<"List test1                                                     "<<test1;
	fl<<"List test2                                                     "<<test2;
	fl<<"List test3                                                     "<<test3;
	fl<<"                                                               "<<"\n";
	fl<<"                                                               "<<"\n";
	test1.~List();
	fl<<"deconstructor test  List test1                                 "<<test1;
	fl<<"List test1 length                                              "<<test1.getLength()<<"\n";
	fl<<"List test1 content                                             "<<test1<<"\n";
	fl.close();
	
	
	return 0;
}
