/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$InvalidateDepthTexture
ENTRY_POINT: 04c2d880
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepthRaycaster__InvalidateDepthTexture
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6160);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c84d8);
    *(undefined1 *)(unaff_x23 + 0x6f0) = 1;
  }
  puVar1 = PTR_DAT_065e6160;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04e5c22c(&stack0x00000008,0);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  in_stack_00000040 = param_2;
  in_stack_00000048 = param_3;
  in_stack_00000050 = param_4;
  FUN_03369f70((ulong)&stack0x00000020 | 8,&stack0x00000020,*(undefined8 *)puVar1);
  FUN_04e5a3f8((ulong)&stack0x00000020 | 8,0);
  return;
}


