/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 05ba65f0
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


float OVRManager__GetFoveatedRenderingLevel
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                float param_5,float param_6)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  ulong uVar4;
  char cVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float fStack0000000000000014;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined4 uStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  char in_stack_000001a0;
  char in_stack_000001d0;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0xe28);
  fStack0000000000000020 = param_6;
  fStack0000000000000024 = in_s16;
  fStack0000000000000030 = in_s17;
  fStack0000000000000034 = unaff_s13;
  FUN_0466ffac(&stack0x000001d0,*puVar6);
  in_stack_00000178 = *(undefined8 *)(unaff_x21 + 0x98);
  in_stack_00000170 = *(undefined8 *)(unaff_x21 + 0x90);
  in_stack_00000188 = *(undefined8 *)(unaff_x21 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x21 + 0xa0);
  *(undefined8 *)(unaff_x21 + 0xf0) = *(undefined8 *)(unaff_x21 + 0xb4);
  *(undefined8 *)(unaff_x21 + 0xe8) = *(undefined8 *)(unaff_x21 + 0xac);
  in_stack_00000180 = uVar9;
  FUN_06a6354c(&stack0x00000170,0);
  if ((float)uVar9 - ((unaff_s10 - fStack000000000000003c) - *(float *)(unaff_x19 + 0x28)) <=
      *(float *)(unaff_x19 + 0x34)) {
    uVar4 = FUN_05ba691c(param_1,unaff_s10,unaff_s11,param_4,param_5);
    fVar3 = in_stack_00000168;
    fVar1 = fStack0000000000000160;
    fStack0000000000000014 = fStack0000000000000020;
    fVar8 = fStack0000000000000024;
    fVar7 = fStack0000000000000030;
    cVar5 = in_stack_000001a0;
    if ((uVar4 & 1) != 0) {
      fStack0000000000000030 = param_1 + fStack0000000000000160;
      param_4 = param_4 + fStack0000000000000160;
      param_5 = param_5 + fStack0000000000000164;
      unaff_s10 = unaff_s10 + fStack0000000000000164;
      unaff_s15 = unaff_s15 + in_stack_00000168;
      unaff_s11 = unaff_s11 + in_stack_00000168;
      fStack0000000000000038 = fStack0000000000000038 + fStack0000000000000160;
      fStack0000000000000034 = fStack0000000000000034 + in_stack_00000168;
      if (in_stack_000001a0 == '\0') {
        fStack0000000000000028 = fStack0000000000000038;
        fStack000000000000002c = unaff_s12;
        fVar7 = (float)FUN_0571e138(0);
        fStack0000000000000014 = fStack0000000000000020;
        fVar8 = fStack0000000000000024;
        unaff_s12 = unaff_s12 + fStack0000000000000164;
        param_1 = fStack0000000000000030;
        cVar5 = '\0';
      }
      else {
        FUN_0466ffac(&stack0x00000134,&stack0x000001a0,*puVar6);
        in_stack_000000d8 = *(undefined8 *)(unaff_x21 + 0x98);
        in_stack_000000d0 = *(undefined8 *)(unaff_x21 + 0x90);
        in_stack_000000e8 = *(undefined8 *)(unaff_x21 + 0xa8);
        in_stack_000000e0 = *(undefined8 *)(unaff_x21 + 0xa0);
        *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)(unaff_x21 + 0xb4);
        *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x21 + 0xac);
        FUN_05ba74a8(&stack0x000000a4,fVar1,fStack0000000000000164,fVar3);
        fStack0000000000000028 = in_stack_000000b8;
        uVar2 = uStack00000000000000b0;
        FUN_0466ffac(&stack0x000000a4,&stack0x000001a0,*puVar6);
        fVar8 = fStack0000000000000024;
        fVar1 = fStack0000000000000020;
        fStack000000000000002c = fStack00000000000000b4;
        fVar7 = (float)FUN_05ba7bc0(uVar2,fStack00000000000000b4,fStack0000000000000028,
                                    fStack0000000000000024,fStack0000000000000020,unaff_s8);
        fStack0000000000000014 = fVar1;
        unaff_s12 = unaff_s12 + fStack0000000000000164;
        param_1 = fStack0000000000000030;
        cVar5 = in_stack_000001a0;
      }
    }
  }
  else {
    fStack0000000000000014 = fStack0000000000000020;
    fVar8 = fStack0000000000000024;
    fVar7 = fStack0000000000000030;
    cVar5 = '\0';
  }
  if ((in_stack_000001d0 != '\0') && (cVar5 == '\0')) {
    fStack0000000000000020 = unaff_s12;
    fStack0000000000000024 = unaff_s15;
    fStack0000000000000030 = param_1;
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba7bc0(fVar7,fStack000000000000002c,fStack0000000000000028,fVar8,fStack0000000000000014,
                 unaff_s8);
    unaff_s15 = fStack0000000000000024;
    param_1 = fStack0000000000000030;
  }
  fVar8 = (float)FUN_05ba6340(param_1,unaff_s10,unaff_s11,param_4,param_5,unaff_s15,
                              fStack000000000000003c);
  return fStack0000000000000038 + fVar8;
}


