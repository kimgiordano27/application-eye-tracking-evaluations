/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0788834c
PROGRAM: Waifu-libil2cpp.so
SCORE: 125
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  lVar3 = **(long **)(*(long *)(unaff_x20 + 0x7f8) + 0xb8);
  if (lVar3 != 0) {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000008 = 0;
    FUN_05fd5ad4(&stack0x00000008,lVar3,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f58f0 + 0x20) + 0xc0) + 0x138));
    while (uVar1 = FUN_05fd5b44(&stack0x00000008,DAT_083e7b48), lVar3 = in_stack_00000018,
          (uVar1 & 1) != 0) {
      if (in_stack_00000018 != 0) {
        uVar2 = FUN_03398a84(DAT_083be448);
        FUN_0603bdb4();
        FUN_07cbe14c(lVar3,uVar2,0);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


