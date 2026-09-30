/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06a48768
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  long lVar1;
  undefined1 in_w8;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  code *pcVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined1 *)(unaff_x23 + 0xc9e) = in_w8;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar1 = *unaff_x22;
  }
  memcpy(&stack0x00000040,*(void **)(lVar1 + 0xb8),0x50);
  if (unaff_x21 != (long *)0x0) {
    pcVar2 = *(code **)(*unaff_x21 + 0x1e8);
    memcpy(&stack0x00000090,&stack0x00000040,0x50);
    (*pcVar2)(&stack0x00000008);
    unaff_x19[6] = in_stack_00000038;
    unaff_x19[3] = in_stack_00000020;
    unaff_x19[2] = in_stack_00000018;
    unaff_x19[5] = in_stack_00000030;
    unaff_x19[4] = in_stack_00000028;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


