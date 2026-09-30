/*
FUNCTION_NAME: SimpleAIGameModeScript.<stopUpdatingRedRacquetPosTimer>d__116$$System.IDisposable.Dispose
ENTRY_POINT: 03da1af0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


bool SimpleAIGameModeScript_<stopUpdatingRedRacquetPosTimer>d__116__System_IDisposable_Dispose
               (undefined8 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long in_x9;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x10;
  undefined8 in_x11;
  long unaff_x19;
  
  param_1[0x29] = in_x11;
  if (in_x10 + in_x9 < (long)(param_2 & 0xffffffff)) {
    do {
      uVar3 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = uVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if ((int)((ulong)uVar3 >> 0x10) >> 0x10 <= (int)(short)uVar3) {
      FUN_03da1b50();
    }
  }
  puVar4 = *(undefined8 **)(unaff_x19 + 0xb10);
  do {
    uVar3 = *puVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar2) {
      *puVar4 = uVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  DataMemoryBarrier(2,3);
  return (int)((ulong)uVar3 >> 0x10) >> 0x10 <= (int)(short)uVar3;
}


