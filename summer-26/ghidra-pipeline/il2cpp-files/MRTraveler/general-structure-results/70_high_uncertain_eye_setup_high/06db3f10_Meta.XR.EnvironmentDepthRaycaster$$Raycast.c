/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 06db3f10
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__Raycast(void)

{
  int in_w8;
  ulong uVar1;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701df84(&stack0x00000008,0);
  uVar1 = (ulong)&stack0x00000020 | 8;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_03d233cc(uVar1,0);
  thunk_FUN_03d233cc(&stack0x00000040);
  thunk_FUN_03d233cc(&stack0x00000048);
  in_stack_00000020 = 0xffffffff;
  FUN_0452e20c(uVar1,&stack0x00000020,*unaff_x22);
  FUN_0701e00c(uVar1,0);
  return;
}


