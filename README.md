# Vigenere-cipher
The Vigenère cipher is a method of encrypting alphabetic text by using a series of interwoven Caesar ciphers based on the letters of a keyword. It is a simple form of polyalphabetic substitution. This report illustrates the functionality of Vigenère cipher through C Programming Language. 

# Robustness of Vigenère Cipher 
+ The robustness of the Vigenère cipher primarily stems from its polyalphabetic nature, which makes it more resistant to frequency analysis compared to simple substitution ciphers. 
+ Using longer keywords in the Vigenère cipher makes it significantly more complex.

# Recommendations 
+ The Vigenère cipher provides only limited security by today's cryptographic standards. However, for informal communication between colleagues in a non-technical environment, it may provide 
adequate security if properly used with long, random keys that remain secret. 
+ It would likely not stand up to cryptanalysis by a dedicated adversary. But it could deter casual eavesdropping on messages. Proper key management is essential. 
+ More secure alternatives would be block ciphers like AES, or public key encryption if needed to provide authentication and non-repudiation. The Vigenère cipher is likely best suited for 
educational purposes today. 

# Sample Output
![image](https://github.com/Sivan1309/Vigenere-cipher/assets/71920694/cbecad79-1309-409e-ad4b-e3903418edb7)

# Conclusion 
The Vigenère cipher was considered very secure for hundreds of years until Charles Babbage and Friedrich Kasiski broke it in the 19th century. Despite being easy to understand and implement, it was 
resistant to cryptoanalysis techniques like frequency analysis due to its use of multiple substitution alphabets. Overall, through the C program user can able to encrypt or decrypt a message.
