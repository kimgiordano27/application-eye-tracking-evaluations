/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$Internal_SetComputeConstantGraphicsBufferParam
ENTRY_POINT: 05bb00ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBuffer__Internal_SetComputeConstantGraphicsBufferParam(void)

{
  code *pcVar1;
  undefined8 *in_x9;
  uint unaff_w19;
  long unaff_x20;
  char *pcStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  
  uStack0000000000000020 = *in_x9;
  pcStack0000000000000010 = "PICO_setFoveationEyeTracked";
  uStack0000000000000018 = 0x1b;
  uStack0000000000000028 = 4;
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_02b798e4();
  *(code **)(unaff_x20 + 0x100) = pcVar1;
  (*pcVar1)(unaff_w19 & 1);
                    /* try { // try from 05bb0130 to 05cb0133 has its CatchHandler @ 05bb0148 */
                    /* try { // try from 05bb0134 to 05cb0137 has its CatchHandler @ 05bb0144 */
  return;
}


