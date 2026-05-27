#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;

    int SmallCnt = 0;
    int BigCnt = 0;

    if((x > y && x < z) || (x > z && x < y)){
        if(z > y){//z bigger
            while(y < x){
                y++;
                SmallCnt++;
            }
            while(z > x){
                z--;
                BigCnt++;
            }
        }else if(y > z){//y bigger
            while(y > x){
                y--;
                BigCnt++;
            }
            while(z < x){
                z++;
                SmallCnt++;
            }
        }
        }else if((y > x && y < z) || (y > z && y < x)){
            if(x > z){//x bigger
                while(z < y){
                    z++;
                    SmallCnt++;
                }
                while(x > y){
                    x--;
                    BigCnt++;
                }
            }else if(z > x){//Z bigger
                while(z > y){
                    z--;
                    BigCnt++;
                }
                while(x < y){
                    x++;
                    SmallCnt++;
                }
            }   
        }else if((z > y && z < x) || (z < y && z > x)){
            if(y > x){//y bigger
                while(y > z){
                    y--;
                    BigCnt++;
                }
                while(x < z){
                    x++;
                    SmallCnt++;
                }
            }else if(x > y){//x bigger
                while(x > z){
                    x--;
                    BigCnt++;
                }
                while(y < z){
                    y++;
                    SmallCnt++;
                }
            }
    }

    int ans = SmallCnt+BigCnt;
    cout << ans;
    

    return 0;
}