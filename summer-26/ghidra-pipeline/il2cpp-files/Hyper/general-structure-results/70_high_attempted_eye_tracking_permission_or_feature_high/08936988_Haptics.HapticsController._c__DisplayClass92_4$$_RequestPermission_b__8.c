/*
FUNCTION_NAME: Haptics.HapticsController.<>c__DisplayClass92_4$$<RequestPermission>b__8
ENTRY_POINT: 08936988
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable
*/


void Haptics_HapticsController_<>c__DisplayClass92_4__<RequestPermission>b__8(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  
  FUN_088ef30c(param_1,0x1a,0);
  FUN_089363f8();
  FUN_088ee8d4();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_088ef30c();
    Haptics_HapticsController_<>c__DisplayClass92_1___ctor();
    FUN_088ee8d4();
  }
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (lVar1 != 0) {
    FUN_07506b20(lVar1);
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      HdyRpc_RequestHspSetup__set_StreamId();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


