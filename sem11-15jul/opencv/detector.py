##Detector de rostros en imágenes

import cv2
import numpy as np 

faceClassif = cv2.CascadeClassifier('./haarcascade/haarcascade_frontalface_default.xml')

#image = cv2.imread('amigos.jpeg')
#image = cv2.imread('amigos2.jpeg')
image = cv2.imread('amigos3.jpeg')

gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

faces = faceClassif.detectMultiScale(gray,
	scaleFactor=1.1,
	minNeighbors=5,
	minSize=(30,30),
	maxSize=(500,500))

for (x,y,w,h) in faces:
	cv2.rectangle(image, (x,y), (x+w,y+h), (0,255,0), 2)

cv2.imshow('image',image)
cv2.waitKey(0)
cv2.destroyAllWindows()
