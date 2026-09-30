/*
FUNCTION_NAME: OVRManager$$SetFoveatedRenderingLevel
ENTRY_POINT: 05ba66d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__SetFoveatedRenderingLevel(float param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int in_w8;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  float in_stack_00000038;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  char in_stack_000001a0;
  char in_stack_000001d0;
  
  fStack000000000000002c = unaff_s14 + unaff_s11;
  param_1 = param_1 + unaff_s12;
  uStack0000000000000030 = param_3;
  if (in_w8 == 0) {
    fVar3 = in_stack_00000038 + unaff_s8;
    uVar2 = FUN_0571e138(0);
    cVar1 = '\0';
  }
  else {
    FUN_0466ffac(&stack0x00000134,&stack0x000001a0,*unaff_x22);
    in_stack_000000d8 = *(undefined8 *)(unaff_x21 + 0x98);
    in_stack_000000d0 = *(undefined8 *)(unaff_x21 + 0x90);
    in_stack_000000e8 = *(undefined8 *)(unaff_x21 + 0xa8);
    in_stack_000000e0 = *(undefined8 *)(unaff_x21 + 0xa0);
    *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)(unaff_x21 + 0xb4);
    *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x21 + 0xac);
    FUN_05ba74a8(&stack0x000000a4,unaff_s8,unaff_s11,unaff_s12);
    fVar3 = in_stack_000000b8;
    uVar2 = uStack00000000000000b0;
    FUN_0466ffac(&stack0x000000a4,&stack0x000001a0,*unaff_x22);
    param_2 = uStack00000000000000b4;
    uVar2 = FUN_05ba7bc0(uVar2,uStack00000000000000b4,fVar3,uStack0000000000000024,
                         uStack0000000000000020,in_stack_00000028);
    cVar1 = in_stack_000001a0;
  }
  if ((in_stack_000001d0 != '\0') && (cVar1 == '\0')) {
    fStack000000000000002c = param_1;
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba7bc0(uVar2,param_2,fVar3,uStack0000000000000024,uStack0000000000000020,in_stack_00000028
                );
    param_1 = fStack000000000000002c;
  }
  uStack0000000000000014 = uStack0000000000000020;
  uStack0000000000000004 = param_2;
  fVar3 = (float)FUN_05ba6340(uStack0000000000000030,unaff_s10 + unaff_s11,param_1);
  return in_stack_00000038 + unaff_s8 + fVar3;
}


