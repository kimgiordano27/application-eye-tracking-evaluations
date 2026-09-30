/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 01eb26dc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 109
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void Unity_XR_Oculus_NativeMethods_Internal__SetEyeTrackedFoveatedRenderingEnabled
               (long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x22;
  long lStack0000000000000000;
  undefined8 uStack0000000000000008;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  lStack0000000000000000 = param_1 + 0x628;
                    /* try { // try from 01eb26f0 to 01fb278b has its CatchHandler @ 01eb26f0
                       catch() { ... } // from try @ 01eb26f0 with catch @ 01eb26f0
                       catch() { ... } // from try @ 01eb286c with catch @ 01eb26f0
                       catch() { ... } // from try @ 01eb28dc with catch @ 01eb26f0
                       catch() { ... } // from try @ 01eb292c with catch @ 01eb26f0
                       catch() { ... } // from try @ 01eb29b0 with catch @ 01eb26f0 */
  uStack0000000000000008 = 9;
  pcStack0000000000000010 = "ovrp_TestBoundaryNode";
  uStack0000000000000018 = 0x15;
  uStack0000000000000028 = 8;
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_2;
  pcVar1 = (code *)thunk_FUN_01040398();
  *(code **)(unaff_x22 + 0x6f0) = pcVar1;
  (*pcVar1)(unaff_w20,unaff_w19);
  return;
}


