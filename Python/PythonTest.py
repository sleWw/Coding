

def uniqueletters(refstring):    
    string = "" # Creating empty string to add new characters to
    for char in refstring: # Loops for the amount of characters in the reference string
        if char not in string: # Checks if a character is not in the string variable if it is not it adds it
            string = string + char # Adds the new character into the string
    return string

print(uniqueletters("printing"))


def isPalindrome(refstring):
    length = len(refstring)
    if length >= 3:
        reversedString = refstring[::-1] # This is slicing the String which reverses the string
        if reversedString == refstring:
            print("True")
            return True
        else:
            print("False")
            return False
    else:
        print("False")
        return False

isPalindrome("racecar")
#https://stackoverflow.com/questions/31633635/what-is-the-meaning-of-inta-1-in-python
stringSlicing = "Hello"[::-1]
print(stringSlicing)



def upHouston(refstring):
    stringPos = refstring.find("houston")
    print("you spelled Houston wrong or it was not included")
    if stringPos != -1: 
        sLength = len("houston")
        print("string print " + str(stringPos) + "\n" + "String Length " + str(sLength))
            #splice is list[<start>:<stop>:<step>]
        firstSet = refstring[0:stringPos] # splicing first section of the string until houston
        firstSet = firstSet + "Wonderful Houston" # Adding Wonderful Houston in place of houston

        secondSet = refstring[stringPos + sLength:] # splicing the second section of the string after houston

        xString = firstSet + secondSet # adding both section together
        print(str(xString))

upHouston("Astros is gay and might play in houston. it is very Gay in Houston")

print("it is hot in houston")
