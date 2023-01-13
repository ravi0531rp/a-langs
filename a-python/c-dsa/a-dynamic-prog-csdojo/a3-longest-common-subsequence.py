def longest_common_subsequence(str1, str2):
    if len(str1) == 0 or len(str2) == 0:
        return 0
    elif str1[-1] == str2[-1]:
        return 1 + longest_common_subsequence(str1[:-1], str2[:-1])
    else:
        return max(longest_common_subsequence(str1[:-1], str2), longest_common_subsequence(str1, str2[:-1]))


def longest_common_subseq(str1,str2,m,n,memo):
    if m == 0 or n == 0:
        memo[m][n] = 0
        return 0
    if memo[m][n]:
        return memo[m][n]
    
    if str1[m-1] == str2[n-1]:
        val = 1 + longest_common_subseq(str1,str2,m-1,n-1,memo)
        memo[m][n] = val
    else:
        val = max(longest_common_subseq(str1,str2,m-1,n, memo), longest_common_subseq(str1,str2,m,n-1,memo))
        memo[m][n] = val
    return val



if __name__ =="__main__": 
    string_1 = "backus"
    string_2 = "backsp"
    print(longest_common_subsequence(string_1, string_2))

    m = len(string_1)
    n = len(string_2)

    memo = [[None]*(m+1)]*(n+1)
    print(longest_common_subseq(string_1,string_2,m,n,memo))