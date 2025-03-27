trackPlayerRanks(int ranked[] , int leadersize ,int player_score[] ,int  m ,int result[]){
    int arr[leadersize]{
        for(int i =0;i<leadersize;i++){
            arr[i] = arr[leadersize - 1 - i];
        }
    }
    int count =0;
    for(int j =0;j<m ;j++){
        for(int p =0 ;p<m;p++){
            if(player_sccore[j] >= arr[p]){
                for(int h =j h>0;h--){
                    if(arr[h] != arr[j-1])
                    count++;
                }
            }
            result[j] = p - count;
        }
        
    }
}