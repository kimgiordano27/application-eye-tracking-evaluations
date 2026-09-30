/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 05ba65a4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__get_foveatedRenderingLevel
                (ulong param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
                float param_6,float param_7,float param_8)

{
  undefined *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  char cVar6;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  float fVar8;
  undefined4 unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  float fVar9;
  undefined4 in_s17;
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
  undefined4 in_stack_00000280;
  undefined4 in_stack_00000284;
  
  puVar1 = PTR_DAT_07115e28;
  param_2 = param_2 + unaff_s12;
  fVar9 = fStack0000000000000038 + unaff_s9;
  fStack0000000000000038 = param_6 + unaff_s14;
  cVar6 = '\0';
  if (((in_w8 != 0) && (cVar6 = '\0', 0.0 < *(float *)(unaff_x19 + 0x34))) &&
     (in_stack_000001d0 != '\0')) {
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    in_stack_00000178 = *(undefined8 *)(unaff_x21 + 0x98);
    in_stack_00000170 = *(undefined8 *)(unaff_x21 + 0x90);
    in_stack_00000188 = *(undefined8 *)(unaff_x21 + 0xa8);
    uVar7 = *(undefined8 *)(unaff_x21 + 0xa0);
    *(undefined8 *)(unaff_x21 + 0xf0) = *(undefined8 *)(unaff_x21 + 0xb4);
    *(undefined8 *)(unaff_x21 + 0xe8) = *(undefined8 *)(unaff_x21 + 0xac);
    in_stack_00000180 = uVar7;
    FUN_06a6354c(&stack0x00000170,0);
    if (*(float *)(unaff_x19 + 0x34) <
        (float)uVar7 - ((unaff_s10 - fStack000000000000003c) - *(float *)(unaff_x19 + 0x28))) {
      param_1 = param_1 & 0xffffffff;
      cVar6 = '\0';
    }
    else {
      uVar5 = FUN_05ba691c(param_1 & 0xffffffff,unaff_s10,unaff_s11,param_4,param_2,fVar9);
      fVar4 = in_stack_00000168;
      fVar3 = fStack0000000000000160;
      if ((uVar5 & 1) == 0) {
        param_1 = param_1 & 0xffffffff;
        cVar6 = in_stack_000001a0;
      }
      else {
        fVar8 = (float)param_1 + fStack0000000000000160;
        param_4 = param_4 + fStack0000000000000160;
        param_2 = param_2 + fStack0000000000000164;
        unaff_s10 = unaff_s10 + fStack0000000000000164;
        fVar9 = fVar9 + in_stack_00000168;
        unaff_s11 = unaff_s11 + in_stack_00000168;
        fStack0000000000000038 = fStack0000000000000038 + fStack0000000000000160;
        if (in_stack_000001a0 == '\0') {
          param_8 = param_7 + unaff_s12;
          param_3 = fStack0000000000000038;
          in_s17 = FUN_0571e138(0);
          param_1 = (ulong)(uint)fVar8;
          cVar6 = '\0';
        }
        else {
          FUN_0466ffac(&stack0x00000134,&stack0x000001a0,*(undefined8 *)puVar1);
          in_stack_000000d8 = *(undefined8 *)(unaff_x21 + 0x98);
          in_stack_000000d0 = *(undefined8 *)(unaff_x21 + 0x90);
          in_stack_000000e8 = *(undefined8 *)(unaff_x21 + 0xa8);
          in_stack_000000e0 = *(undefined8 *)(unaff_x21 + 0xa0);
          *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)(unaff_x21 + 0xb4);
          *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x21 + 0xac);
          FUN_05ba74a8(&stack0x000000a4,fVar3,fStack0000000000000164,fVar4);
          param_3 = in_stack_000000b8;
          uVar2 = uStack00000000000000b0;
          FUN_0466ffac(&stack0x000000a4,&stack0x000001a0,*(undefined8 *)puVar1);
          param_8 = fStack00000000000000b4;
          in_s17 = FUN_05ba7bc0(uVar2,fStack00000000000000b4,param_3,in_stack_00000280,
                                in_stack_00000284,unaff_s8);
          param_1 = (ulong)(uint)fVar8;
          cVar6 = in_stack_000001a0;
        }
      }
    }
  }
  if ((in_stack_000001d0 != '\0') && (cVar6 == '\0')) {
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    FUN_05ba7bc0(in_s17,param_8,param_3,in_stack_00000280,in_stack_00000284,unaff_s8);
    param_1 = param_1 & 0xffffffff;
  }
  fVar9 = (float)FUN_05ba6340(param_1,unaff_s10,unaff_s11,param_4,param_2,fVar9,
                              fStack000000000000003c);
  return fStack0000000000000038 + fVar9;
}


