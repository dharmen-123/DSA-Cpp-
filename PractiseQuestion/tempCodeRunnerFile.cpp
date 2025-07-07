 vector<int>v; int k=0;
    for(int i=0;i<nums.size();i++){
         if(nums[i]!=nums[i+1]){
            k++;
           v.push_back(nums[i]);
         }
         else{
            v.push_back('_');
         }
    }   
      nums.clear();
    for(int i=0;i<v.size();i++){
         nums.push_back(v[i]);
      }
       sort(nums.begin(),nums.end());
      return k;