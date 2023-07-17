#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> A (N,0);

    // 데이터 넣기
    for(int i=0 ; i<N; i++){
        cin >> A[i];
    }
    // 정렬
    sort(A.begin(), A.end());
    int count = 0;

    // 좋은 수 판별
    for(int i =0; i< N ; i++){
        int K = A[i];
        int start = 0;
        int end = N-1;

        while (start<end)
        {
            int tmp = A[start] + A[end];

            if(tmp == K){
               if(start != i && end != i ){
                    count++;
                    break;
                }
                else if(start == i){
                    start++;
                }
                else if(end == i){
                    end--;
                }
            }
            else if(tmp > K){
                end--;
            } 
            else{
                start++;
            }
            
        }
        
    }
    cout << count << "\n";

}