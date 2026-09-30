/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01eae4b8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 111
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0234c2e8);
  *(undefined1 *)(unaff_x24 + 0x41b) = 1;
  puVar1 = PTR_DAT_0235f3c0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar2 = FUN_01e79184(0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar4);
    lVar4 = *(long *)puVar1;
  }
                    /* try { // try from 01eae518 to 01fae623 has its CatchHandler @ 01eae518
                       catch() { ... } // from try @ 01eae518 with catch @ 01eae518
                       catch() { ... } // from try @ 01eae634 with catch @ 01eae518
                       catch() { ... } // from try @ 01eae690 with catch @ 01eae518
                       catch() { ... } // from try @ 01eae6d4 with catch @ 01eae518 */
  uVar3 = OVRManager__OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
                    (uVar2,**(undefined8 **)(lVar4 + 0xb8),0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01ebcd08(unaff_w22,unaff_w21,unaff_w20);
  return;
}


