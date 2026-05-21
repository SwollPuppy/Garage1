#pragma once

//Welcome to the header file

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

struct Config {
	bool legacy;
	bool linkit;
	bool parsetest;
	bool octopus;
	bool acme;
	bool hagrid;
	bool rewind;
};


//extern Config cfg; //This is declaring a global variable that can be used across all files.
                   //It will be defined in Workbench.cpp	

void TownCrier();
void SetupString(string &);
vector<int> twoSum(vector<int>&, int);
void showIntVector(vector<int>&);
void Configfig(Config&);
void Tupperware(string&);
//ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {