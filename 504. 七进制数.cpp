class Solution {
public:
string convertToBase7(int num) {
    string s;
    if(num==0)
    {
        return "0";
    }
    int flag=0;
    if(num<0)
    {
        num=-num;
        flag=1;
    }
    while (num)
    {
        s += num % 7 + '0';
        num /= 7;
    }
      if (flag)
    {
        s += '-';
    }
    reverse(s.begin(), s.end());
    return s;
}
};
