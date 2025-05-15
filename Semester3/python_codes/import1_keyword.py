# import import_keyword
# import_keyword.add()
# import_keyword.add(5)
# import_keyword.sub()

import re
s= s = "A man, a plan, a canal: Panama012"
s=re.sub(r'[^a-zA-Z0-9]', '', s) #it remove all space and punctuation and special character and here ^ is called negation operator
        #a-zA-Z0-9 inko chode ke sab remove kar do
print(s)
