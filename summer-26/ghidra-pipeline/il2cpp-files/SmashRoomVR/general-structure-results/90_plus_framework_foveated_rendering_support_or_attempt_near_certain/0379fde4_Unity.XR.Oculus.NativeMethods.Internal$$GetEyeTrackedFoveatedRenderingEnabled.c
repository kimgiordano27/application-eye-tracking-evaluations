/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0379fde4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 130
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_foveation_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled(void)

{
  uint unaff_w19;
  short unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  uint uStack000000000000000c;
  
  thunk_FUN_01ad9084(
                    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                    );
  *(undefined1 *)(unaff_x22 + 0xee8) = 1;
  uStack000000000000000c = unaff_w19 & 0xff | (int)unaff_w20;
  thunk_FUN_01afa70c(*unaff_x21,&stack0x0000000c);
                    /* try { // try from 0379fe14 to 0389fe1b has its CatchHandler @ 037a0148 */
  return;
}


