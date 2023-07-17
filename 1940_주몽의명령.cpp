#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N,M;
    int count = 0;
    int sum = 0;
    cin >> N >> M;
    vector<int> A (N,0);

    for(int i =0; i<N; i++){
        cin >> A[i];
    }

    // A를 오름차순으로 정렬하기
    sort(A.begin(), A.end());

    int start_index = 0;
    int end_index = N-1;

    while (start_index < end_index)
    {
        sum = A[start_index] + A[end_index];
        if(sum < M){
            start_index++;
        }
        else if(sum > M){
            end_index--;
        }
        else{
            count++;
            start_index++;
        }
    }
    cout << count << "\n";

}