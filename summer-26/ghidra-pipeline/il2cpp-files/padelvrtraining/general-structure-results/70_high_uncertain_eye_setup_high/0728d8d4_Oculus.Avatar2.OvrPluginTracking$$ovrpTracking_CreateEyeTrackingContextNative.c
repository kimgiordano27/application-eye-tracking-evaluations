/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateEyeTrackingContextNative
ENTRY_POINT: 0728d8d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateEyeTrackingContextNative(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x20;
  long *unaff_x21;
  
  if (param_1 == 0) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar2 = FUN_0728d518();
    if (lVar2 == 0) {
      if ((unaff_x20 & 1) == 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar3 = FUN_0728d940();
        if ((uVar3 & 1) != 0) {
          return 2;
        }
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x68);
  }
  return uVar1;
}


