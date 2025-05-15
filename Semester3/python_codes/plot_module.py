# Matplotlib: it is low level graph and created by John D.Hunter. and open source and mostlt written in python
# Pyplot:Mst of the matplotlib utilise lies under teh pyplot submodule,and are usually imported under the plt alias:
# plotting with line
import matplotlib.pyplot as plt
import numpy as np
xpoints=np.array([0,6])
ypoints=np.array([0,250])
plt.plot(xpoints,ypoints)
plt.show()
# import matplotlib.pyplot as plt
# import numpy as np
# xpoints=np.array([1,8])
# ypoints=np.array([3,10])
# plt.plot(xpoints,ypoints,'o')
# plt.show()    