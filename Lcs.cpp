int lcs(string s, string k, int m, int n){

// base case n->s, m->k 
	if(n==0 || m==0)
		return 0;
	else if(s[n-1]==k[m-1])
		return 1+lcs(s,k,m-1,n-1);
	else return max(lcs(s,k,m-1,n),lcs(s,k,m,n-1));
}

//s=abcbdab
//k=bdcaba
//lcs=bdab aur bhi h

//memoization
int memo[n+1][m+1]
int memolcs(string s, string k, int n, int m){
	if(n==0)
		return memo[n]=0;
	else if(m==0)
		return memo[m]=0
	else if (s[n-1]==k[m-1])
	{
		/* code */return memo[n]=1+memolcs(s,k,n-1,m-1)
	}
	else
		retur

}