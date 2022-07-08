string leftrotate(string str,int d=2){
        reverse(str.begin(),str.begin()+2);
        reverse(str.begin()+2,str.end());
        reverse(str.begin(),str.end());
        return str;
    }

    string rightrotate(string str){
        string tempp;
        tempp=leftrotate(str,str.length()-2);
        return tempp;
    }