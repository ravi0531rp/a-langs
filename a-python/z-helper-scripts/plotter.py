import numpy as np
import matplotlib.pyplot as plt

# Data
events = ['Identical Lines', 'Lines Added by DSQA', 'Lines Modified by DSQA', 'Lines Shortened by DSQA']
eave_lines = [66.48, 8.84, 24.15, 0.54]
ground_lines = [57.71, 8.81, 31.7, 1.77]

# Plotting
width = 0.2  # Decrease the width of the bars here
x = np.arange(len(events))

fig, ax = plt.subplots(figsize=(10, 6))  # Increase the figure size here
rects1 = ax.bar(x - width/2, eave_lines, width, label='Eave Lines %')
rects2 = ax.bar(x + width/2, ground_lines, width, label='Ground Lines %')

# Labeling
ax.set_xlabel('Event')
ax.set_ylabel('Percentage')
ax.set_title('Comparison of Eave Lines % and Ground Lines %')
ax.set_xticks(x)
ax.set_xticklabels(events, rotation=0)  # Rotate the event labels by 90 degrees
ax.legend()

# Add values above bars
def autolabel(rects):
    for rect in rects:
        height = rect.get_height()
        ax.annotate(f'{height}%', xy=(rect.get_x() + rect.get_width() / 2, height), xytext=(0, 3), textcoords="offset points", ha='center', va='bottom')
        # if height < 5:
        #     ax.annotate(f'{height}%', xy=(rect.get_x() + rect.get_width() / 2, height), xytext=(0, -15), textcoords="offset points", ha='center', va='bottom')

autolabel(rects1)
autolabel(rects2)

# Display the plot
plt.tight_layout()
plt.show()
