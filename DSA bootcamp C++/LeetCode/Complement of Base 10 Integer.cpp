class Solution {
public:
    int bitwiseComplement(int n) {
        if(n ==0)
            return 1;
        int i =0;
        int a =n;
        while(a!=0){
            a =a>>1;
            i++;
        }
    int mask = pow(2,i)-1;
    return (~n & mask);
    }
};