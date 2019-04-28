"""
Check Palindrome function
"""
def checkPalindrome(inputString):

    count = len(inputString)
    newarray = 0
    
    for i in range(count):
        if inputString[i] == inputString[-i-1]:
            newarray += 1
        
        if newarray == count:
            ans = True
        else:
            ans = False
            
    return ans
