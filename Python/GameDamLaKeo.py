from random import randint

print("Nhap Dam, La, Keo")
player= intput()
computer=randint(0,2)



if computer == 0:
	computer = "Dam"
if computer == 1:
	computer = "La"
if computer == 2:
	computer = "Keo"

print("-----")
print("You choose: " + player)
print("Computer choose: " + computer)

if player == computer:
	print("Draw")
else:
	if player == "Keo":
		if computer == "La"
			print("Win")
		else: #Dam
			print("Lose")
	elif player == "Dam":
		if computer == "Keo"
			print("Win")
		else: #La
			print("Lose")
	elif player == "La":
		if computer == "Dam"
			print("Win")
		else: #Keo
			print("Lose")
	else:
		print("Nhap sai!")
   
 #https://www.youtube.com/watch?v=HyovJpkPSfY&list=RDCMUCMYT8xymrm4VOP241b86MCQ&start_radio=1&rv=HyovJpkPSfY&t=1493