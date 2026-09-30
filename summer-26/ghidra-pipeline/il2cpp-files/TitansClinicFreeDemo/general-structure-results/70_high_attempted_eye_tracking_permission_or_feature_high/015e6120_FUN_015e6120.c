/*
FUNCTION_NAME: FUN_015e6120
ENTRY_POINT: 015e6120
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_015e6120(long param_1,int param_2,int param_3,undefined4 param_4,ulong param_5,long param_6
                 )

{
  ulong uVar1;
  long lVar2;
  
  if ((param_2 == param_3) ||
     (uVar1 = FUN_015e61f0(param_1,param_3,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x68)),
     (uVar1 & 1) != 0)) {
    return;
  }
  lVar2 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
                    (param_1,*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x30));
  if (lVar2 != 0) {
    FUN_01c612e4(lVar2,param_2,param_3,param_4,
                 *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x70));
    if ((param_5 & 1) == 0) {
      return;
    }
    if (param_1 != 0) {
      FUN_024e104c(param_1,0);
      FUN_024e04f8(param_1,param_2,param_3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


