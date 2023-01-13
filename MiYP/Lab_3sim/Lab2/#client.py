import socket , tkinter
from unicodedata import name

# tk = tkinter.Tk()
# tk.title("Ktl Чат")
# tk.resizable(width=False,height=False)

HOST = "127.0.0.1"
PORT = 5001
s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.connect((HOST,PORT))




# canvas = tkinter.Canvas(tk)
# canvas['height']=360
# canvas['width']=480
# canvas['background']='#ffffff'
# canvas['borderwidth']='2'
# canvas.pack()

# Сокетовая часть
name = input("Введите свое имя: ")
while 1:
    data = name + ':' + input(f"Myᐳ")
    s.send(data.encode())
    data = s.recv(1024)
    print(data.decode('utf-8'))
    continue
s.close()
print('Получена дата')
