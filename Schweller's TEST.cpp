// Schweller's TEST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string> 
using namespace std;


int main()

{
	//Ask for how many cats
	string *cats;
	int numCats = 0;
	cout << "How many cats do you have?" << endl;

	cin >> numCats;
	cats = new string[numCats];

	//Give names of each cats
	cout << "What are their names?" << endl;
	for (int i = 0; i < numCats; i++) {
		cin >> cats[i];
	}
	//sortbubble
		for (int i = 0; i < numCats; i++) {
			for (int j = 0; j < numCats - 1; j++) {
				if (cats[j] > cats[j + 1]) {
					string holder = cats[j];
					cats[j] = cats[j + 1];
					cats[j + 1] = holder;
				}
			}
		}

		//print results
		cout << "" << endl;
		for (int i = 0; i < numCats; i++) {
			cout << cats[i] + ", " << flush;
		}
    return 0;
}

