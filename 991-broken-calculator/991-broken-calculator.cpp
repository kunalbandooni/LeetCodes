/*
Approach:-

Instead of going from startValue to target value we go for opposite i.e target value to startValue.
By reversing the operation i.e instead of multiplying we go for dividing and instead of subtarcting we go for adding.
There would be also possibly three cases in this...
1. If target == startValue then it will be zero.
2. If  target > startValue then we only divide it by 2 till we get startValue == target or startValue get greater than target. 
	IN STEP SECOND WE HAVE ONE MORE SUB CASES.
	We only go for division if target is even else we only increase target by 1.
3. If target < startValue then we only increment it by 1.

Example 
	I/P  startValue = 5   target = 8
	Step - 1 target > startValue then divide target by 2 , it becomes 4.
	Step - 2 target < startValue then we only add by 1 till we get target == startValue. We can only find it by subtracting startValue - target value as startValue is > than target in this case.
	Therfore total no of steps taken is divide->add i.e '2' which is the answer.
    
*/
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count=0;
        while(target>startValue){
            if(target%2==0)
                target=target/2;
            else
                target=target+1;
            count++;
        }
        count+=(startValue-target);
        return count;
    }
};