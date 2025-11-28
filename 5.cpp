int countWords(string s) {
    int count = 0;
    bool inWord = false;

    for (char ch : s) {
        if (ch == ' ') {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }
    return count;
}
