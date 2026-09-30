/*
FUNCTION_NAME: FUN_015e5f60
ENTRY_POINT: 015e5f60
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


void FUN_015e5f60(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_024e0ff8(param_1,0);
    if (lVar1 == param_2) {
      return;
    }
    lVar1 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
                      (param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30));
    if (lVar1 != 0) {
      FUN_01c6113c(lVar1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38)
                  );
      FUN_024e104c(param_1,0);
      FUN_024e4eec(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


