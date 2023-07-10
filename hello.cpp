#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> loadWordsFromFile(const std::string& filename) {
    std::vector<std::string> words;
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string word;
        while (std::getline(file, word)) {
            words.push_back(word);
        }
        file.close();
    }
    return words;
}
std::string analyzeSentiment(const std::string& sentence, const std::vector<std::string>& happyWords,
                             const std::vector<std::string>& sadWords, const std::vector<std::string>& abusiveWords,
                             const std::vector<std::string>& excitedWords,
                             const std::vector<std::string>& surprisedWords,
                             const std::vector<std::string>& calmWords,
                             const std::vector<std::string>& frustratedWords,
                             const std::vector<std::string>& anxiousWords,
                             const std::vector<std::string>& gratefulWords,
                             const std::vector<std::string>& confusedWords,
                             const std::vector<std::string>& proudWords,
                             const std::vector<std::string>& jealousWords,
                             const std::vector<std::string>& disappointedWords,
                             const std::vector<std::string>& indifferentWords,
                             const std::vector<std::string>& enthusiasticWords,
                             const std::vector<std::string>& sympatheticWords,
                            const std::vector<std::string>& complimentWords
                             ) {
    std::string lowerSentence = sentence;
    std::transform(lowerSentence.begin(), lowerSentence.end(), lowerSentence.begin(), ::tolower);
    
    int happyCount = 0;
    int sadCount = 0;
    int abusiveCount = 0;
    int excitedCount = 0;
    int surprisedCount = 0;
    int calmCount = 0;
    int frustratedCount = 0;
    int anxiousCount = 0;
    int gratefulCount = 0;
    int confusedCount = 0;
    int proudCount = 0;
    int jealousCount = 0;
    int disappointedCount = 0;
    int indifferentCount = 0;
    int enthusiasticCount = 0;
    int sympatheticCount = 0;
    int complimentcount=0;
    
    for (const std::string& word : happyWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            happyCount++;
        }
    }
    
    for (const std::string& word : sadWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            sadCount++;
        }
    }
    
    for (const std::string& word : abusiveWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            abusiveCount++;
        }
    }
    
    for (const std::string& word : excitedWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            excitedCount++;
        }
    }
    
    for (const std::string& word : surprisedWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            surprisedCount++;
        }
    }
    
    for (const std::string& word : calmWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            calmCount++;
        }
    }
    
    for (const std::string& word : frustratedWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            frustratedCount++;
        }
    }
    
    for (const std::string& word : anxiousWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            anxiousCount++;
        }
    }
    
    for (const std::string& word : gratefulWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            gratefulCount++;
        }
    }
    
    for (const std::string& word : confusedWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            confusedCount++;
        }
    }
    
    for (const std::string& word : proudWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            proudCount++;
        }
    }
    
    for (const std::string& word : jealousWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            jealousCount++;
        }
    }
    
   
    
   
    for (const std::string& word : disappointedWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            disappointedCount++;
        }
    }
    
  
    
    for (const std::string& word : indifferentWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            indifferentCount++;
        }
    }
    
    for (const std::string& word : enthusiasticWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            enthusiasticCount++;
        }
    }
    
    for (const std::string& word : sympatheticWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            sympatheticCount++;
        }
    }
    for (const std::string& word : complimentWords) {
        if (lowerSentence.find(word) != std::string::npos) {
            complimentcount++;
        }
    }
    
   
    
    if (abusiveCount > 0) {
        return "abusive";
    }
    
    
    else if (happyCount > sadCount) {
        return "happy";
    }
    else if (sadCount > happyCount) {
        return "sad";
    }
    else if (excitedCount > 0) {
        return "excited";
    }
    else if (surprisedCount > 0) {
        return "surprised";
    }
    else if (calmCount > 0) {
        return "calm";
    }
    else if (frustratedCount > 0) {
        return "frustrated";
    }
    else if (anxiousCount > 0) {
        return "anxious";
    }
    else if (gratefulCount > 0) {
        return "grateful";
    }
    else if (confusedCount > 0) {
        return "confused";
    }
    else if (proudCount > 0) {
        return "proud";
    }
    else if (jealousCount > 0) {
        return "jealous";
    }
   
   
    else if (disappointedCount > 0) {
        return "disappointed";
    }
    
    else if (indifferentCount > 0) {
        return "indifferent";
    }
    else if (enthusiasticCount > 0) {
        return "enthusiastic";
    }
    else if (sympatheticCount > 0) {
        return "sympathetic";
    }
    else if (complimentcount > 0) {
        return "Compliment";
    }
    else {
        return "neutral";
    }
}

int main() {
    // Load word lists from files
    std::vector<std::string> happyWords = loadWordsFromFile("happy.txt");
    std::vector<std::string> sadWords = loadWordsFromFile("sad.txt");
    std::vector<std::string> abusiveWords = loadWordsFromFile("abusive.txt");
    std::vector<std::string> excitedWords = loadWordsFromFile("excited.txt");
    std::vector<std::string> surprisedWords = loadWordsFromFile("surprised.txt");
    std::vector<std::string> calmWords = loadWordsFromFile("calm.txt");
    std::vector<std::string> frustratedWords = loadWordsFromFile("frustrated.txt");
    std::vector<std::string> anxiousWords = loadWordsFromFile("anxious.txt");
    std::vector<std::string> gratefulWords = loadWordsFromFile("grateful.txt");
    std::vector<std::string> confusedWords = loadWordsFromFile("confused.txt");
    std::vector<std::string> proudWords = loadWordsFromFile("proud.txt");
    std::vector<std::string> jealousWords = loadWordsFromFile("jealous.txt");
    std::vector<std::string> disappointedWords = loadWordsFromFile("disappointed.txt");
    std::vector<std::string> indifferentWords = loadWordsFromFile("indifferent.txt");
    std::vector<std::string> enthusiasticWords = loadWordsFromFile("enthusiastic.txt");
    std::vector<std::string> sympatheticWords = loadWordsFromFile("sympathetic.txt");
   std::vector<std::string> complimentWords = loadWordsFromFile("compliment.txt");

    // Get input sentence from the user
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    // Analyze the sentiment of the sentence
    std::string sentiment = analyzeSentiment(sentence, happyWords, sadWords, abusiveWords,
                                             excitedWords, surprisedWords, calmWords,
                                             frustratedWords, anxiousWords, gratefulWords,
                                             confusedWords, proudWords, jealousWords,
                                             disappointedWords,
                                              indifferentWords, enthusiasticWords,
                                             sympatheticWords,complimentWords);

    // Output the sentiment
    std::cout << "Sentiment: " << sentiment << std::endl;

    return 0;
}
