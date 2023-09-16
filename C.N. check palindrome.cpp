bool ispalindromeHelper(int left,int right,string&s){
	
	if(left>=right) return true;
   if(s[left]!= s[right]) return false;
   return ispalindromeHelper(left+1,right-1,s);


}
bool isPalindrome(string &s){
	return ispalindromeHelper(0,s.size()-1,s);
}
