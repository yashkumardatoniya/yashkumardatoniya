f = input('Function');
df = input('Enter Derivative');
e = input('Enter tolerance');
x0 = input('Enter initial guess');
n = input('Iteration');
if df(x0) ~= 0
    for i = 1:n
        x1 = x0 - (f(x0)/df(x0))
        fprintf('x%d = %.20f\n', i, x1)
        if abs(x1 - x0)<e
            break
        end
        if df(x1) == 0
            disp('Newton raphson failed')
        end
        x0 = x1;
    end
else
    disp('Raphson failed')
end