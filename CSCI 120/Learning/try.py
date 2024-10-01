def first(x):
    print("starting first.")
    try:
        second(x)
    except:
        print("Caught at first.")
    print("ending first")

def second(x):
    print("Starting second.")
    try:
        third(x)
    except:
        print("Caught at second.")
    print("Ending Second")

def third(x):
    print("Starting third")
    assert x<1
    print("Ending Third")

first(0)