#pragma once

#include <iostream>
#include "stdlib.h"

using namespace std;

class matr {
private:
	int n, m;
	double **a;

public:
	double **t;

	matr()
	{
		a = NULL;
	}

	void init(int _n, int _m) {
		n = _n;
		m = _m;
		a = (double**)malloc(sizeof(double*)*n);
		for (int i = 0; i < n; i++) {
			a[i] = (double*)malloc(sizeof(double)*m);
		}

/*		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];*/
	}

	double GetEl(int i, int j) {
		return a[i][j];
	}

	void SetEl(int i, int j, double _a)
	{
		a[i][j] = _a;
	}

	int GetN() {
		return n;
	}

	int GetM() {
		return m;
	}

	double Det2(double **a) {
		return (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
	}

	double** minmat(double **a, int _j, int k, int _i) {
		double **p;
		p = new double*[k - 1];
		for (int i = 0; i < k - 1; i++)
			p[i] = new double[k - 1];

		int c1 = 0;
		for (int i = 0; i < k; i++) {
			if (i != _i) {
				int c = 0;
				for (int j = 0; j < k; j++) {
					if (j != _j) {
						p[c1][c] = a[i][j];
						c++;
					}
				}
				c1++;
			}
		}
		return p;
	}

	double Det() {
		return Det(a, n);
	}

	double Det(double **a, int n)
	{
		int l = 1;
		double sum = 0;
		if (n == 1) return a[0][0];
		else if (n > 2) {
			for (int j = 0; j < n; j++) {
				sum += l * a[0][j] * Det(minmat(a, j, n, 0), n - 1);
				l *= -1;
			}
			return sum;
		}
		else return Det2(a);
	}

	void inverse() {
		double det = Det();
		int l;
		t = (double**)malloc(sizeof(double*)*n);
		for (int i = 0; i < n; i++) {
			t[i] = (double*)malloc(sizeof(double)*n);
			for (int j = 0; j < n; j++) {
				if ((i + j) % 2 == 0) l = 1; else l = -1;
				t[i][j] = l*Det(minmat(a, j, n, i), n - 1);
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				a[i][j] = t[i][j];
		}

		free(t);
		transp();

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				a[i][j] /= det;
	}

	matr operator *(double _a)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				a[i][j] *= _a;
		return *this;
	}

	matr operator *(matr _a)
	{
		double sum;
		t = (double**)malloc(sizeof(double*)*n);
		for (int i = 0; i < n; i++) {
			t[i] = (double*)malloc(sizeof(double)*_a.GetM());
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < _a.GetM(); j++) {
				sum = 0;
				for (int k = 0; k < m; k++)
					sum += a[i][k] * _a.GetEl(k, j);
				t[i][j] = sum;
			}

		free(a);
		a = (double**)malloc(sizeof(double*)*n);
		for (int i = 0; i < n; i++) {
			a[i] = (double*)malloc(sizeof(double)*_a.GetM());
			for (int j = 0; j < _a.GetM(); j++)
				a[i][j] = t[i][j];
		}

		free(t);

		m = _a.GetM();

		return *this;
	}

	matr operator =(matr _a)
	{
		m = _a.GetM();
		n = _a.GetN();

		if (a != NULL && a!=_a.a) 
			free(a);

		a = (double**)malloc(sizeof(double*)*n);
		for (int i = 0; i < n; i++) {
			a[i] = (double*)malloc(sizeof(double)*m);
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				a[i][j]=_a.GetEl(i,j);
		return *this;
	}

	matr operator +(matr _a)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				a[i][j] += _a.GetEl(i, j);
		return *this;
	}

	matr operator -(matr _a)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				a[i][j] -= _a.GetEl(i, j);
		return *this;
	}

	void print()
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout.width(9);
				cout << a[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}

	void transp() {
		t = (double**)malloc(sizeof(double*)*m);
		for (int i = 0; i < m; i++) {
			t[i] = (double*)malloc(sizeof(double)*n);
		}

		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				t[i][j] = a[j][i];


		free(a);

		a = (double**)malloc(sizeof(double*)*m);
		for (int i = 0; i < m; i++) {
			a[i] = (double*)malloc(sizeof(double)*n);
			for (int j = 0; j < n; j++)
				a[i][j] = t[i][j];
		}

		free(t);
		swap(n, m);
	}

};