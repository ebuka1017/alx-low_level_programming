#!/bin/bash
sleep 98
rm -f 101-make_me_win.sh
touch manipulated_gm
chmod +x manipulated_gm
echo "#!/bin/bash" >> manipulated_gm
echo "echo --> Please make me win!" >> manipulated_gm

