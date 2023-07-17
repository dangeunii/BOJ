#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    //입력받는 자연수 N
    int N;
    int sum = 1;
    // 자기자신으로 이루어지는 경우
    int count = 1;
    int start_index = 1;
    int end_index = 1;

    cin >> N;
    while (end_index != N)
    {
        if(sum<N){
            end_index++;
            sum += end_index ;
        }
        else if(sum == N){
            count++;
            start_index++;
            end_index = start_index+1;
            sum = start_index + end_index;
        }
        else{
            sum = sum - start_index;
            start_index++;
        }
    }
    cout << count << "\n";
    

}