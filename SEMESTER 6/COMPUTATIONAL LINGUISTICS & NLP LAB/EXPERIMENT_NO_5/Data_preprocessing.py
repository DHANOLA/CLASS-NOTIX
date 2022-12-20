# -*- coding: utf-8 -*-
"""
Created on Wed Feb 16 09:26:21 2022

@author: sshivhare
"""

# Data processing Techniques 

'''
1. Rescaling the Data (Normalization)
We rescale attributes into the range 0 to 1 and call it normalization.
'''

import pandas as pd
import scipy
import numpy as np
from sklearn.preprocessing import MinMaxScaler
df=pd.read_csv('winequality-red.csv', sep=';')
array=df.values
#Separating data into input and output components
x=array[:,0:11]
y=array[:,11]
scaler=MinMaxScaler(feature_range=(0,1))
rescaledX_MinMax=scaler.fit_transform(x)
np.set_printoptions(precision=3) #Setting precision for the output
rescaledX_MinMax[0:5,:]

''' 2. Standardizing Data
With standardizing, we can take attributes with a Gaussian distribution
and different means and standard deviations and transform them into a
standard Gaussian distribution with a mean of 0 and a standard 
deviation of 1. 
'''

from sklearn.preprocessing import StandardScaler
scaler=StandardScaler().fit(x)
rescaledX_Std=scaler.transform(x)
rescaledX_Std[0:5,:]

'''
3. Binarizing Data
Using a binary threshold, it is possible to transform our data by 
marking the values above it 1 and those equal to or below it, 0.
'''

from sklearn.preprocessing import Binarizer
binarizer=Binarizer(threshold=0.0).fit(x)
binaryX=binarizer.transform(x)
binaryX[0:5,:]

'''
4. Mean Removal
It involves removing the mean from each feature so that it is centered
on zero. Mean removal helps in removing any bias from the features.
Observe that in the output, mean is almost 0 and the standard deviation 
is 1.

'''
from sklearn.preprocessing import scale
data_standardized=scale(df)
data_standardized.mean(axis=0)
data_standardized.std(axis=0)


'''
5. Label Encoding
Label encoding refers to changing the word labels into numbers so 
that the algorithms can understand how to work on them.

'''
from sklearn import preprocessing
label_encoder = preprocessing.LabelEncoder()
input_classes = ['suzuki', 'ford', 'suzuki', 'toyota', 'ford', 'bmw']
label_encoder.fit(input_classes)
print ("\nClass mapping:")
for i, item in enumerate(label_encoder.classes_):
    print (item, '-->', i)

'''
6. Data Analysis

Describing the dataset
    
'''
df.describe()


'''
Shape of the dataset
'''
df.shape

'''
Extracting data from the dataset
'''

df.head(10)

'''
Performing operations around a variable
'''

df.groupby('quality').size()

'''
Visualizing Data-Univariate Plots
'''
'''Histograms
Since histograms group data into bins and give us an idea of how many 
observations each bin holds, this is a good way to visualize
 data for ML. The shapes of the bins tell us whether an attribute is
Gaussian, skewed, or has an exponential distribution. 
It also hints us about outliers.
'''

import matplotlib.pyplot as plt
df.hist()
plt.show()

'''
Density Plots
A density plot appears to be an abstracted histogram. 
Each bin has a smooth curve drawn through its top. 
'''

df.plot(kind='density',subplots=True,sharex=False)
plt.show()


'''
Box and Whisker Plots:
A box plot summarizes how each attribute is distributed. 
It also draws a line for the median and a box around the 25th and 
75th percentiles. Whiskers tell us how the data is spread, and the 
dots outside the whiskers give candidate outlier values.     

'''
df.plot(kind='box',subplots=True,sharex=False,sharey=False)
plt.show()

'''
Correlation Matrix Plot:
Such a plot denotes how changes between two variables relate. 
Two variables that change in the same direction are positively 
correlated. A change in opposite directions implies negative 
correlation. 
'''

correlations=df.corr()
fig=plt.figure()
ax=fig.add_subplot(111)
cax=ax.matshow(correlations,vmin=-1,vmax=1)
fig.colorbar(cax)

'''
Scatterplot Matrix
Scatterplot matrices depict how two variables relate as dots 
in two dimensions. Plotting all scatterplots for a data together 
in one place results in a scatterplot matrix. 
These plots can spot structured relationships between variables. 

'''
pd.plotting.scatter_matrix(df)













