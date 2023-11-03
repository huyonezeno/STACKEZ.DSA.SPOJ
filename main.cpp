#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    stack<int>st;
    while(N--){
        int x,y;
        scanf("%d",&x);
        if(x==1){
            scanf("%d",&y);
            st.push(y);
        }else if(x==2){
            if(!st.empty()){
            st.pop();
            }
        }else{
            if(!st.empty()){
                    int k=st.top();
            printf("%d\n",k);
            }else{
            printf("Empty!\n");
            }
        }
    }
}
