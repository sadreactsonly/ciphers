void ceaser(string &s,int x){
	
	for(auto &i:s){
		i='a'+(i-'a'+x)%26;
	}
	//could also return s
}
