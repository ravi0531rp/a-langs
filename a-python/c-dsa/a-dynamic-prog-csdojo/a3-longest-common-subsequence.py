def longest_common_subsequence(str1, str2):
    if len(str1) == 0 or len(str2) == 0:
        return 0
    elif str1[-1] == str2[-1]:
        return 1 + longest_common_subsequence(str1[:-1], str2[:-1])
    else:
        return max(longest_common_subsequence(str1[:-1], str2), longest_common_subsequence(str1, str2[:-1]))

def longest_common_substring(str1, str2, counter): # this may be wrong..
    tmp = counter
    if len(str1) == 0 or len(str2) == 0:
        return 0
    elif str1[-1] == str2[-1]:
        counter =  1 + longest_common_substring(str1[:-1], str2[:-1],tmp + 1 )
    else:
        counter =  max(tmp, longest_common_substring(str1[:-1], str2, 0), longest_common_substring(str1, str2[:-1], 0))

    return counter



if __name__ =="__main__": 
    string_1 = "backus"
    string_2 = "backsp"
    print(longest_common_subsequence(string_1, string_2))
    print(longest_common_substring(string_1, string_2,0))   

