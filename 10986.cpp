#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N,M;
    int count = 0;

    cin >> N >> M;
    
    vector<int> A (N,0);
    vector<int> S (N,0);
    vector<int> C (M,0);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    for(int i =0; i < N ; i++){
        S[i] = A[i] + S[i-1];
    }

    for(int i = 0; i < N ; i++){
        int X = S[i] % M; 
        if(X == 0){
            count += 1;
        }

        C[X]++;
    }

    for(int i =0; i<N; i++){
        count += C[i]*(C[i]-1)/2;
    }

    cout << count << "\n";

}