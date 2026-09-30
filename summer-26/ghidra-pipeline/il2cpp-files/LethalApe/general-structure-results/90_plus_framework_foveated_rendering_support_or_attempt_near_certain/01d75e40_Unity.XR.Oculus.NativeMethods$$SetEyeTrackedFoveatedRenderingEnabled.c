/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01d75e40
PROGRAM: LethalApe-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


uint Unity_XR_Oculus_NativeMethods__SetEyeTrackedFoveatedRenderingEnabled(long param_1)

{
  long lVar1;
  long in_x9;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_1 + in_x9 * 0x38 + 0x30) = unaff_x21;
  thunk_FUN_00a502ec();
  lVar1 = *unaff_x19;
  if (lVar1 != 0) {
    if (in_stack_00000008._4_4_ < *(uint *)(lVar1 + 0x18)) {
      *(undefined8 *)(lVar1 + (long)(int)in_stack_00000008._4_4_ * 0x38 + 0x38) = unaff_x20;
      thunk_FUN_00a502ec();
      lVar1 = *unaff_x19;
      if (lVar1 == 0) goto LAB_01d75ec4;
      if (in_stack_00000008._4_4_ < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)in_stack_00000008._4_4_ * 0x38;
        *(undefined1 *)(lVar1 + 0x40) = 1;
        *(undefined4 *)(lVar1 + 0x54) = 0;
        return in_stack_00000008._4_4_;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00a190f8();
  }
LAB_01d75ec4:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


