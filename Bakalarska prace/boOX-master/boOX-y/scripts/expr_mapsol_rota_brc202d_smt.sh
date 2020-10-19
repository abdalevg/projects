ROBOT_LIST=`cat robots_maps`
SEED_LIST=`cat seeds_10`
SIZE=16
TIMEOUT=`cat timeout`

for ROBOTS in $ROBOT_LIST;
do
  for SEED in $SEED_LIST;	
  do            
    echo 'Solving brc202d instance with '$ROBOTS' agents ...'
    ../main/rota_solver_boOX --algorithm=smtcbs+ '--timeout='$TIMEOUT '--input-file=brc202d_a'$ROBOTS'_'$SEED'.mpf' '--output-file=rota-smt_brc202d_a'$ROBOTS'_'$SEED'.out' > 'rota-smt_brc202d_a'$ROBOTS'_'$SEED'.txt'
  done
done