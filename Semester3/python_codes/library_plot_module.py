# Matplotlib: it is low level graph and created by John D.Hunter. and open source and mostlt written in python
# Pyplot:Mst of the matplotlib utilise lies under teh pyplot submodule,and are usually imported under the plt alias:
# plotting with line
# import matplotlib.pyplot as plt
# import numpy as np
# xpoints=np.array([0,6])
# ypoints=np.array([0,250])
# plt.plot(xpoints,ypoints)
# plt.show()
import matplotlib.pyplot as plt
import numpy as np
xpoints=np.array([1,8])
ypoints=np.array([3,10])
plt.plot(xpoints,ypoints,'o')
plt.show()    

# import matplotlib.pyplot as plt 
# import numpy as np
'''  1). xpoints=np.array([1,8])
        ypoints=np.array([3,10])
        plt.plot(xpoints,ypoints)
        plt.show() '''

'''  2). xpoints=np.array([0,6])
         ypoints=np.array([0,250])
         plt.plot(xpoints,ypoints)
         plt.show()  '''

'''  3). xpoints = np.array([1,2,6,8])
         ypoints =  np.array([3,8,1,10,5,7]) np.array([3,8,1,10])
         plt.plot (ypoints) ( xpoints ,ypoints)
         plt.show()   '''

'''  4). ypoints=np.array([3,8,1,10,5,7])
         plt.plot(ypoints)
         plt.grid()
         plt.show()   '''
'''  5). x=np.array([5,7,8,7,2,17,2,9,4,11,12,9,6])
         y=np.array([99,86,87,88,111,86,103,87,94,78,77,85,86])
         plt.scatter(x,y)
         plt.show()  '''

'''  6). x=np.array(["a","b","c","d"])
         y=np.array([3,8,1,10])
         plt.bar(x,y)
         plt.show()  '''

'''  7).HISTOGRAM 
        import matplotlib.pyplot as plt 
        import numpy as np
        x=np.random.normal(170,10,250)
        plt.hist(x)
        plt.show()  '''

'''  8). Creating Pie Charts
         y=np.array([35,25,25,15])
         mylabels=["apples","banana","cherries","dates"]
         plt.pie(y,labels=mylabels)
         plt.show()  '''