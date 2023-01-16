import pandas as pd
import matplotlib.pyplot as plt

results = pd.read_csv('result.csv')

n = results["n"]
iterative = results["Iterative"]
recursive = results["Recursive"]

print(results)

plt.title("Difference in Time Between Recursive and Iterative \n power(3.14159265359,exponent)")
plt.ylabel("Time (nanoseconds)")
plt.xlabel("Exponent")
plt.plot(n,iterative,label="Iterative")
plt.plot(n,recursive,label="Recursive")
plt.legend()
plt.show()