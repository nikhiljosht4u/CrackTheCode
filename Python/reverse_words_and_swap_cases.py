"""Write a Python script that reads lines of text from standard input, reverses the order of words in each line, and swaps the case of each character."""

import sys

def reverse_words_order_and_swap_cases(sentence):
    words = sentence.split()
    reversed_words = words[::-1]
    reversed_sentence = ' '.join(reversed_words)
    swapped_case_sentence = reversed_sentence.swapcase()
    return swapped_case_sentence

if __name__ == "__main__":
    for line in sys.stdin:
        line = line.strip()
        if line:
            result = reverse_words_order_and_swap_cases(line)
            print(result)
