import pyautogui
import pyperclip
import time

def auto_type_from_clipboard(delay=0.1):
    """
    Automatically types the text currently in the clipboard with a specified delay between keystrokes.

    :param delay: The delay (in seconds) between typing each character.
    """
    # Get text from clipboard
    text = pyperclip.paste()
    
    if not text:
        print("Clipboard is empty!")
        return

    print("Typing the copied text...")
    
    # Wait a few seconds to allow focus on the target window
    time.sleep(2)
    
    # Type each character in the clipboard text
    for char in text:
        pyautogui.write(char)  # Simulate typing the character
        time.sleep(delay)  # Optional: Delay between keystrokes

# Example usage:
if __name__ == "__main__":
    auto_type_from_clipboard()
