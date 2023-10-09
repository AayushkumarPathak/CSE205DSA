#include <iostream>
using namespace std;


struct Node {
    int data;
    int row, col;
    Node* nextRow;
    Node* nextCol;
};


class SparseMatrix {
private:
    int numRows, numCols;
    Node** rowHeaders;
    Node** colHeaders;

public:

    SparseMatrix(int rows, int cols) {
        numRows = rows;
        numCols = cols;

        
        rowHeaders = new Node*[numRows];
        colHeaders = new Node*[numCols];

        for (int i = 0; i < numRows; i++) {
            rowHeaders[i] = nullptr;
        }

        for (int j = 0; j < numCols; j++) {
            colHeaders[j] = nullptr;
        }
    }
    void insertElement(int row, int col, int value) {
        if (row < 0 || row >= numRows || col < 0 || col >= numCols) {
            cout << "Invalid row or column index" << endl;
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;
        newNode->row = row;
        newNode->col = col;

        
        if (rowHeaders[row] == nullptr || col < rowHeaders[row]->col) {
            newNode->nextRow = rowHeaders[row];
            rowHeaders[row] = newNode;
        } else {
            Node* current = rowHeaders[row];
            while (current->nextRow != nullptr && col > current->nextRow->col) {
                current = current->nextRow;
            }
            newNode->nextRow = current->nextRow;
            current->nextRow = newNode;
        }
        if (colHeaders[col] == nullptr || row < colHeaders[col]->row) {
            newNode->nextCol = colHeaders[col];
            colHeaders[col] = newNode;
        } else {
            Node* current = colHeaders[col];
            while (current->nextCol != nullptr && row > current->nextCol->row) {
                current = current->nextCol;
            }
            newNode->nextCol = current->nextCol;
            current->nextCol = newNode;
        }
    }

    
    void displayMatrix() {
        for (int i = 0; i < numRows; i++) {
            Node* current = rowHeaders[i];
            for (int j = 0; j < numCols; j++) {
                if (current != nullptr && current->col == j) {
                    cout << current->data << " ";
                    current = current->nextRow;
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;
    cin >> rows >> cols;

    SparseMatrix matrix(rows, cols);

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value;
            cin >> value;
            matrix.insertElement(i, j, value);
        }
    }

    
    matrix.displayMatrix();

    return 0;
}
