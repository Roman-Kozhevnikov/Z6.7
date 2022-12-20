#pragma once
#include <string>
#include <iostream>
using namespace std;

class IElectronics
{
public:

  virtual void show() const = 0 { cout << "IElectronics" << endl; }  
  virtual void getProduct() {};
  virtual void outProduct() {};
  virtual ~IElectronics() = default;
};


