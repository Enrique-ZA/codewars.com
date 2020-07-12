int duty_free(int price, int discount, int holiday_cost) {
  
  float saving = (float)price*((float)discount/(float)100);
  int ans = int((float)holiday_cost/(float)saving);
  
  return ans;
}
