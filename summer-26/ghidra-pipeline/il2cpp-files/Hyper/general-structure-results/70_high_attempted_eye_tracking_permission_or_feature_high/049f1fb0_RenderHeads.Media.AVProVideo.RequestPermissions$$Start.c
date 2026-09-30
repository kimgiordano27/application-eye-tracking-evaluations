/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions$$Start
ENTRY_POINT: 049f1fb0
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable
*/


ulong * RenderHeads_Media_AVProVideo_RequestPermissions__Start
                  (ulong *param_1,long param_2,ulong param_3,ulong *param_4,long *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar1 = (ulong *)((long)param_1 + (0x1000 - param_3));
  if (puVar1 < param_1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    puVar3 = param_4;
    do {
      param_4 = param_1;
      if ((*(ulong *)(param_2 + (uVar5 >> 6) * 8 + 0x40) >> (uVar5 & 0x3f) & 1) == 0) {
        puVar2 = (ulong *)((long)param_4 + param_3);
        lVar4 = lVar4 + param_3;
        param_1 = param_4 + 1;
        *param_4 = (ulong)puVar3;
        if (param_1 < puVar2) {
          puVar3 = param_4 + 2;
          if (puVar2 <= puVar3) {
            puVar2 = puVar3;
          }
          uVar6 = (long)puVar2 + (-9 - (long)param_4) & 0xfffffffffffffff8;
          memset(param_1,0,uVar6 + 8);
          param_1 = (ulong *)((long)puVar3 + uVar6);
        }
      }
      else {
        param_1 = (ulong *)((long)param_4 + param_3);
        param_4 = puVar3;
      }
      uVar5 = uVar5 + (param_3 >> 4);
      puVar3 = param_4;
    } while (param_1 <= puVar1);
  }
  *param_5 = *param_5 + lVar4;
  return param_4;
}


