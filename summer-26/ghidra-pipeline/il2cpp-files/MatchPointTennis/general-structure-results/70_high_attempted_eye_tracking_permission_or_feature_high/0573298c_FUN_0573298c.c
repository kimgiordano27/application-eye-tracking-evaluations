/*
FUNCTION_NAME: FUN_0573298c
ENTRY_POINT: 0573298c
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


void FUN_0573298c(long param_1,long param_2)

{
  if (param_1 != 0) {
    if (DAT_0a51d4b5 == '\0') {
      FUN_04447ba8(PTR_DAT_09f28ad8);
      DAT_0a51d4b5 = '\x01';
    }
    System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext
              (param_1,**(undefined8 **)(*(long *)PTR_DAT_09f28ad8 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


