/*
FUNCTION_NAME: OVRPlugin$$IsPositionValid
ENTRY_POINT: 0746de3c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__IsPositionValid(undefined1 param_1 [16])

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  uint in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float in_stack_000000c8;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  float fStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char in_stack_00000148;
  undefined4 uStack0000000000000150;
  float fStack0000000000000154;
  float fStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  
  uStack0000000000000170 = param_1._0_8_;
  uStack0000000000000178 = param_1._8_8_;
code_r0x0746de3c:
  *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
  *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
  FUN_07411d10(&stack0x00000090);
  uVar8 = uStack00000000000000a8;
  uVar7 = uStack00000000000000a0;
  uVar5 = uStack000000000000009c;
  fVar6 = fStack0000000000000098;
  fVar4 = fStack0000000000000094;
  fVar3 = fStack0000000000000090;
  uStack0000000000000178 = CONCAT44(uStack00000000000000fc,fStack00000000000000f8);
  uStack0000000000000170 = in_stack_000000f0;
  *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
  *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
  uVar17 = uStack00000000000000a8;
  FUN_07411d10(&stack0x00000090);
  uVar15 = uStack00000000000000a4;
  fVar12 = (float)FUN_0746d3e8(&stack0x00000120);
  fVar16 = fVar12;
  fVar22 = fVar4;
  fVar23 = fVar6;
  fVar13 = (float)FUN_0746e16c(fVar3);
  fVar24 = *unaff_x21;
  fVar19 = unaff_x21[1];
  fVar21 = unaff_x21[2];
  fVar26 = unaff_x21[3];
  fVar25 = unaff_x21[4];
  fVar20 = unaff_x21[5];
  if (*(char *)(unaff_x20 + 0x3dc) == '\0') {
    FUN_03d2d2b0();
    *(undefined1 *)(unaff_x20 + 0x3dc) = 1;
  }
  fVar25 = fVar23 * fVar20 + fVar13 * fVar26 + fVar22 * fVar25;
  fVar20 = ABS(fVar25);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar20 = fVar20 * *(float *)(unaff_x26 + 0xa48);
  fVar26 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar20 <= fVar26) {
    fVar20 = fVar26;
  }
  if (ABS(0.0 - fVar25) < fVar20) goto LAB_0746e128;
  uVar18 = (ulong)(uint)(fVar23 * fVar21);
  fVar16 = -(fVar23 * fVar21 + fVar24 * fVar13 + fVar22 * fVar19) - fVar16;
  uVar9 = (ulong)(uint)fVar16;
  if (fVar16 / fVar25 <= 0.0) goto LAB_0746e128;
  uVar14 = FUN_08a157e0();
  FUN_0746d40c(uVar14);
  fStack0000000000000154 = fVar4;
  uStack0000000000000150 = FUN_0746e4cc(fVar3,fVar4,fVar6,fVar12,uVar15,uVar17);
  fStack0000000000000158 = fVar6;
  uStack000000000000015c = FUN_08a44560(uVar5,0);
  in_stack_00000168 = uVar8;
  in_stack_00000160 = uVar7;
  do {
    fVar4 = fStack0000000000000158;
    fVar3 = fStack0000000000000154;
    uVar5 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_09220a10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0746c6c8(uVar14,uVar9,uVar18,uVar5,fVar3,fVar4,&stack0x000000e0,0);
    uVar9 = FUN_07466a2c(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x000000e0);
    if ((uVar9 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      in_stack_00000070._4_4_ = in_stack_000000e8;
      FUN_074115cc(in_stack_00000038,&stack0x00000150,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_0746e128:
    do {
      do {
        lVar10 = *(long *)(unaff_x22 + 0x20);
        if (lVar10 == 0) goto LAB_0746e130;
        if (*(int *)(lVar10 + 0x18) <= unaff_w23) {
          return in_stack_00000030._4_4_ & 1;
        }
        FUN_0592ed18(&stack0x00000090,lVar10,unaff_w23,*unaff_x29);
        in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
        in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
        *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
        lVar10 = *(long *)(unaff_x22 + 0x20);
        if (lVar10 == 0) goto LAB_0746e130;
        iVar1 = *(int *)(lVar10 + 0x18);
        unaff_w23 = unaff_w23 + 1;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = unaff_w23 / iVar1;
        }
        FUN_0592ed18(&stack0x00000090,lVar10,unaff_w23 - iVar2 * iVar1,*unaff_x29);
        in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
        fStack00000000000000f8 = fStack0000000000000098;
        uStack00000000000000fc = uStack000000000000009c;
        in_stack_00000108 = uStack00000000000000a8;
        uStack0000000000000100 = uStack00000000000000a0;
        uStack0000000000000104 = uStack00000000000000a4;
        if (in_stack_00000148 == '\0') {
          if ((in_stack_000000b8 & 0xff) != 0) goto LAB_0746e128;
LAB_0746dc44:
          if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_0746e130:
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          uStack0000000000000170 = in_stack_00000120;
          uStack0000000000000178 = in_stack_00000128;
          if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) goto code_r0x0746de3c;
        }
        else if ((in_stack_000000b8 & 0xff) == 0) goto LAB_0746dc44;
        uStack0000000000000178 = in_stack_00000128;
        uStack0000000000000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_07411d10(&stack0x00000090);
        fVar6 = fStack0000000000000098;
        fVar4 = fStack0000000000000094;
        fVar3 = fStack0000000000000090;
        in_stack_000000c0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        uStack00000000000000d4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
        in_stack_000000c8 = fStack0000000000000098;
        uStack00000000000000d0 = uStack00000000000000a0;
        fVar23 = unaff_x21[3];
        fVar22 = unaff_x21[4];
        fVar16 = unaff_x21[5];
        if (*(char *)(unaff_x28 + 0x37d) == '\0') {
          FUN_03d2d2b0();
          *(undefined1 *)(unaff_x28 + 0x37d) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        fVar12 = SQRT(fVar16 * fVar16 + fVar23 * fVar23 + fVar22 * fVar22);
        if (fVar12 <= DAT_0191476c) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
          }
          pfVar11 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
          fVar23 = *pfVar11;
          fVar22 = pfVar11[1];
          fVar12 = pfVar11[2];
        }
        else {
          fVar23 = -fVar23 / fVar12;
          fVar22 = -fVar22 / fVar12;
          fVar12 = -fVar16 / fVar12;
        }
        fVar16 = *unaff_x21;
        fVar24 = unaff_x21[1];
        fVar13 = unaff_x21[2];
        fVar19 = unaff_x21[3];
        fVar21 = unaff_x21[4];
        fVar20 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x3dc) == '\0') {
          FUN_03d2d2b0();
          *(undefined1 *)(unaff_x20 + 0x3dc) = 1;
        }
        fVar20 = fVar12 * fVar20 + fVar23 * fVar19 + fVar22 * fVar21;
        fVar19 = ABS(fVar20);
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        fVar19 = fVar19 * *(float *)(unaff_x26 + 0xa48);
        fVar21 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar19 <= fVar21) {
          fVar19 = fVar21;
        }
      } while (ABS(0.0 - fVar20) < fVar19);
      fVar16 = fVar12 * fVar13 + fVar23 * fVar16 + fVar22 * fVar24;
      uVar18 = (ulong)(uint)fVar16;
      fVar16 = (fVar6 * fVar12 + fVar3 * fVar23 + fVar4 * fVar22) - fVar16;
      uVar9 = (ulong)(uint)fVar16;
    } while (fVar16 / fVar20 <= 0.0);
    uVar14 = FUN_08a157e0();
    FUN_074115cc(&stack0x00000150,&stack0x000000c0,0);
  } while( true );
}


