ROBOT_LIST=`cat robots_maps`
SEED_LIST=`cat seeds_10`
SIZE=16
TIMEOUT=`cat timeout`

for ROBOTS in $ROBOT_LIST;
do
  for SEED in $SEED_LIST;	
  do            
    echo 'Solving brc202d instance with '$ROBOTS' agents ...'
    ../main/insolver_reLOC '--total-timeout='$TIMEOUT '--minisat-timeout='$TIMEOUT --encoding=temdd '--input-file=brc202d_a'$ROBOTS'_'$SEED'.cpf' '--output-file=swap-mdd_brc202d_a'$ROBOTS'_'$SEED'.out' > 'swap-mdd_brc202d_a'$ROBOTS'_'$SEED'.txt'
  done
done
