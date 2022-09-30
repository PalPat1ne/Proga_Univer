from secrets import choice
import tkinter
import math
from turtle import width
tk = tkinter.Tk()
tk.title("Первая лаба")
tk.resizable(width=False,height=False)
frame_1= tkinter.Frame(tk,bg="white",bd=0)
frame_1.pack()
prt = 0
def displae_selection(choice):
    global prt
    prt = tkvard.get()

def but_funk():
    if prt == '❶ y=Ax+B':
        grafic_1()
    if prt == '❷ y=A+B/x':
        grafic_2()
    if prt == '❸ y=Ax^2':
        grafic_3()
    if prt == '❹ y=Acos(B*x)':
        grafic_4()
    

def grafic_1():
    y6_axe=[]
    yy = (22,335)
    y6_axe.append(yy)
    yy =(470,20)
    y6_axe.append(yy)
    convas.create_line(y6_axe,fill='black')

def grafic_2():
    points = []
    for i in range(35,4000,5):
        x = i/10
        y=-1000/x
        pp=(x+40,y+320)
        points.append(pp)
    convas.create_line(points,fill='red',smooth=1)

def grafic_3():
    points = []
    for i in range(0,780,1):
        x=i/10
        y=-0.05*x*x
        pp1=(x+23,y+334)
        points.append(pp1)
    convas.create_line(points,fill='blue',smooth=1)

def grafic_4():
    points = []
    for i in range(0,400,12):
        x=i
        y=100*math.cos(i)
        pp1=(x+23,y+234)
        points.append(pp1)
    convas.create_line(points,fill='green',smooth=1)
def clear():
    convas.create_rectangle(23,20,470,334,outline="white",fill='white')




button = tkinter.Button(
    text="Закрыть ✖",
    font=("Times New Roman",12),
    bg="#DCDCDC", #украшательства
    fg="black",
    command=tk.quit,)
button.pack()    
button.place(x=385,y=1)


button1 = tkinter.Button(
    text="✍",
    font=("Times New Roman",12),
    bg="#DCDCDC", #украшательства
    fg="black",
    command=but_funk
     )
button1.pack()
button1.place(x=140,y=1)

button2 = tkinter.Button(
    text="☠",
    font=("Times New Roman",12),
    bg="#DCDCDC", #украшательства
    fg="black",
    command=clear,
     )
button2.pack()
button2.place(x=181,y=1)

O_menu = ['Функции⇩','❶ y=Ax+B','❷ y=A+B/x','❸ y=Ax^2','❹ y=Acos(B*x)']
tkvard = tkinter.StringVar(tk)
tkvard.set(O_menu[0])
menu = tkinter.OptionMenu(tk,tkvard,*O_menu,command=displae_selection)
menu.config(width=12 , height=1)
menu.pack(anchor='nw')



convas = tkinter.Canvas(tk)
convas['height']=360
convas['width']=480
convas['background']='#ffffff'
convas['borderwidth']='2'
convas.pack()
convas.create_text(10,10,text='Y')
convas.create_text(470,350,text='X')
convas.create_text(10,350,text='0')
y_axe=[]
yy = (22,10)
y_axe.append(yy)
yy =(22,335)
y_axe.append(yy)
convas.create_line(y_axe,fill='black')
y1_axe=[]
yy = (22,335)
y1_axe.append(yy)
yy =(470,335)
y1_axe.append(yy)
convas.create_line(y1_axe,fill='black') 
y2_axe=[]
yy = (460,330)
y2_axe.append(yy)
yy =(470,335)
y2_axe.append(yy)
convas.create_line(y2_axe,fill='black') 
y3_axe=[]
yy = (460,340)
y3_axe.append(yy)
yy =(470,335)
y3_axe.append(yy)
convas.create_line(y3_axe,fill='black')
y4_axe=[]
yy = (22,10)
y4_axe.append(yy)
yy =(17,20)
y4_axe.append(yy)
convas.create_line(y4_axe,fill='black')
y5_axe=[]
yy = (22,10)
y5_axe.append(yy)
yy =(27,20)
y5_axe.append(yy)
convas.create_line(y5_axe,fill='black')
tk.mainloop()
