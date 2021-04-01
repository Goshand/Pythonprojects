import string

def update_cypher(letters, shift):
	mini_cypher={}
	shift=shift%len(letters)
	for i in range(len(letters)):
		end=i+shift
		if end > len(letters)-1:
			end=end-len(letters)
		mini_cypher.update({letters[i]:letters[end]}) 
	return mini_cypher
cypher={}

cypher.update(update_cypher(string.ascii_lowercase, 4))

#--------------------------------------------------------------

cypher.update(update_cypher(string.ascii_uppercase, 6))
	
#--------------------------------------------------------------

cypher.update(update_cypher(string.punctuation, 3))

#---------------------------------------------------------------

message=input("What sentence would you like to cypher? ")
print()

encoded_message=""
	

for letter in message:
	if letter == " ":
		encoded_message += ""
	else:	
		encoded_message += cypher[letter]
print(encoded_message)

#----------------------------------------------------------------
print()
decoded_message=""

for letter in encoded_message:
	if letter == " ":
		decoded_message += " "
	else:
		for key,value in cypher.items():
			if value == letter:
				decoded_message += key

print(decoded_message)
