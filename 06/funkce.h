#pragma once

int prvek(int prvni, int druhy, int n) {
	
	int d = druhy - prvni;

	int vys = prvni + (n-1) * d;

	return vys;
}

int soucet(int prvni, int druhy, int n) {
	int soucet = prvni;
	int d = druhy - prvni;
	
	for (int i = 2; i <= n; i++) {

		int prvek = prvni + (i - 1) * d;
		soucet += prvek;
	}

	return soucet;
}