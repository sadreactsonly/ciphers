void vigenere(string &s,vector<int>v){
	int n=v.size();
	for(int i=0;i<s.size();i++){
		s[i]='a'+(s[i]-'a'+v[i%n])%26;
	}
}