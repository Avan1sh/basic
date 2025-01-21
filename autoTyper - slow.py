import pyperclip 
import pyautogui
import time
def process_clipboard():
    clipboard_content = pyperclip.paste()
    print("Clipboard Content:", repr(clipboard_content))
    lines = clipboard_content.split("\n")
    print("Lines:", lines)
    for line in lines:
        pyautogui.write(line, interval=0.0001) 
        pyautogui.press("enter")
        time.sleep(0.05)
time.sleep(4) 
process_clipboard()