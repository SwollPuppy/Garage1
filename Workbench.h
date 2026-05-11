#pragma once

//Welcome to the header file

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Config {
	bool LEGACY;
	bool LINKIT;
	bool PARSETEST;
	bool OCTOPUS;
	bool ACME;
	bool HAGRID;
	bool REWIND;
};


//extern Config cfg; //This is declaring a global variable that can be used across all files.
                   //It will be defined in Workbench.cpp	

void TownCrier();
void SetupString(string &);
vector<int> twoSum(vector<int>&, int);
void showIntVector(vector<int>&);
//ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {