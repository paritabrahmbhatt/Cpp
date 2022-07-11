int main()
{
    int t; cin>>t;
    while(t--){
        int temp; cin>>temp;
        int x = temp / 1000;
        int y = temp %1000;
        int sum1=0, sum2=0;
        for(int i = 0; i<3; i++){
            int temp1 = x%10;
            x /= 10;
            int temp2 = y%10;
            y/= 10;
            sum1 += temp1;sum2+= temp2;
        }
        if(sum1 == sum2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
