#include<iostream>
#include<vector>

using namespace std;

int main(){

    int N,L;
    int count = 0;
    int ACGT[4] = {0,};
    int check[4] = {0,};

    freopen("input.txt", "r", stdin);
    
    cin >> N >> L;
    string DNA;
    cin >> DNA;

    for(int i=0 ; i < 4; i++){
        cin >> check[i];
    }

    int start = 0;
    int end = L-1;

    for(int i =0; i<L;i++){
        if(DNA[i] == 'A'){
            ACGT[0] += 1;
        }
        else if(DNA[i] == 'C'){
            ACGT[1] += 1;
        }
        else if(DNA[i] == 'G'){
            ACGT[2] += 1;
        }
        else if(DNA[i]=='T'){
            ACGT[3] += 1;
        }
    }

    bool isVaild =true;

    for (int i = 0; i < 4; i++)
    {
        if(ACGT[i] < check [i]){
            isVaild = false; 
            break;
        }
    }

    if(isVaild == true){
        count +=1;
    }

    while (end < N-1)
    {
        if(DNA[start] == 'A'){
            ACGT[0] -= 1;
        }
        else if(DNA[start] == 'C'){
            ACGT[1] -= 1;
        }
        else if(DNA[start] == 'G'){
            ACGT[2] -= 1;
        }
        else if(DNA[start]=='T'){
            ACGT[3] -= 1;
        }

        start += 1;
        end += 1;

        if(DNA[end] == 'A'){
            ACGT[0] += 1;
        }
        else if(DNA[end] == 'C'){
            ACGT[1] += 1;
        }
        else if(DNA[end] == 'G'){
            ACGT[2] += 1;
        }
        else if(DNA[end]=='T'){
            ACGT[3] += 1;
        }

        isVaild = true;
        for (int i = 0; i < 4; i++){
            
            if(ACGT[i] < check [i]){
                isVaild = false; 
                break;
            }

        }

        if(isVaild == true){
            count +=1;
        }   

    }

    cout << count << "\n";
    
}