/*
FUNCTION_NAME: OVRManager$$SetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 05ba643c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float OVRManager__SetEyeTrackedFoveatedRenderingEnabled
                (long param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
                float param_6)

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
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar11;
  float fVar12;
  float unaff_s11;
  float fVar13;
  float unaff_s12;
  float unaff_s13;
  float fVar14;
  float unaff_s14;
  float unaff_s15;
  float fVar15;
  float fVar16;
  float fStack0000000000000004;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
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
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  char cStack00000000000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_00000280;
  undefined4 in_stack_00000284;
  undefined4 in_stack_00000288;
  
  param_4 = **(float **)(param_1 + 0xb8) * param_4;
  fVar14 = param_2 * param_6;
  if (param_2 * param_6 <= param_4) {
    fVar14 = param_4;
  }
  if (ABS(param_3 - unaff_s10) < fVar14) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    fStack0000000000000038 = **(float **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  }
  else {
    fStack000000000000002c = unaff_s13;
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
    fVar11 = *pfVar5;
    fVar15 = pfVar5[1];
    fVar14 = pfVar5[2];
    in_stack_000001d8 = 0;
    _cStack00000000000001d0 = 0;
    in_stack_000001e8 = 0;
    in_stack_000001e0 = 0;
    in_stack_000001a8 = 0;
    _bStack00000000000001a0 = 0;
    in_stack_000001b8 = 0;
    in_stack_000001b0 = 0;
    in_stack_000001c8 = 0;
    in_stack_000001c0 = 0;
    fStack0000000000000004 = unaff_s12;
    uVar3 = FUN_05ba71e0(unaff_s11,unaff_s8,fStack000000000000002c,unaff_s15,in_stack_00000030._4_4_
                         ,fStack0000000000000038,fStack000000000000003c);
    fVar10 = fVar15;
    fVar7 = fVar11;
    if ((uVar3 & 1) != 0) {
      FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
      in_stack_00000108 = *(undefined8 *)(unaff_x21 + 0x98);
      in_stack_00000100 = *(undefined8 *)(unaff_x21 + 0x90);
      in_stack_00000118 = *(undefined8 *)(unaff_x21 + 0xa8);
      in_stack_00000110 = *(undefined8 *)(unaff_x21 + 0xa0);
      *(undefined8 *)(unaff_x21 + 0x80) = *(undefined8 *)(unaff_x21 + 0xb4);
      *(undefined8 *)(unaff_x21 + 0x78) = *(undefined8 *)(unaff_x21 + 0xac);
      FUN_05ba74a8((long)&stack0x000000a0 + 4,unaff_s14,unaff_s12,unaff_s9);
      fVar10 = fStack00000000000000b4;
      fVar7 = fStack00000000000000b0;
      unaff_s9 = fStack00000000000000ac;
      unaff_s12 = fStack00000000000000a8;
      unaff_s14 = in_stack_000000a0._4_4_;
      fVar14 = in_stack_000000b8;
    }
    puVar1 = PTR_DAT_07115e28;
    fVar6 = unaff_s11 + unaff_s14;
    fVar12 = unaff_s8 + unaff_s12;
    uVar4 = (uint)*(byte *)(unaff_x19 + 0x7c);
    fVar13 = fStack000000000000002c + unaff_s9;
    fVar9 = unaff_s15 + unaff_s14;
    in_stack_00000030._4_4_ = in_stack_00000030._4_4_ + unaff_s12;
    fVar15 = fVar15 + unaff_s12;
    fVar16 = fStack0000000000000038 + unaff_s9;
    fStack0000000000000038 = fVar11 + unaff_s14;
    if (((*(byte *)(unaff_x19 + 0x7c) != 0) && (uVar4 = 0, 0.0 < *(float *)(unaff_x19 + 0x34))) &&
       (cStack00000000000001d0 != '\0')) {
      fStack000000000000002c = fVar10;
      FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
      in_stack_00000178 = *(undefined8 *)(unaff_x21 + 0x98);
      in_stack_00000170 = *(undefined8 *)(unaff_x21 + 0x90);
      in_stack_00000188 = *(undefined8 *)(unaff_x21 + 0xa8);
      uVar8 = *(undefined8 *)(unaff_x21 + 0xa0);
      *(undefined8 *)(unaff_x21 + 0xf0) = *(undefined8 *)(unaff_x21 + 0xb4);
      *(undefined8 *)(unaff_x21 + 0xe8) = *(undefined8 *)(unaff_x21 + 0xac);
      in_stack_00000180 = uVar8;
      FUN_06a6354c(&stack0x00000170,0);
      if ((float)uVar8 - ((fVar12 - fStack000000000000003c) - *(float *)(unaff_x19 + 0x28)) <=
          *(float *)(unaff_x19 + 0x34)) {
        fStack0000000000000004 = fStack000000000000002c;
        uVar3 = FUN_05ba691c(fVar6,fVar12,fVar13,fVar9,in_stack_00000030._4_4_,fVar16);
        fVar2 = in_stack_00000168;
        fVar11 = fStack0000000000000160;
        uVar4 = (uint)_bStack00000000000001a0 & 0xff;
        fVar10 = fStack000000000000002c;
        if ((uVar3 & 1) != 0) {
          fVar6 = fVar6 + fStack0000000000000160;
          fVar9 = fVar9 + fStack0000000000000160;
          fStack000000000000002c = in_stack_00000030._4_4_ + fStack0000000000000164;
          fVar12 = fVar12 + fStack0000000000000164;
          fVar16 = fVar16 + in_stack_00000168;
          fVar13 = fVar13 + in_stack_00000168;
          fStack0000000000000038 = fStack0000000000000038 + fStack0000000000000160;
          if (bStack00000000000001a0 == '\0') {
            fVar14 = fStack0000000000000038;
            fVar7 = (float)FUN_0571e138(0);
            uVar4 = 0;
            in_stack_00000030._4_4_ = fStack000000000000002c;
            fVar10 = fVar15;
          }
          else {
            FUN_0466ffac(&stack0x00000134,&stack0x000001a0,*(undefined8 *)puVar1);
            in_stack_000000d8 = *(undefined8 *)(unaff_x21 + 0x98);
            in_stack_000000d0 = *(undefined8 *)(unaff_x21 + 0x90);
            in_stack_000000e8 = *(undefined8 *)(unaff_x21 + 0xa8);
            in_stack_000000e0 = *(undefined8 *)(unaff_x21 + 0xa0);
            *(undefined8 *)(unaff_x21 + 0x50) = *(undefined8 *)(unaff_x21 + 0xb4);
            *(undefined8 *)(unaff_x21 + 0x48) = *(undefined8 *)(unaff_x21 + 0xac);
            FUN_05ba74a8((long)&stack0x000000a0 + 4,fVar11,fStack0000000000000164,fVar2);
            fVar14 = in_stack_000000b8;
            fVar10 = fStack00000000000000b0;
            FUN_0466ffac((long)&stack0x000000a0 + 4,&stack0x000001a0,*(undefined8 *)puVar1);
            fVar7 = (float)FUN_05ba7bc0(fVar10,fStack00000000000000b4,fVar14,in_stack_00000280,
                                        in_stack_00000284,in_stack_00000288);
            uVar4 = (uint)bStack00000000000001a0;
            in_stack_00000030._4_4_ = fStack000000000000002c;
            fVar10 = fStack00000000000000b4;
          }
        }
      }
      else {
        uVar4 = 0;
        fVar10 = fStack000000000000002c;
      }
    }
    if ((cStack00000000000001d0 != '\0') && (uVar4 == 0)) {
      fStack000000000000002c = fVar13;
      FUN_0466ffac(&stack0x00000134,&stack0x000001d0,*(undefined8 *)PTR_DAT_07115e28);
      FUN_05ba7bc0(fVar7,fVar10,fVar14,in_stack_00000280,in_stack_00000284,in_stack_00000288);
      fVar13 = fStack000000000000002c;
    }
    fStack0000000000000004 = fVar10;
    fVar14 = (float)FUN_05ba6340(fVar6,fVar12,fVar13,fVar9,in_stack_00000030._4_4_,fVar16,
                                 fStack000000000000003c);
    fStack0000000000000038 = fStack0000000000000038 + fVar14;
  }
  return fStack0000000000000038;
}


