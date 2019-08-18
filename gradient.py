import pandas as pd
import numpy as np
from sklearn.linear_model import LinearRegression

marks = pd.read_csv("gradData.csv")
df = pd.DataFrame(marks)

mse_mark = np.array(df['mse']).reshape(-1,1)
ese_mark = np.array(df['ese']).reshape(-1,1)


rm = LinearRegression()
rm.fit(mse_mark,ese_mark)

print(rm.coef_)
print(rm.intercept_)
