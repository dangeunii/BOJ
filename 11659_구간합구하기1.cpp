#include <iostream>
using namespace std;

// C++에서 시간 단축을 위해 사용하는 구문
// C의 stdio와 C++의 iostream의 동기화 비활성화, C++ 독립버퍼 사용으로 수행속도 빨라질 수 있다.
ios::sync_with_stdio(false);
// cin 과 cout을 하나의 스트림으로 묶어서 사용하던 것을 해제
cin.tie(null); cout.tie(null);

int main(){
    int N, count,j,k;
    int A[100001] = {0};
    int S[100001] = {0};

    int result[100001] = {0};

    cin >> N >> count;

    for(int i =0; i< N; i++){
        cin >> A[i];
        if(i == 0){
            S[i] = A[0];
        }
        else{ 
            S[i] = S[i-1] + A[i];
        }
    }

    for(int i =0; i<count; i++){
        cin >> j >> k;
        if(j == 1){
            result[i] = S[k-1];
        }
        else{
            result[i] = S[k-1] - S[j-2];
        }
    }
    
    for(int i =0; i<count ; i++){
        cout << result[i] << "\n";
    }

}