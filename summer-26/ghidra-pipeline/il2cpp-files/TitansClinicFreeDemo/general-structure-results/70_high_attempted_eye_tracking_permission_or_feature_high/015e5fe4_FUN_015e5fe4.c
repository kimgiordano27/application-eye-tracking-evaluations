/*
FUNCTION_NAME: FUN_015e5fe4
ENTRY_POINT: 015e5fe4
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


void FUN_015e5fe4(long *param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
                    (param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30));
  if (param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x200));
    if (lVar2 != 0) {
      FUN_01c61184(lVar2,uVar1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


