#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;

   priority_queue<int> pq;
   while(n){
        int x;
        cin >> x;
        pq.push(x);

        if(x == 0){
            if(pq.empty()) cout << 0 << endl;
            else{
                cout << pq.top()<<endl;
                pq.pop();
            }
        }
        n--;
   }

    return 0;
}
