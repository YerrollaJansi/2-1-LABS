
# AIM : Write a C++ program to use scope resolution operator. Display the various values of the same variables declared at different scope levels.
# ALGORITHM:
 When both global and local variables have the same name then global variable is hidden inside the
 local scope. Therefore, we use the scope resolution operator to refer to the global variable.
step 1:include required header file(iostream).
step 2:declare and assign a value to the variable(a) before main ().
step 3:In the main(), now use the same variable(a) and assign another value to it.
step 4:display the vaue of global variable(a) using scope resolution operator(::) i.e cout<<::a.
step 5:display the vaue of local variable(a) with its name i.e cout<<a.
step 6:return 0 to end the program.
