/*
FUNCTION_NAME: FUN_05732afc
ENTRY_POINT: 05732afc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_05732afc(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar1 = Unity_Mathematics_uint4__get_zwzy(param_1,0);
  lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  if (lVar1 != param_2) {
    uVar2 = System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
                      (param_1,param_2,*(undefined8 *)(lVar4 + 0x48));
    return uVar2;
  }
  puVar3 = (uint *)FUN_05732750(param_1,*(undefined8 *)(lVar4 + 0x40));
  return (ulong)*puVar3;
}


