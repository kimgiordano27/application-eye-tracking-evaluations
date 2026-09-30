/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 0326477c
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long lVar3;
  long *unaff_x21;
  
  uVar1 = FUN_033ea488();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_03263d10();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*unaff_x21);
    }
    uVar1 = FUN_033ea488(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (unaff_x19[0xe4] != 0) {
        FUN_035d3728(unaff_x19[0xe4],1,0);
        lVar3 = unaff_x19[0xe4];
        uVar2 = (**(code **)(*unaff_x19 + 0x358))();
        if (lVar3 != 0) {
          FUN_035d3bbc(lVar3,uVar2,0,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
  }
  return;
}


