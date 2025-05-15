cast=[10,20,30,40,50]
for item in cast:
    if item>=50:
        print("we can't processes this item")
        continue
        break
    print(item)
else:
    print("all items are processed")