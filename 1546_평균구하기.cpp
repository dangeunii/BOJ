#include <iostream>
using namespace std;

int main(){
    int N;
    float A[1001] = {0};

    float Max =0;
    float sum =0;
    float avg =0;

    cin >> N;
    
    // 1,2. 점수 입력 받기 및 최댓값 찾기
    for(int i =0; i < N; i++){
        cin >> A[i];
        if(A[i] > Max){
            Max = A[i];
        }
    }

    for(int i = 0; i < N; i++){
        A[i] = A[i]/Max *100;
        sum += A[i];
    }

    avg = sum / N;
    cout << avg << "\n";

}