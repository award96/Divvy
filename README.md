# Divvy User Analysis - Python, R, C
**Check out the [Technical PowerPoint of Findings](https://docs.google.com/presentation/d/1-OokxZJm1_nvS5piUuCR9WUcB4hG32Avp7ZkAufJPQE/present?slide=id.g1168e3a5120_0_40)**


Project Status:
```diff
+ Completed
```

## Objective
To better understand the user base of Divvy from the massive 2021 [dataset found at ...](https://www.kaggle.com/datasets/adehghani/cyclistic-2021-data)

Divvy is a bike rideshare company in Chicago. It is operated by Lyft in conjunction with the city of Chicago. A user downloads the app, unlocks a bike, rides it, and then pays an initial fee as well as a per minute fee. Members pay a yearly subscription to get free unlocks along with other perks.

The time length of the ride was chosen as the response variable due to its multiple impacts on the business (see PowerPoint above).

### Findings
[Technical PowerPoint of Findings](https://docs.google.com/presentation/d/1-OokxZJm1_nvS5piUuCR9WUcB4hG32Avp7ZkAufJPQE/present?slide=id.g1168e3a5120_0_40)

#### Data
Each row is an individual ride

The columns:
* type of bike
* date and time when the ride starts
* **time length of the ride** - response variable
* the day of the week
* membership status

#### Methods
* Data Transformation
* Kernel Density Estimation (KDE)
* GAM models
* Regression

#### Technologies
* Python
* R
* C

## Project Description
The dataset has more than 5 million rows but only a few informative columns. Thus, we have to dissect the information from one column into multiple predictors before proceeding.

With adequate features for our model, we perform a thorough EDA, focusing on the seasonal and hourly trends of the data. R in conjunction with C is used to better understand the distribution of some of variables by Kernel Density Estimation, which provides a smooth version of the PDF (histogram).

Regression on the *time length of ride* variable is performed in Python. Different GAM models as well as log transformations are explored. The lowest MSE model ends up being a Poisson GAM with log link. This confirms our intuition, that the *time length of ride* is Poisson distributed. The individual spline and interaction terms of the GAM can be plotted to better understand the data. These graphs are much more useful than the weak predictive power of the GAM, as they can inform business decisions.

With more predictors available, prediction could be used to suggest users the appropriate bike, or to increase rewards points for the *Bike Angels* program, a program that rewards users for riding bikes into high-demand areas and parking them there.

## Contact

Feel free to email the author of this project at *anders.s.ward@gmail.com* with any questions or recommendations.


