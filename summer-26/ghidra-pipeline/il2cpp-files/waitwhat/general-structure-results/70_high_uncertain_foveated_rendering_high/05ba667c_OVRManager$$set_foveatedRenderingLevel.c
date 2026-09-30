/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 05ba667c
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


float OVRManager__set_foveatedRenderingLevel(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  ulong uVar3;
  char cVar4;
  long unaff_x21;
  undefined8 *unaff_x22;
  float fVar5;
  undefined4 unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined4 unaff_s12;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  float fStack0000000000000008;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  float in_stack_00000038;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  char in_stack_000001a0;
  char in_stack_000001d0;
  
  uStack0000000000000000 = in_stack_00000030;
  uStack0000000000000004 = param_1;
  fStack0000000000000008 = (float)param_2;
  uVar3 = FUN_05ba691c(unaff_s9,unaff_s10);
  fVar2 = in_stack_00000168;
  fVar5 = fStack0000000000000160;
  cVar4 = in_stack_000001a0;
  if ((uVar3 & 1) != 0) {
    unaff_s9 = unaff_s9 + fStack0000000000000160;
    unaff_s10 = unaff_s10 + fStack0000000000000164;
    unaff_s11 = unaff_s11 + in_stack_00000168;
    in_stack_00000038 = in_stack_00000038 + fStack0000000000000160;
    if (in_stack_000001a0 == '\0') {
      fStack0000000000000028 = in_stack_00000038;
      uStack000000000000002c = unaff_s12;
      in_stack_00000030 = FUN_0571e138(0);
      cVar4 = '\0';
    }
    else {
      FUN_0466ffac(&stack0x00000134,&stack0x000001a0,*unaff_x22);
      in_stack_000000d8 = *(undefined8 *)(unaff_x21 + 0x98);
      in_stack_000000d0 = *(undefined8 *)(unaff_x21 + 0x90);
      in_stack_000000e8 = *(undefined8 *)(unaff_x21 + 0xa8);
      in_stack_000000e0 = *(undefined8 *)(unaff_x21 + 0xa0);
      *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)(unaff_x21 + 0xb4);
      *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x21 + 0xac);
      FUN_05ba74a8(&stack0x000000a4,fVar5,fStack0000000000000164,fVar2);
      fStack0000000000000028 = in_stack_000000b8;
      uVar1 = uStack00000000000000b0;
      FUN_0466ffac(&stack0x000000a4,&stack0x000001a0,*unaff_x22);
      uStack000000000000002c = uStack00000000000000b4;
      in_stack_00000030 =
           FUN_05ba7bc0(uVar1,uStack00000000000000b4,fStack0000000000000028,uStack0000000000000024,
                        uStack0000000000000020,unaff_s8);
      cVar4 = in_stack_000001a0;
    }
  }
  if ((in_stack_000001d0 != '\0') && (cVar4 == '\0')) {
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    in_stack_00000030 =
         FUN_05ba7bc0(in_stack_00000030,uStack000000000000002c,fStack0000000000000028,
                      uStack0000000000000024,uStack0000000000000020,unaff_s8);
  }
  uStack0000000000000000 = in_stack_00000030;
  fStack0000000000000008 = fStack0000000000000028;
  uStack0000000000000014 = uStack0000000000000020;
  fVar5 = (float)FUN_05ba6340(unaff_s9,unaff_s10,unaff_s11);
  return in_stack_00000038 + fVar5;
}


