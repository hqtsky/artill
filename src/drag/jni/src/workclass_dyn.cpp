#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <set>
#include <cmath>

#include "workclass_api.h"
#include "wc_thin_api.h"
#include "utils.h"

using std::cout;
using std::string;

WorkClass::WorkClass()
{
    dyn_reference = WC_Create();
}

WorkClass::~WorkClass()
{
    WC_Delete(dyn_reference);
}


double WorkClass::getElement(int x)
{
    return -1;
}

int WorkClass::calculate(int x)
{
    return WC_Calculate(dyn_reference, x);
}

int WorkClass::sendData(int nx, int ny, const int * x, const double * y)
{
    return 0;
}

void WorkClass::input(const string &name, const string &data){}

string WorkClass::output(const string &name){ return "XX"; }

int WorkClass::run(const string &cmd)
{
  return 0;
}