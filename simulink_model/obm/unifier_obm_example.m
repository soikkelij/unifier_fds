% Load initial parameters:
UNIFIER_LOAD

% Set to Rapid Accelerator (will compile the model to MEX):
set_param('unifier_obm_wrapper','SimulationMode','rapid-accelerator')

% Compile the model:
unifier_obm_wrapper([],[],[],'compile');

% Check the run time:
tic
for i = 1:1000
    x = rand(1,12);
    u = rand(1,20);
    out = unifier_obm_wrapper(1/500,[],[x,u].*0.1,'outputs');
end
toc

% Release the model:
unifier_obm_wrapper([],[],[],'term');
