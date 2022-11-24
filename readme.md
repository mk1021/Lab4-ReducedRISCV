**WORKING CPU EVIDENCE**







**CHALLENGES FACED AS A TEAM**

As a team our first task was to make a git repository. Although this may seem like a small task, none of us had any experience doing this so after some 
research we decided to make a main branch then a branch for each component/task of the CPU. Unfrotunately this was unsuccessful as we couldn't see each
others changes and push requests. After some more research we found it best to just have one main branch with all the files attached to it. This solved
all our problems as we could then see each others changes and everything was stored correctly! We then assigned each person a task.

1. PC counter - Bilal
2. Contol Unit, sign ext. and instr mem - Hana
3. ALU - Shreya
4. Testbench - Monika

All the tasks were very tricky in terms of understanding how to link the machine language and the system verilog coding together. However, we realised it 
was just our normal system verilog coding but within the code we had to call the corresponding number of bits to the vbuddy instruction types. So for 
example, in the instruction memory part for this specific machine code we needed addi ( add immediate) and bne (branch not equal). So to do this we coded
it so that the immediates correspond to the correct bits. After understanding the concept we managed to do task 1-3 well. 

<img width="559" alt="Screenshot 2022-11-24 at 13 06 29" src="https://user-images.githubusercontent.com/108066429/203791707-82246dd3-d261-4085-8a9e-6767aa1b30fb.png">

We then made a top.sv to link all 3 parts together into one file and then this can be used in the testbench. 
Finally, the testbench! This part was the bit we avoided most for some reason because writing a testbench from scratch seems really scary to be honest! 
However, we realised it was similar to lab1 task 2 we just had to change the file names and edit the main a little bit. Once we did that we ran the codes
into testbench and encountered some syntax errors in some of task1-3 which we then editted and finally got the vbuddy working! (I attached the errors as 
images in the main branch.)

<img width="666" alt="image" src="https://user-images.githubusercontent.com/108066429/203792052-3114782e-35fb-4294-9558-11c1d0dd8d69.png">

**NOT OBVIOUS CHANGES**

One thing we thought we needed to do was include " vbdHex(1, (int(top->a0)) & 0xF); " , however soon realised this wasn't a requirement for this task as 
the vbuddy already has a display screen and this was actually meant for a task similar to lab3. 

**THINGS TO DO DIFFERENTLY**

As a group we should've researched more about git before starting to save time, other than that I like my team mates and I wouldn't change anything about
them, they're perfect just like this module!
