/*
FUNCTION_NAME: OVRPlugin$$GuidToUuidString
ENTRY_POINT: 0746de5c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GuidToUuidString(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
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
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
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
  undefined4 uStack0000000000000160;
  undefined4 uStack0000000000000164;
  undefined4 in_stack_00000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  
code_r0x0746de5c:
  uVar5 = uStack000000000000009c;
  fVar6 = fStack0000000000000098;
  fVar4 = fStack0000000000000094;
  fVar3 = fStack0000000000000090;
  uStack000000000000006c = uStack00000000000000a0;
  uStack0000000000000064 = uStack00000000000000a8;
  uStack0000000000000068 = uStack00000000000000a4;
  uStack0000000000000178 = CONCAT44(uStack00000000000000fc,fStack00000000000000f8);
  uStack0000000000000170 = in_stack_000000f0;
  *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
  *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
  uVar16 = uStack00000000000000a8;
  FUN_07411d10(&stack0x00000090);
  uVar14 = uStack00000000000000a4;
  fVar11 = (float)FUN_0746d3e8(&stack0x00000120);
  fVar15 = fVar11;
  fVar21 = fVar4;
  fVar22 = fVar6;
  fVar12 = (float)FUN_0746e16c(fVar3);
  fVar23 = *unaff_x21;
  fVar18 = unaff_x21[1];
  fVar20 = unaff_x21[2];
  fVar25 = unaff_x21[3];
  fVar24 = unaff_x21[4];
  fVar19 = unaff_x21[5];
  if (*(char *)(unaff_x20 + 0x3dc) == '\0') {
    FUN_03d2d2b0();
    *(undefined1 *)(unaff_x20 + 0x3dc) = 1;
  }
  fVar24 = fVar22 * fVar19 + fVar12 * fVar25 + fVar21 * fVar24;
  fVar19 = ABS(fVar24);
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  fVar19 = fVar19 * *(float *)(unaff_x26 + 0xa48);
  fVar25 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar19 <= fVar25) {
    fVar19 = fVar25;
  }
  if (ABS(0.0 - fVar24) < fVar19) goto LAB_0746e128;
  uVar17 = (ulong)(uint)(fVar22 * fVar20);
  fVar15 = -(fVar22 * fVar20 + fVar23 * fVar12 + fVar21 * fVar18) - fVar15;
  uVar8 = (ulong)(uint)fVar15;
  if (fVar15 / fVar24 <= 0.0) goto LAB_0746e128;
  uVar13 = FUN_08a157e0();
  FUN_0746d40c(uVar13);
  fStack0000000000000154 = fVar4;
  uStack0000000000000150 = FUN_0746e4cc(fVar3,fVar4,fVar6,fVar11,uVar14,uVar16);
  fStack0000000000000158 = fVar6;
  uVar14 = uStack000000000000006c;
  uVar16 = uStack0000000000000068;
  uVar7 = uStack0000000000000064;
  uStack000000000000015c = FUN_08a44560(uVar5,0);
  in_stack_00000168 = uVar7;
  uStack0000000000000164 = uVar16;
  uStack0000000000000160 = uVar14;
  do {
    fVar4 = fStack0000000000000158;
    fVar3 = fStack0000000000000154;
    uVar5 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_09220a10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_0746c6c8(uVar13,uVar8,uVar17,uVar5,fVar3,fVar4,&stack0x000000e0,0);
    uVar8 = FUN_07466a2c(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x000000e0);
    if ((uVar8 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      in_stack_00000070._4_4_ = in_stack_000000e8;
      FUN_074115cc(in_stack_00000038,&stack0x00000150,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_0746e128:
    do {
      do {
        lVar9 = *(long *)(unaff_x22 + 0x20);
        if (lVar9 == 0) goto LAB_0746e130;
        if (*(int *)(lVar9 + 0x18) <= unaff_w23) {
          return in_stack_00000030._4_4_ & 1;
        }
        FUN_0592ed18(&stack0x00000090,lVar9,unaff_w23,*unaff_x29);
        in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
        in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
        *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
        lVar9 = *(long *)(unaff_x22 + 0x20);
        if (lVar9 == 0) goto LAB_0746e130;
        iVar1 = *(int *)(lVar9 + 0x18);
        unaff_w23 = unaff_w23 + 1;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = unaff_w23 / iVar1;
        }
        FUN_0592ed18(&stack0x00000090,lVar9,unaff_w23 - iVar2 * iVar1,*unaff_x29);
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
          if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) {
            uStack0000000000000178 = in_stack_00000128;
            uStack0000000000000170 = in_stack_00000120;
            *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
            *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
            FUN_07411d10(&stack0x00000090);
            goto code_r0x0746de5c;
          }
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
        fVar22 = unaff_x21[3];
        fVar21 = unaff_x21[4];
        fVar15 = unaff_x21[5];
        if (*(char *)(unaff_x28 + 0x37d) == '\0') {
          FUN_03d2d2b0();
          *(undefined1 *)(unaff_x28 + 0x37d) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        fVar11 = SQRT(fVar15 * fVar15 + fVar22 * fVar22 + fVar21 * fVar21);
        if (fVar11 <= DAT_0191476c) {
          if (DAT_098362c7 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091a0f88);
            DAT_098362c7 = '\x01';
          }
          pfVar10 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
          fVar22 = *pfVar10;
          fVar21 = pfVar10[1];
          fVar11 = pfVar10[2];
        }
        else {
          fVar22 = -fVar22 / fVar11;
          fVar21 = -fVar21 / fVar11;
          fVar11 = -fVar15 / fVar11;
        }
        fVar15 = *unaff_x21;
        fVar23 = unaff_x21[1];
        fVar12 = unaff_x21[2];
        fVar18 = unaff_x21[3];
        fVar20 = unaff_x21[4];
        fVar19 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x3dc) == '\0') {
          FUN_03d2d2b0();
          *(undefined1 *)(unaff_x20 + 0x3dc) = 1;
        }
        fVar19 = fVar11 * fVar19 + fVar22 * fVar18 + fVar21 * fVar20;
        fVar18 = ABS(fVar19);
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar18 = fVar18 * *(float *)(unaff_x26 + 0xa48);
        fVar20 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar18 <= fVar20) {
          fVar18 = fVar20;
        }
      } while (ABS(0.0 - fVar19) < fVar18);
      fVar15 = fVar11 * fVar12 + fVar22 * fVar15 + fVar21 * fVar23;
      uVar17 = (ulong)(uint)fVar15;
      fVar15 = (fVar6 * fVar11 + fVar3 * fVar22 + fVar4 * fVar21) - fVar15;
      uVar8 = (ulong)(uint)fVar15;
    } while (fVar15 / fVar19 <= 0.0);
    uVar13 = FUN_08a157e0();
    FUN_074115cc(&stack0x00000150,&stack0x000000c0,0);
  } while( true );
}


