/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03bd7bf4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 128
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w25;
  int unaff_w28;
  int unaff_w29;
  
  FUN_03d19530();
  puVar1 = StringLiteral_1937;
  if (*(int *)(*(long *)StringLiteral_1937 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03b4197c();
  if (unaff_w29 != unaff_w25) {
    lVar3 = FUN_03d18144();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03d148d4(lVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03b4197c();
    lVar3 = *(long *)(unaff_x19 + 0x1e0);
    uVar2 = FUN_03d524bc(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (unaff_w28 == 0) {
      *(undefined4 *)(lVar3 + 0x58) = uVar2;
    }
    else {
      *(undefined4 *)(lVar3 + 0x5c) = uVar2;
    }
  }
  FUN_03b10690(&stack0x00000018,0);
  return;
}


