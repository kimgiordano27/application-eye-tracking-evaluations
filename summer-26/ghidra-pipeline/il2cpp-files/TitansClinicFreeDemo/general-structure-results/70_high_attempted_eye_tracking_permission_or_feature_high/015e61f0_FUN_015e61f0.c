/*
FUNCTION_NAME: FUN_015e61f0
ENTRY_POINT: 015e61f0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_015e61f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
                    (param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30));
  if (lVar1 != 0) {
    FUN_01c61374(lVar1,param_2,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


