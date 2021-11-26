


def Homogenous(mylist):
    listLength = len(mylist)
    sameType = 0
    firstVar = mylist[0]
    ubool = False
    for i in range(listLength):
        rngVar = None
        rngVar = mylist[i]
        if(isinstance(rngVar, type(ubool))): #isinstance() has problems checking between bools and ints so we manually check and all bools subtract from sameType
            sameType = sameType - 1          #that way if all are bools they will be a number equal to listLength but negative
        elif(isinstance(rngVar, type(firstVar))): #checks for if the rest of the variables in the list are the same type as the first variable of the list
           sameType = sameType + 1 #if they are the same type we increment sameType
            #IF all variables are the same they should equal the same length as listLength so (sameType = 6 , listLength = 6) TRUE
    if(sameType == listLength or sameType == listLength - listLength - listLength): #checks for if sameType is = listLength (5) or if is = -listLength (-5)
        return True
    else:
        return False

    
#myspecialList = ["st","s25sf","25122sad",512,25123,False]
#Homogenous(myspecialList)



def ParaBasics(mypara):# will commute and return the average word length
    #put mypara into a list and scan all words and store into a variable incrementing by each character
    newString = mypara.split()
    #print("String split: ",newString)
    average = sum(len(newString) for newString in newString) / len(newString)
    #print("average: ",average)
    return average

#ParaBasics("OWO. i Am IN SO MUCH Troubles >.< i did a really big bad oh noes")

def LongWords(mypara):#will return the longest word (there can be multiple longest words) print all LONGEST words
    #wordAverage = ParaBasics(mypara)
    longWordList = []
    newString = mypara.split()
    
    largestWordLength = 0

    for word in newString: ##Getting each words length
        wordLength = len(word)
        #print(word) 
        if(wordLength > largestWordLength):
            largestWordLength = wordLength #setting largest word length
    
    for word in newString: 
        wordLength = len(word)
        if wordLength == largestWordLength: #checking if the current words are equal to the largest word length
                longWordList.append(word) #adding word to list
    
    #for i in longWordList: #printing list of long words
    #   print(i)

    return longWordList
#CALL
#mypara = "This is the second paragraph with example input for test cases. We will talk about nutrition today."
#newlist = LongWords(mypara)
#print(newlist)

def SpecialWords(mypara):#will return a list of "special" words special words contain at least one of "j, q, x, z)
    #specialwordList = []
    #check length and than use said length again to check each character
    newlist = []
    lst = list(mypara.split())

    for i in lst:
        if "j" in i or "q" in i or "x" in i or "z" in i:
            newlist.append(i)
        elif "J" in i or "Q" in i or "X" in i or "Z" in i:
            newlist.append(i)
    
    return newlist
#CALL
SpecialWords("This is the second paragraph with example input for test cases. We will talk about nutrition today.")



def CoolPara(mypara):#will return True if at least one of the longest words contains a "special" word otherwise False
    #Use LongWords() and SpecialWords()
    longWordList = LongWords(mypara) 
    for i in longWordList:
        if SpecialWords(i):
            return True
    return False
#CALL
#mypara = "This is the second paragraph with example input for test cases. We will talk about nutrition today."
#CoolPara(mypara)

mypara = "In a hole in the ground there lived a hobbit. Not a nasty, dirty, wet hole, filled with the ends of worms and an oozy smell, no yet a dry, bare, sandy hole with nothing in it to sit down on or to eat; it was a hobbit-hole, and that means comfort."
parabasics = ParaBasics(mypara)
print(parabasics)
longwords = LongWords(mypara)
print(longwords)
specialwords = SpecialWords(mypara)
print(specialwords)
coolpara = CoolPara(mypara)
print(coolpara)






