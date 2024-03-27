
clear all;

fs = 16e3;
f_4 = fs/4;
f_8 = fs/8;
f_16 = fs/16;
f_32 = fs/32;

ts = [0:1024-1]./fs;

x_cmp = [cos(2*pi*f_4*ts); cos(2*pi*f_8*ts); cos(2*pi*f_16*ts); cos(2*pi*f_32*ts);] 

x_t = cos(2*pi*f_4*ts) + cos(2*pi*f_8*ts) + cos(2*pi*f_16*ts) + cos(2*pi*f_32*ts);
x_t_short = cast(x_t, 'single');

%% Add gaussian noise?

writematrix(x_t_short', 'in_data.txt');

if(0)
  figure();
  subplot(311)
  plot(x_cmp');
  subplot(312)
  plot(x_t);
  subplot(313)
  plot(abs(fftshift(fft(x_t))));
end
