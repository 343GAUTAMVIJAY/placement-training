def is_palindrome(s):
    s=s.lower()
    s=''.join(e for e in s if e.isalnum())
    return s==s[::-1]
print(is_palindrome("A man, a plan, a canal: Panama")) 
print(is_palindrome("race a car"))                     
print(is_palindrome("Was it a car or a cat I saw?"))   
