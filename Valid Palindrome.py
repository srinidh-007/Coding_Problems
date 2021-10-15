class Solution(object):

    def isPalindrome(self, s):

        """

        :type s: str

        :rtype: bool

        """

        l=len(s)

        

        i=0

        j=l-1

        

        while i<=j:

            ia=s[i]

            ja=s[j]

            

            if not ia.isalnum():

                i+=1

                continue

            if not ja.isalnum():

                j-=1

                continue

            

            if ia.lower()!=ja.lower():

                return False

            

            i+=1

            j-=1

        return True

    
