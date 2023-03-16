int majorityElement(vector<int> v) {
	int el;
	int count=0;
	for(int i=0;i<v.size();i++)
	{
		if(count==0)
		{
			el=v[i];
			count=1;
		}
		else if(el==v[i])
		{
			count++;
		}
		else count--;
	}
	int c1=0;
	for(int i=0;i<v.size();i++)
	{
		if(el==v[i])c1++;
	}
	if(c1>v.size()/2)
	return el;
	return -1;
}
