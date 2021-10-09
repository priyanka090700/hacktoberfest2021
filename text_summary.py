import nltk
from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize, sent_tokenize
import heapq


def nltk_summarizer(raw_text):
  # Getting the stopwords for English language
  stopWords = set(stopwords.words("english"))
  
  word_frequencies = {}
  # tokenization of every word in sentences of raw_text and keeping frequencies of each word
  for word in nltk.word_tokenize(raw_text):
      if word not in stopWords:
          if word not in word_frequencies.keys():
              word_frequencies[word] = 1
          else:
              word_frequencies[word] += 1

  # word with maximum frequence, that is word with maximum occurrence
  maximum_frequncy = max(word_frequencies.values())

  # determining the weight of every word
  for word in word_frequencies.keys():
      word_frequencies[word] = (word_frequencies[word]/maximum_frequncy)

  # tokenization of sentences
  sentence_list = nltk.sent_tokenize(raw_text)
  
  # determining the scores of each sentence
  sentence_scores = {}
  for sent in sentence_list:
      for word in nltk.word_tokenize(sent.lower()):
          if word in word_frequencies.keys():
              if len(sent.split(' ')) < 30:
                  if sent not in sentence_scores.keys():
                      sentence_scores[sent] = word_frequencies[word]
                  else:
                      sentence_scores[sent] += word_frequencies[word]
                      
  # sentences with largest scores
  summary_sentences = heapq.nlargest(7, sentence_scores, key=sentence_scores.get)

  # joining the sentences with maximum scores to make a extractive summary.
  summary = ' '.join(summary_sentences)
  return summary

raw_text = "Enter your text article, make sure the content is of good size in terms of word count."
print(nltk_summarizer(raw_text))
