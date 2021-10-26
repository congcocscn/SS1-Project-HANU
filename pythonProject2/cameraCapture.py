import cv2
import tkinter
from tkinter import messagebox
import os


video_capture = cv2.VideoCapture(0)

img_num = 0


while video_capture.isOpened():
    ret, frame = video_capture.read()
    # # show video full screen
    # cv2.namedWindow('Face recogition', cv2.WINDOW_NORMAL)
    # cv2.setWindowProperty('Face recogition', cv2.WND_PROP_FULLSCREEN, cv2.WINDOW_FULLSCREEN)

    # # translate video to gray scale
    # grey = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    # cv2.imshow("Face recogition", grey)

    cv2.imshow('Face recogition', frame)
    keyboard = cv2.waitKey(1) & 0xFF
    if  keyboard == 27:  # 32 là mã ascii của phím space, 27 là mã phím ESC
        break

    # to capture the screen by using 'C' key
    elif keyboard == 32:

        root = tkinter.Tk()
        root.withdraw()
        if cv2.imwrite('screenshot(' + str(img_num) + ').jpg', frame):
            img_num += 1
            messagebox.showinfo("Screen capture", "DONE !")
        else:
            messagebox.showinfo("Screen capture", "Fail !!!")
        continue
    else:
        continue


video_capture.release()
cv2.destroyAllWindows()