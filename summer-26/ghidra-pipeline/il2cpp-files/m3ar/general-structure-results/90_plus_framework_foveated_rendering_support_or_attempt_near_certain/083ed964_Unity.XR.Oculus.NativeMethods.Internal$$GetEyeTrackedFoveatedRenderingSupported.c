/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 083ed964
PROGRAM: m3ar-libil2cpp.so
SCORE: 122
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined2 uStack0000000000000010;
  undefined2 uStack0000000000000014;
  undefined2 in_stack_00000018;
  
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  in_stack_00000018 = FUN_083ec5e0(param_1,1);
  uVar2 = thunk_FUN_0406db0c(*(undefined8 *)(unaff_x22 + 0x88),&stack0x00000018);
  FUN_03a8b998();
  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    uStack0000000000000014 = FUN_083ec5e0();
    uVar2 = thunk_FUN_0406db0c(*(undefined8 *)(unaff_x22 + 0x88),(long)&stack0x00000010 + 4);
    FUN_03a8b998();
    if (2 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
      uStack0000000000000010 = FUN_083ec5e0();
      uVar2 = thunk_FUN_0406db0c(*(undefined8 *)(unaff_x22 + 0x88),&stack0x00000010);
      FUN_03a8b998();
      puVar1 = PTR_DAT_08ffe8a8;
      if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
        FUN_0736a31c(*(undefined8 *)puVar1);
        FUN_083ec39c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


