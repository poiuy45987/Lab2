#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << vec[i] << " ";
		}
		cout << endl;
	}
	else if (cnt == 0) {
		for (vec[cnt] = 1; vec[cnt] <= N; vec[cnt]++) {
			func(cnt + 1);
		}
	}
	else {
		for (vec[cnt] = vec[cnt - 1] + 1; vec[cnt] <= N; vec[cnt]++) {
			func(cnt + 1);
		}
	}
}

int main() {
   cin >> N >> M;
   vec.assign(M, 0);
   func(0);
}
