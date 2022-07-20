% UNIFIER19 C7A-HARW FLIGHT DYNAMICS SIMULATOR
% Revision: 19.07.2022 - J.Soikkeli
%
% www.unifier19.eu
%
% The project has received funding from the CleanSky2 Joint Undertaking (JU) under grant agreement NO 864901. 
% The JU receives support from the European Union%s Horizon 2020 research and innovation programme and the 
% Clean Sky 2 JU members other than the Union.

clear all
close all
clc
addpath(genpath(pwd))

load("dp_VTAIL.mat");
load("dp_VTAIL_INDUCED.mat");
load("dp_WING.mat");
load("dp_FUSE_FIN.mat");
load("dp_HTU.mat")
load("dp_DEP.mat")

% Mass case NO PASSENGERS, FULL FUEL: (aft C.G.)
m = 5423;
xyz_cg = [-8.45,0,-0.2];

% Mass case FULL PASSANGERS, FULL FUEL:
m = 7438;
xyz_cg = [-8.32,0,-0.2];

% Mass case FULL PASSANGERS, FULL FUEL, WITH ONLY PARTIAL CARGO: (front C.G.)
m = 7057;
xyz_cg = [-8.09,0,-0.2];

% Constants:
I = [23600,     -0,  -1740;
    -0,  89800,     -0;
    -1740,     -0, 102000];

b = 20.11467;
c = 1.43676;
S = 29.98388;

wing_nodes = [fliplr(dp_WING_tip.LE_Xs),fliplr(dp_WING_root.LE_Xs),dp_WING_root.LE_Xs,dp_WING_tip.LE_Xs;...
    fliplr(-dp_WING_tip.LE_Ys),fliplr(-dp_WING_root.LE_Ys),dp_WING_root.LE_Ys,dp_WING_tip.LE_Ys;...
    fliplr(dp_WING_tip.LE_Zs),fliplr(dp_WING_root.LE_Zs),dp_WING_root.LE_Zs,dp_WING_tip.LE_Zs];

vtail_nodes = [dp_VTAIL.Xs_LE;...
    dp_VTAIL.Ys_LE;...
    dp_VTAIL.Zs_LE];

vtail_dist_to_wing = 7.8070;

xyz_DEP = [ -6.9629998	-6.9210000	-6.8660002	-6.8099999	-6.7540002	-6.6999998	-6.6999998	-6.7540002	-6.8099999	-6.8660002	-6.9210000	-6.9629998
    -10.050000	-8.4499998	-6.8499999	-5.2500000	-3.6500001	-2.0500000	2.0500000	3.6500001	5.2500000	6.8499999	8.4499998	10.050000
    -0.90899998	-0.79200000	-0.82300001	-0.85000002	-0.87599999	-0.89899999	-0.89899999	-0.87599999	-0.85000002	-0.82300001	-0.79200000	-0.90899998];

% Init:
fcc.dt = 1/100;
ground_alt = 0;
omegab0 = [0,0,0];
Vb0 = [52.6789583501891, 0, 2.71559652634250];
u1_0 = [2.1112539e-05, -2.1112539e-05, -0.085004635, -0.084972650, 0.19720161, 0.19720161];
u2_0 = ones(1,12) .* 0.4252;
u3_0 = 0.089689;
u4_0 = 0;
Xe0 = [0,0,-1100];
latlong0 = [45.466148, 6.692235];
Euler0 = [3.43106170068520e-06, 0.0515008506277664, -2.79252663434261];

DEP_PID_IC = 163.487227;
DEP_INTEG_IC = 117.49388;