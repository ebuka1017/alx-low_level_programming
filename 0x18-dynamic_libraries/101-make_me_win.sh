#!/bin/bash
sleep 98
touch manipulated_gm
chmod +x manipulated_gm
echo "#!/bin/bash" >> manipulated_gm
echo "echo --> Please make me win!" >> manipulated_gm

