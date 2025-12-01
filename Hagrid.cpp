#include "Workbench.h"
#include "Hagrid.h"

Hagrid::Hagrid() {
	cout << "Creating Hagrid object" << endl;
	maxArea = 0;
}

Hagrid::~Hagrid() {
	cout << "Destructing Hagrid object" << endl;
}

void Hagrid::areaOfMaxDiagonal(vector<vector<int>>& dimensions){
	int diag = 0;
	int maxDiaganol = diag;

	for (int i = 0; i < dimensions.size(); i++) {
		diag = dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1];
		if (diag > maxDiaganol) {
			maxDiaganol = diag;
			maxArea = dimensions[i][0] * dimensions[i][1];
			maxLength = dimensions[i][0];
			maxHeight = dimensions[i][1];
		}
		else if (diag == maxDiaganol) {
			maxArea = max(maxArea, dimensions[i][0] * dimensions[i][1]);
		}
	}

	//return maxArea;
}

//int Hagrid::areaOfMaxDiagonal(vector<vector<int>>& matrix) {
//	if (matrix.empty() || matrix[0].empty()) return 0;
//	int maxArea = 0;
//	int rows = matrix.size();
//	int cols = matrix[0].size();
//	for (int i = 0; i < rows; ++i) {
//		for (int j = 0; j < cols; ++j) {
//			if (matrix[i][j] == 1) {
//				int length = 1;
//				while (i + length < rows && j + length < cols && matrix[i + length][j + length] == 1) {
//					++length;
//				}
//				int area = length * length;
//				maxArea = max(maxArea, area);
//			}
//		}
//	}
//	return maxArea;
//}

