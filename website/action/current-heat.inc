<?php
$now_running = get_running_round();
$use_master_sched = use_master_sched();
?><current-heat classid="<?php echo @$now_running['classid']; ?>"
              roundid="<?php echo @$now_running['roundid']; ?>"
              round="<?php echo @$now_running['round']; ?>"
              group="<?php echo $use_master_sched ? @$now_running['round'] : @$now_running['roundid']; ?>"
              heat="<?php echo @$now_running['heat']; ?>"><?php
                if (!$use_master_sched) { echo @$now_running['class']; }
?></current-heat>