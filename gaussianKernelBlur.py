import math

def normalDistribution(sigma,mean,x):
    denominator = sigma * math.sqrt(2 * math.pi)
    core = (1/denominator) * math.e
    power = -pow(x - mean,2) / 2 * pow(sigma,2)
    result = math.pow(core,power)
    print(result)
    
def gaussianFunc(sigma,mean,x):
    denominator = sigma * math.sqrt(2 * math.pi)
    expon = math.exp((-1/2) * (math.pow(x - mean , 2) / pow(sigma,2)))
    a = 1/denominator
    result = a * expon
    return result

def getSigma(radius):
   sigma = (radius / math.sqrt(-2.0 * math.log(1 - 0.995)))
   return sigma


def getRadius(sigma):
    radius = math.ceil(math.sqrt(-2.0 * sigma * sigma * math.log(1.0 - 0.995)));
    return radius

kernelRadius = 20

sigma = getSigma(kernelRadius)


gaussianKernel = []


for i in range(kernelRadius*2 + 1):
    gaussianKernel.append(gaussianFunc(sigma , 0 , i - kernelRadius))


print(gaussianKernel)