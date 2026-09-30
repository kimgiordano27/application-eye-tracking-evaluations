/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03bd7b84
PROGRAM: gunraiders-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x24;
  int unaff_w25;
  int unaff_w28;
  int unaff_w29;
  
  if (*(long *)(unaff_x24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar2 = FUN_03d323e4(*(long *)(unaff_x24 + 0x18),0);
  if (((iVar2 == 8) || (iVar2 == 0x3b)) || (iVar2 == 0x4a)) {
    if (*(int *)(*(long *)StringLiteral_4015 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d194ec();
  }
  else {
    if (*(int *)(*(long *)StringLiteral_4015 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d19530();
  }
  puVar1 = StringLiteral_1937;
  if (*(int *)(*(long *)StringLiteral_1937 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03b4197c();
  if (unaff_w29 != unaff_w25) {
    lVar4 = FUN_03d18144();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_03d148d4(lVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03b4197c();
    lVar4 = *(long *)(unaff_x19 + 0x1e0);
    uVar3 = FUN_03d524bc(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (unaff_w28 == 0) {
      *(undefined4 *)(lVar4 + 0x58) = uVar3;
    }
    else {
      *(undefined4 *)(lVar4 + 0x5c) = uVar3;
    }
  }
  FUN_03b10690(&stack0x00000018,0);
  return;
}


