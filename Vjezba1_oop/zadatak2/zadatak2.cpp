#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

struct matrica {
    int row;
    int column;
    float** matrix;

    void createMatrix(int rows, int cols) {
        row = rows;
        column = cols;
        matrix = new float* [row];
        for (int i = 0; i < row; i++) {
            matrix[i] = new float[column];
        }
    }
    void generateMatrix() {
        srand(time(NULL));
        float a, b, randNumber;
        cin >> a;
        cin >> b;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                randNumber = a + (rand() / (RAND_MAX / (b - a)));
                matrix[i][j] = randNumber;
            }
        }
    }
    void printMatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << right << setfill('0') << fixed << setprecision(4) << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
    void inputMatrix()
    {
        int i, j;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }
};

matrica addMatrices(matrica m1, matrica m2) {
    if (m1.row == m2.row && m1.column == m2.column) {
        matrica m3;
        m3.createMatrix(m1.row, m1.column);
        cout << endl << "Zbroj matrica: " << endl;
        for (int i = 0; i < m3.row; i++)
            for (int j = 0; j < m3.column; j++)
                m3.matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
        return m3;
    }
    else
    {
        cout << endl << "Matrice nisu istih dimenzija!" << endl;
    }

}
matrica subtractMatrices(matrica m1, matrica m2) {
    if (m1.row == m2.row && m1.column == m2.column) {
        matrica m3;
        m3.createMatrix(m1.row, m1.column);
        cout << endl << "Razlika matrica: " << endl;
        for (int i = 0; i < m3.row; i++)
            for (int j = 0; j < m3.column; j++)
                m3.matrix[i][j] = m1.matrix[i][j] - m2.matrix[i][j];
        return m3;
    }
    else
    {
        cout << endl << "Matrice nisu istih dimenzija!" << endl;
    }

}
matrica multiplyMatrices(matrica m1, matrica m2) {
    if (m1.column == m2.row) {
        matrica m3;
        m3.createMatrix(m1.row, m1.column);

        for (int i = 0; i < m1.row; ++i)
        {
            for (int j = 0; j < m2.column; ++j)
            {
                m3.matrix[i][j] = 0;
            }
        }

        for (int i = 0; i < m1.row; i++)
            for (int j = 0; j < m2.column; j++)
                for (int k = 0; k < m2.row; k++)
                    m3.matrix[i][j] += m1.matrix[i][k] * m2.matrix[k][j];

        cout << endl << "Umnozak matrica: " << endl;
        for (int i = 0; i < m1.row; i++)
        {
            for (int j = 0; j < m2.column; j++)
            {
                cout << m3.matrix[i][j] << " ";
            }
            cout << endl;
        }
        return m3;
    }
    else
    {
        cout << endl << "Matrice se ne mogu mnoziti!" << endl;
    }
}
matrica transposeMatrix(matrica m1) {
    matrica transpose;
    transpose.createMatrix(m1.column, m1.row);
    for (int i = 0; i < m1.row; i++)
        for (int j = 0; j < m1.column; j++)
            transpose.matrix[j][i] = m1.matrix[i][j];
    return transpose;
}



int main()
{
    int rows1, cols1, rows2, cols2;
    matrica m1, m2, m3, m4, mprod;

    cout << "Unesite velicinu redaka prve matrice: " << endl;
    cin >> rows1;
    cout << "Unesite velicinu stupaca prve matrice: " << endl;
    cin >> cols1;
    m1.createMatrix(rows1, cols1);
    cout << "Unesite matricu: " << endl;
    m1.inputMatrix();
    m1.printMatrix();

    cout << "Unesite velicinu redaka druge matrice: " << endl;
    cin >> rows2;
    cout << "Unesite velicinu stupaca druge matrice: " << endl;
    cin >> cols2;
    m2.createMatrix(rows2, cols2);
    cout << "Unesite vrijednosti za generiranje random brojeva: " << endl;
    m2.generateMatrix();
    cout << endl << "Generirana matrica: " << endl;
    m2.printMatrix();

    mprod = multiplyMatrices(m1, m2);

    m3 = addMatrices(m1, m2);
    m3.printMatrix();

    m3 = subtractMatrices(m1, m2);
    m3.printMatrix();

    m4 = transposeMatrix(m1);
    cout << endl << "Transponirana matrica: " << endl;
    m4.printMatrix();

}
