/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 09376444
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 122
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 Unity_XR_Oculus_Utils__get_eyeTrackedFoveatedRenderingSupported(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_09531730(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    FUN_093671b4(*(undefined8 *)(unaff_x20 + 0x30),0);
    if (unaff_x19 != 0) {
      uVar2 = FUN_098505e4();
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  return 0;
}


