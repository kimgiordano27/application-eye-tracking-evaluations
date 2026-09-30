/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 05ba6768
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__get_fixedFoveatedRenderingSupported
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  float in_stack_00000038;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  char in_stack_000001a0;
  char in_stack_000001d0;
  
  uStack000000000000008c = (undefined4)param_3;
  uStack0000000000000090 = (undefined4)((ulong)param_3 >> 0x20);
  uStack0000000000000070 = param_1;
  uStack0000000000000080 = param_2;
  uVar1 = FUN_05ba7bc0(unaff_s8,unaff_s11,unaff_s12,uStack0000000000000024,uStack0000000000000020,
                       in_stack_00000028);
  if ((in_stack_000001d0 != '\0') && (in_stack_000001a0 == '\0')) {
    uStack000000000000002c = unaff_s9;
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba7bc0(uVar1,unaff_s11,unaff_s12,uStack0000000000000024,uStack0000000000000020,
                 in_stack_00000028);
    unaff_s9 = uStack000000000000002c;
  }
  uStack0000000000000014 = uStack0000000000000020;
  fVar2 = (float)FUN_05ba6340(in_stack_00000030,unaff_s10,unaff_s9);
  return in_stack_00000038 + fVar2;
}


