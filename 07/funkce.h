#pragma once

int prvek(int prvni, int druhy, int n) {

	int d = druhy / prvni;
	int prvek = 0;
	int predchozi = prvni;

	for (int i = 1; i < n; i++) {

		prvek = predchozi * d;
		predchozi = prvek;

	}
	return prvek;
}

int soucet(int prvni, int druhy, int n) {
	int soucet = prvni;
	int predchozi = prvni;

	for (int i = 1; i < n; i++) {
		int prvek = predchozi * (druhy / prvni);
		predchozi = prvek;
		soucet += prvek;
	}

	return soucet;
}