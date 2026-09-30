/*
FUNCTION_NAME: OVRPlugin$$CreateInsightTriangleMesh
ENTRY_POINT: 07c789c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__CreateInsightTriangleMesh(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
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
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s11;
  float fVar20;
  float unaff_s12;
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
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
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
  float in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 in_stack_00000100;
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
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
code_r0x07c789c8:
  fVar9 = SQRT(unaff_s8 * unaff_s8 + unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11);
  if (fVar9 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar20 = *pfVar8;
    fVar21 = pfVar8[1];
    fVar9 = pfVar8[2];
  }
  else {
    fVar20 = -unaff_s12 / fVar9;
    fVar21 = -unaff_s11 / fVar9;
    fVar9 = -unaff_s8 / fVar9;
  }
  fVar14 = *unaff_x21;
  fVar26 = unaff_x21[1];
  fVar15 = unaff_x21[2];
  fVar17 = unaff_x21[3];
  fVar24 = unaff_x21[4];
  fVar19 = unaff_x21[5];
  if (*(char *)(unaff_x20 + 0x24f) == '\0') {
    FUN_04447ba8();
    *(undefined1 *)(unaff_x20 + 0x24f) = 1;
  }
  fVar19 = fVar9 * fVar19 + fVar20 * fVar17 + fVar21 * fVar24;
  fVar17 = ABS(fVar19);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar17 = fVar17 * *(float *)(unaff_x26 + 0x2f8);
  fVar24 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar17 <= fVar24) {
    fVar17 = fVar24;
  }
  if (ABS(0.0 - fVar19) < fVar17) goto LAB_07c78e20;
  fVar14 = fVar9 * fVar15 + fVar20 * fVar14 + fVar21 * fVar26;
  uVar13 = (ulong)(uint)fVar14;
  fVar14 = (fStack000000000000008c * fVar9 +
           in_stack_00000080._4_4_ * fVar20 + fStack0000000000000088 * fVar21) - fVar14;
  uVar6 = (ulong)(uint)fVar14;
  if (fVar14 / fVar19 <= 0.0) goto LAB_07c78e20;
  uVar10 = FUN_094cbc54();
  FUN_07c1d744(&stack0x00000150,&stack0x000000c0,0);
  do {
    fVar20 = fStack0000000000000158;
    fVar9 = fStack0000000000000154;
    uVar3 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_09f4dfe0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07c77388(uVar10,uVar6,uVar13,uVar3,fVar9,fVar20,&stack0x000000e0,0);
    uVar6 = FUN_07c71620(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x000000e0);
    if ((uVar6 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      in_stack_00000070._4_4_ = in_stack_000000e8;
      FUN_07c1d744(in_stack_00000038,&stack0x00000150,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_07c78e20:
    do {
      do {
        do {
          lVar7 = *(long *)(unaff_x22 + 0x20);
          if (lVar7 == 0) goto LAB_07c78e28;
          if (*(int *)(lVar7 + 0x18) <= unaff_w23) {
            return in_stack_00000030._4_4_ & 1;
          }
          FUN_05a2b850(&stack0x00000090,lVar7,unaff_w23,*unaff_x29);
          in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
          in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
          in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
          in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
          *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
          *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
          lVar7 = *(long *)(unaff_x22 + 0x20);
          if (lVar7 == 0) goto LAB_07c78e28;
          iVar1 = *(int *)(lVar7 + 0x18);
          unaff_w23 = unaff_w23 + 1;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = unaff_w23 / iVar1;
          }
          FUN_05a2b850(&stack0x00000090,lVar7,unaff_w23 - iVar2 * iVar1,*unaff_x29);
          in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
          in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
          in_stack_000000f8 = fStack0000000000000098;
          uStack00000000000000fc = uStack000000000000009c;
          in_stack_00000108 = uStack00000000000000a8;
          in_stack_00000100 = uStack00000000000000a0;
          uStack0000000000000104 = uStack00000000000000a4;
          if (in_stack_00000148 != '\0') {
            if ((in_stack_000000b8 & 0xff) == 0) break;
LAB_07c78950:
            in_stack_00000178 = in_stack_00000128;
            in_stack_00000170 = in_stack_00000120;
            *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
            *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
            FUN_07c1de88(&stack0x00000090);
            in_stack_000000c0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
            uStack00000000000000d4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
            in_stack_000000c8 = fStack0000000000000098;
            uStack00000000000000d0 = uStack00000000000000a0;
            unaff_s12 = unaff_x21[3];
            unaff_s11 = unaff_x21[4];
            unaff_s8 = unaff_x21[5];
            in_stack_00000080._4_4_ = fStack0000000000000090;
            fStack0000000000000088 = fStack0000000000000094;
            fStack000000000000008c = fStack0000000000000098;
            if (*(char *)(unaff_x28 + 0xf42) == '\0') {
              FUN_04447ba8();
              *(undefined1 *)(unaff_x28 + 0xf42) = 1;
            }
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            goto code_r0x07c789c8;
          }
        } while ((in_stack_000000b8 & 0xff) != 0);
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_07c78e28:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_07c78950;
        in_stack_00000178 = in_stack_00000128;
        in_stack_00000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_07c1de88(&stack0x00000090);
        uVar5 = uStack00000000000000a8;
        uVar4 = uStack00000000000000a0;
        uVar3 = uStack000000000000009c;
        fVar21 = fStack0000000000000098;
        fVar20 = fStack0000000000000094;
        fVar9 = fStack0000000000000090;
        in_stack_00000178 = CONCAT44(uStack00000000000000fc,in_stack_000000f8);
        in_stack_00000170 = in_stack_000000f0;
        *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
        *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(in_stack_00000100,uStack00000000000000fc);
        uVar12 = uStack00000000000000a8;
        FUN_07c1de88(&stack0x00000090);
        uVar11 = uStack00000000000000a4;
        fVar19 = (float)FUN_07c780e0(&stack0x00000120);
        fVar14 = fVar19;
        fVar15 = fVar20;
        fVar17 = fVar21;
        fVar24 = (float)FUN_07c78e64(fVar9);
        fVar22 = *unaff_x21;
        fVar26 = unaff_x21[1];
        fVar18 = unaff_x21[2];
        fVar25 = unaff_x21[3];
        fVar23 = unaff_x21[4];
        fVar16 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x24f) == '\0') {
          FUN_04447ba8();
          *(undefined1 *)(unaff_x20 + 0x24f) = 1;
        }
        fVar23 = fVar17 * fVar16 + fVar24 * fVar25 + fVar15 * fVar23;
        fVar16 = ABS(fVar23);
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = fVar16 * *(float *)(unaff_x26 + 0x2f8);
        fVar25 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar16 <= fVar25) {
          fVar16 = fVar25;
        }
      } while (ABS(0.0 - fVar23) < fVar16);
      uVar13 = (ulong)(uint)(fVar17 * fVar18);
      fVar14 = -(fVar17 * fVar18 + fVar22 * fVar24 + fVar15 * fVar26) - fVar14;
      uVar6 = (ulong)(uint)fVar14;
    } while (fVar14 / fVar23 <= 0.0);
    uVar10 = FUN_094cbc54();
    FUN_07c78104(uVar10);
    fStack0000000000000154 = fVar20;
    uStack0000000000000150 = FUN_07c791cc(fVar9,fVar20,fVar21,fVar19,uVar11,uVar12);
    fStack0000000000000158 = fVar21;
    uStack000000000000015c = FUN_09516694(uVar3,0);
    in_stack_00000168 = uVar5;
    in_stack_00000160 = uVar4;
  } while( true );
}


