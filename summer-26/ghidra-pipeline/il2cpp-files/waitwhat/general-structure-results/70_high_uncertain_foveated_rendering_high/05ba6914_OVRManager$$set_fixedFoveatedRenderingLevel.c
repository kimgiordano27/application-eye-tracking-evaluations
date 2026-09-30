/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 05ba6914
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__set_fixedFoveatedRenderingLevel
                (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6 [16],undefined4 param_7,undefined4 param_8)

{
  int in_w8;
  float fVar1;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s15;
  undefined4 in_s17;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack000000000000002c;
  float in_stack_00000038;
  char in_stack_000001d0;
  
  if ((in_stack_000001d0 != '\0') && (in_w8 == 0)) {
    uStack000000000000002c = unaff_s11;
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba7bc0(in_s17,param_8,param_3,uStack0000000000000024,uStack0000000000000020);
    param_1 = param_1 & 0xffffffff;
    unaff_s11 = uStack000000000000002c;
  }
  uStack0000000000000014 = uStack0000000000000020;
  uStack0000000000000004 = param_8;
  fVar1 = (float)FUN_05ba6340(param_1,unaff_s10,unaff_s11,param_4,param_5,unaff_s15,param_7);
  return in_stack_00000038 + fVar1;
}


