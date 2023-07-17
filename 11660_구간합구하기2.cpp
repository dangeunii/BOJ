#include <iostream>
#include <vector>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(false);
    cout.tie(false);

    int N, count;
    cin >> N >> count;
    int x1,y1,x2,y2;
    vector<int> result(count+1,0); 

    vector<vector<int>> A(N+1, vector<int>(N+1,0));
    vector<vector<int>> S(N+1, vector<int>(N+1,0));

    for(int i =1; i <= N; i++){
        for(int j =1; j <= N; j++){
            cin >> A[i][j];
            S[i][j] = S[i][j-1] + S[i-1][j] - S[i-1][j-1] + A[i][j];
        }
    }

    for(int i = 0; i< count; i++){
        cin >> x1 >> y1 >> x2 >> y2;

        result[i] = S[x2][y2] - S[x1-1][y2] - S[x2][y1-1] + S[x1-1][y1-1];
    }

    for(int i = 0; i<count ; i++){
        cout << result[i] << "\n";
    }

}