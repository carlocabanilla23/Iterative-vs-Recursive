import pandas as pd
import matplotlib.pyplot as plt

results = pd.read_csv('result.csv')

n = results["n"]
iterative = results["Iterative"]
recursive = results["Recursive"]

print(results)

plt.title("Difference in Time Between Recursive and Iterative \n power(3.14159265359,exponent) on 1000 iterations")
plt.ylabel("Time (nanoseconds)")
plt.xlabel("Exponent")
plt.scatter(n,iterative,label="Iterative")
plt.scatter(n,recursive,label="Recursive")
plt.legend()
plt.show()