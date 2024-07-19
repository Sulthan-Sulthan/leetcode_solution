int count = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s.charAt(i)!= ' ')
                count++;
            else {
                if(count>0)
                    return count;
            }
        }
    return count;   



    // c+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++==



    int count = 0;
        for(int i=s.length()-1;i>=0;i--){
            if(s.at(i)!= ' ')
                count++;
            else {
                if(count>0)
                    return count;
            }
        }
    return count;   