/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 090a24b4
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingLevel(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  FUN_090a2734();
  in_stack_00000040 = param_1;
  thunk_FUN_049ee3d8(&stack0x00000040,param_1);
  uStack0000000000000048 = FUN_0909bb18();
                    /* try { // try from 090a24e8 to 091a250f has its CatchHandler @ 090a2740 */
  FUN_090a1244(&stack0x00000000 + 4);
  uStack0000000000000034 = (undefined4)in_stack_00000018;
  uStack0000000000000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
  unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
  *unaff_x19 = in_stack_00000000._4_8_;
  unaff_x19[3] = CONCAT44(uStack000000000000003c,uStack0000000000000038);
  unaff_x19[2] = CONCAT44(uStack0000000000000034,uStack0000000000000014);
  unaff_x19[5] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
  unaff_x19[4] = in_stack_00000040;
  return;
}


