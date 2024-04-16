using System;
using System.Collections.Generic;

class KMP
{
    static List<int> ComputePrefixFunction(string pattern)
    {
        int m = pattern.Length;
        List<int> pi = new List<int>(new int[m]);
        int k = 0;
        for (int q = 1; q < m; ++q)
        {
            while (k > 0 && pattern[k] != pattern[q])
            {
                k = pi[k - 1];
            }
            if (pattern[k] == pattern[q])
            {
                ++k;
            }
            pi[q] = k;
        }
        return pi;
    }

    static int KmpSearch(string text, string pattern)
    {
        int n = text.Length;
        int m = pattern.Length;
        List<int> pi = ComputePrefixFunction(pattern);
        int q = 0;
        int index = 0;

        while (q < n)
        {
            if (pattern[index] == text[q])
            {
                ++index;
                ++q;
                if (index == m)
                {
                    return q - m;  // Pattern found at index q - m
                }
            }
            else
            {
                if (index != 0)
                {
                    index = pi[index - 1];
                }
                else
                {
                    ++q;
                }
            }
        }
        return -1;  // Pattern not found
    }

    static void Main()
    {
        string text = "abacababbacababcabab";
        string pattern = "abba";
        int result = KmpSearch(text, pattern);
        if (result != -1)
        {
            Console.WriteLine("Pattern found at index " + result);
        }
        else
        {
            Console.WriteLine("Pattern not found");
        }
    }
}
