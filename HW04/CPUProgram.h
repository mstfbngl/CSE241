/*----------------------------------------------------------------------------*/
/*-----------------------------------HW04-------------------------------------*/
/*---------------------------MUSTAFA BİNGÜL 141044077-------------------------*/
/*--------------------------------CPUProgram.h--------------------------------*/
/*----------------------------------------------------------------------------*/
#ifndef CPUProgram_H
#define CPUProgram_H

#include <iostream>
#include <string>

using namespace std;

class CPUProgram{

    public:

        CPUProgram();
        CPUProgram(int opt);
        CPUProgram(char* fName);
        void ReadFile(const char* fileName);
        string getLine(int lineNo)const;
        int size()const;

    private:

        char* filename;
        string strArray[200]; 

};

#endif
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/