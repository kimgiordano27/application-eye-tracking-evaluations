/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 05ba64d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_permission_setup
*/


float OVRManager__OnPermissionGranted(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  float fVar2;
  ulong uVar3;
  uint uVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x21;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float fVar11;
  float unaff_s11;
  float unaff_s12;
  float fVar12;
  float unaff_s14;
  float fVar13;
  float fVar14;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  byte bStack00000000000001a0;
  undefined8 uStack00000000000001b0;
  undefined8 uStack00000000000001c0;
  char cStack00000000000001d0;
  undefined8 uStack00000000000001e0;
  undefined4 in_stack_00000280;
  undefined4 in_stack_00000284;
  undefined4 in_stack_00000288;
  
  pfVar5 = *(float **)(*param_1 + 0xb8);
  fVar10 = *pfVar5;
  fVar13 = pfVar5[1];
  fVar12 = pfVar5[2];
  fStack0000000000000000 = unaff_s14;
  fStack0000000000000004 = unaff_s12;
  fStack0000000000000008 = unaff_s9;
  _bStack00000000000001a0 = param_2;
  uStack00000000000001b0 = param_2;
  uStack00000000000001c0 = param_2;
  _cStack00000000000001d0 = param_2;
  uStack00000000000001e0 = param_2;
  uVar3 = FUN_05ba71e0(unaff_s11);
  fVar9 = fVar13;
  fVar7 = fVar10;
  if ((uVar3 & 1) != 0) {
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    in_stack_00000108 = *(undefined8 *)(unaff_x21 + 0x98);
    in_stack_00000100 = *(undefined8 *)(unaff_x21 + 0x90);
    in_stack_00000118 = *(undefined8 *)(unaff_x21 + 0xa8);
    in_stack_00000110 = *(undefined8 *)(unaff_x21 + 0xa0);
    *(undefined8 *)(unaff_x21 + 0x80) = *(undefined8 *)(unaff_x21 + 0xb4);
    *(undefined8 *)(unaff_x21 + 0x78) = *(undefined8 *)(unaff_x21 + 0xac);
    FUN_05ba74a8((long)&stack0x000000a0 + 4,unaff_s14,unaff_s12,unaff_s9);
    fVar9 = fStack00000000000000b4;
    fVar7 = fStack00000000000000b0;
    unaff_s9 = fStack00000000000000ac;
    unaff_s12 = fStack00000000000000a8;
    unaff_s14 = in_stack_000000a0._4_4_;
    fVar12 = in_stack_000000b8;
  }
  puVar1 = PTR_DAT_07115e28;
  fVar6 = unaff_s11 + unaff_s14;
  fVar11 = unaff_s8 + unaff_s12;
  uVar4 = (uint)*(byte *)(unaff_x19 + 0x7c);
  in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + unaff_s9;
  fStack0000000000000030 = fStack0000000000000030 + unaff_s14;
  fStack0000000000000034 = fStack0000000000000034 + unaff_s12;
  fVar14 = fStack0000000000000038 + unaff_s9;
  fStack0000000000000038 = fVar10 + unaff_s14;
  if (((*(byte *)(unaff_x19 + 0x7c) != 0) && (uVar4 = 0, 0.0 < *(float *)(unaff_x19 + 0x34))) &&
     (cStack00000000000001d0 != '\0')) {
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    in_stack_00000178 = *(undefined8 *)(unaff_x21 + 0x98);
    in_stack_00000170 = *(undefined8 *)(unaff_x21 + 0x90);
    in_stack_00000188 = *(undefined8 *)(unaff_x21 + 0xa8);
    uVar8 = *(undefined8 *)(unaff_x21 + 0xa0);
    *(undefined8 *)(unaff_x21 + 0xf0) = *(undefined8 *)(unaff_x21 + 0xb4);
    *(undefined8 *)(unaff_x21 + 0xe8) = *(undefined8 *)(unaff_x21 + 0xac);
    in_stack_00000180 = uVar8;
    FUN_06a6354c(&stack0x00000170,0);
    if (*(float *)(unaff_x19 + 0x34) <
        (float)uVar8 - ((fVar11 - fStack000000000000003c) - *(float *)(unaff_x19 + 0x28))) {
      uVar4 = 0;
    }
    else {
      fStack0000000000000000 = fVar7;
      fStack0000000000000004 = fVar9;
      fStack0000000000000008 = fVar12;
      uVar3 = FUN_05ba691c(fVar6,fVar11,in_stack_00000028._4_4_,fStack0000000000000030,
                           fStack0000000000000034,fVar14);
      fVar2 = in_stack_00000168;
      fVar10 = fStack0000000000000160;
      uVar4 = (uint)_bStack00000000000001a0 & 0xff;
      if ((uVar3 & 1) != 0) {
        fVar6 = fVar6 + fStack0000000000000160;
        fStack0000000000000030 = fStack0000000000000030 + fStack0000000000000160;
        fStack0000000000000034 = fStack0000000000000034 + fStack0000000000000164;
        fVar11 = fVar11 + fStack0000000000000164;
        fVar14 = fVar14 + in_stack_00000168;
        in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + in_stack_00000168;
        fStack0000000000000038 = fStack0000000000000038 + fStack0000000000000160;
        if (bStack00000000000001a0 == '\0') {
          fVar12 = fStack0000000000000038;
          fVar9 = fVar13 + unaff_s12;
          fVar7 = (float)FUN_0571e138(0);
          uVar4 = 0;
        }
        else {
          FUN_0466ffac(&stack0x00000134,&stack0x000001a0,*(undefined8 *)puVar1);
          in_stack_000000d8 = *(undefined8 *)(unaff_x21 + 0x98);
          in_stack_000000d0 = *(undefined8 *)(unaff_x21 + 0x90);
          in_stack_000000e8 = *(undefined8 *)(unaff_x21 + 0xa8);
          in_stack_000000e0 = *(undefined8 *)(unaff_x21 + 0xa0);
          *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)(unaff_x21 + 0xb4);
          *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x21 + 0xac);
          FUN_05ba74a8((long)&stack0x000000a0 + 4,fVar10,fStack0000000000000164,fVar2);
          fVar12 = in_stack_000000b8;
          fVar7 = fStack00000000000000b0;
          FUN_0466ffac((long)&stack0x000000a0 + 4,&stack0x000001a0,*(undefined8 *)puVar1);
          fVar9 = fStack00000000000000b4;
          fVar7 = (float)FUN_05ba7bc0(fVar7,fStack00000000000000b4,fVar12,in_stack_00000280,
                                      in_stack_00000284,in_stack_00000288);
          uVar4 = (uint)bStack00000000000001a0;
        }
      }
    }
  }
  if ((cStack00000000000001d0 != '\0') && (uVar4 == 0)) {
    FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
    fVar7 = (float)FUN_05ba7bc0(fVar7,fVar9,fVar12,in_stack_00000280,in_stack_00000284,
                                in_stack_00000288);
  }
  fStack0000000000000000 = fVar7;
  fStack0000000000000004 = fVar9;
  fStack0000000000000008 = fVar12;
  fVar12 = (float)FUN_05ba6340(fVar6,fVar11,in_stack_00000028._4_4_,fStack0000000000000030,
                               fStack0000000000000034,fVar14,fStack000000000000003c);
  return fStack0000000000000038 + fVar12;
}


