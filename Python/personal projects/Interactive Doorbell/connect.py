Upon Event:
    ButtonPressDoor==True .x
        requestCall(door,x)--> if request == True --> connect(door,x){connectVoice(door,x) :: liveVideo(x)} else notify(-1)
        while (ButtonPress==True)
        {openDoor({if timeout==True ButtonPress=False})}
    
