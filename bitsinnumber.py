# count total number of bits in a number 

# declare a number
num = 61

# use bin () method to get the binary value of a number 
# print binary value output will be 0b111101
print("binary value of {0} is: {1}".format (num, bin(num)))

# store the length of the binary number
length = len(bin(num))

# since binary value contains 0b as prefix
# so to get exact length total number of bits
# subtract 2 from the length
length -=2

# print length
print("total number of bits: ", length)
