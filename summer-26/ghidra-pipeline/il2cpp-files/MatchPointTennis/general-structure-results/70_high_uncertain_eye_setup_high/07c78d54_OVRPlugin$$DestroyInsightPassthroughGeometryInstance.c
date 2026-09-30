/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 07c78d54
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__DestroyInsightPassthroughGeometryInstance
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,ulong param_5,
               ulong param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
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
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong unaff_d9;
  float fVar18;
  undefined8 unaff_d10;
  float fVar19;
  ulong unaff_d11;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong unaff_d15;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  uint uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  uint uStack00000000000000a4;
  uint uStack00000000000000a8;
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
  uint uStack0000000000000104;
  uint in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char in_stack_00000148;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined4 uStack0000000000000160;
  uint uStack0000000000000164;
  uint in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
code_r0x07c78d54:
  uStack0000000000000150 = FUN_07c791cc(unaff_d9,param_2,param_3,param_4,param_5,param_6);
  uStack0000000000000154 = (undefined4)param_2;
  uStack0000000000000158 = (undefined4)param_3;
  uVar8 = uStack000000000000006c;
  uVar13 = uStack0000000000000068;
  uVar14 = in_stack_00000060._4_4_;
  uStack000000000000015c = FUN_09516694(uStack0000000000000070,0);
  in_stack_00000168 = uVar14;
  uStack0000000000000164 = uVar13;
  uStack0000000000000160 = uVar8;
  do {
    uVar7 = uStack0000000000000158;
    uVar6 = uStack0000000000000154;
    uVar8 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_09f4dfe0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07c77388(unaff_d10,unaff_d15,unaff_d11,uVar8,uVar6,uVar7,&stack0x000000e0,0);
    uVar9 = FUN_07c71620(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x000000e0);
    if ((uVar9 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      uStack0000000000000074 = in_stack_000000e8;
      FUN_07c1d744(in_stack_00000038,&stack0x00000150,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_07c78e20:
    do {
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if (lVar10 == 0) goto LAB_07c78e28;
      if (*(int *)(lVar10 + 0x18) <= unaff_w23) {
        return in_stack_00000030._4_4_ & 1;
      }
      FUN_05a2b850(&stack0x00000090,lVar10,unaff_w23,*unaff_x29);
      in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if (lVar10 == 0) goto LAB_07c78e28;
      iVar1 = *(int *)(lVar10 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w23 / iVar1;
      }
      FUN_05a2b850(&stack0x00000090,lVar10,unaff_w23 - iVar2 * iVar1,*unaff_x29);
      in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      in_stack_000000f8 = fStack0000000000000098;
      uStack00000000000000fc = uStack000000000000009c;
      in_stack_00000108 = uStack00000000000000a8;
      in_stack_00000100 = uStack00000000000000a0;
      uStack0000000000000104 = uStack00000000000000a4;
      if (in_stack_00000148 == '\0') {
        if ((in_stack_000000b8 & 0xff) != 0) goto LAB_07c78e20;
LAB_07c7893c:
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_07c78e28:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) {
          in_stack_00000178 = in_stack_00000128;
          in_stack_00000170 = in_stack_00000120;
          *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
          *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
          FUN_07c1de88(&stack0x00000090);
          fVar5 = fStack0000000000000098;
          fVar4 = fStack0000000000000094;
          fVar3 = fStack0000000000000090;
          uStack000000000000006c = uStack00000000000000a0;
          uStack0000000000000070 = uStack000000000000009c;
          in_stack_00000060._4_4_ = uStack00000000000000a8;
          uStack0000000000000068 = uStack00000000000000a4;
          in_stack_00000178 = CONCAT44(uStack00000000000000fc,in_stack_000000f8);
          in_stack_00000170 = in_stack_000000f0;
          *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
          *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(in_stack_00000100,uStack00000000000000fc);
          uVar14 = uStack00000000000000a8;
          FUN_07c1de88(&stack0x00000090);
          uVar13 = uStack00000000000000a4;
          fVar12 = (float)FUN_07c780e0(&stack0x00000120);
          fVar15 = fVar12;
          fVar19 = fVar4;
          fVar20 = fVar5;
          fVar16 = (float)FUN_07c78e64(fVar3);
          fVar24 = *unaff_x21;
          fVar17 = unaff_x21[1];
          fVar22 = unaff_x21[2];
          fVar23 = unaff_x21[3];
          fVar21 = unaff_x21[4];
          fVar18 = unaff_x21[5];
          if (*(char *)(unaff_x20 + 0x24f) == '\0') {
            FUN_04447ba8();
            *(undefined1 *)(unaff_x20 + 0x24f) = 1;
          }
          fVar21 = fVar20 * fVar18 + fVar16 * fVar23 + fVar19 * fVar21;
          fVar18 = ABS(fVar21);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar18 = fVar18 * *(float *)(unaff_x26 + 0x2f8);
          fVar23 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
          if (fVar18 <= fVar23) {
            fVar18 = fVar23;
          }
          if (fVar18 <= ABS(0.0 - fVar21)) {
            unaff_d11 = (ulong)(uint)(fVar20 * fVar22);
            fVar15 = -(fVar20 * fVar22 + fVar24 * fVar16 + fVar19 * fVar17) - fVar15;
            unaff_d15 = (ulong)(uint)fVar15;
            if (0.0 < fVar15 / fVar21) {
              unaff_d10 = FUN_094cbc54();
              param_5 = (ulong)uVar13;
              param_4 = (ulong)(uint)fVar12;
              param_2 = (ulong)(uint)fVar4;
              unaff_d9 = (ulong)(uint)fVar3;
              param_3 = (ulong)(uint)fVar5;
              FUN_07c78104(unaff_d10);
              param_6 = (ulong)uVar14;
              goto code_r0x07c78d54;
            }
          }
          goto LAB_07c78e20;
        }
      }
      else if ((in_stack_000000b8 & 0xff) == 0) goto LAB_07c7893c;
      in_stack_00000178 = in_stack_00000128;
      in_stack_00000170 = in_stack_00000120;
      *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
      *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
      FUN_07c1de88(&stack0x00000090);
      fVar5 = fStack0000000000000098;
      fVar4 = fStack0000000000000094;
      fVar3 = fStack0000000000000090;
      in_stack_000000c0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      uStack00000000000000d4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
      in_stack_000000c8 = fStack0000000000000098;
      uStack00000000000000d0 = uStack00000000000000a0;
      fVar20 = unaff_x21[3];
      fVar19 = unaff_x21[4];
      fVar15 = unaff_x21[5];
      if (*(char *)(unaff_x28 + 0xf42) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x28 + 0xf42) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fVar12 = SQRT(fVar15 * fVar15 + fVar20 * fVar20 + fVar19 * fVar19);
      if (fVar12 <= DAT_01c7607c) {
        if (DAT_0a51bf43 == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e740);
          DAT_0a51bf43 = '\x01';
        }
        pfVar11 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
        fVar20 = *pfVar11;
        fVar19 = pfVar11[1];
        fVar12 = pfVar11[2];
      }
      else {
        fVar20 = -fVar20 / fVar12;
        fVar19 = -fVar19 / fVar12;
        fVar12 = -fVar15 / fVar12;
      }
      fVar15 = *unaff_x21;
      fVar24 = unaff_x21[1];
      fVar16 = unaff_x21[2];
      fVar17 = unaff_x21[3];
      fVar22 = unaff_x21[4];
      fVar18 = unaff_x21[5];
      if (*(char *)(unaff_x20 + 0x24f) == '\0') {
        FUN_04447ba8();
        *(undefined1 *)(unaff_x20 + 0x24f) = 1;
      }
      fVar18 = fVar12 * fVar18 + fVar20 * fVar17 + fVar19 * fVar22;
      fVar17 = ABS(fVar18);
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar17 = fVar17 * *(float *)(unaff_x26 + 0x2f8);
      fVar22 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar17 <= fVar22) {
        fVar17 = fVar22;
      }
      if (ABS(0.0 - fVar18) < fVar17) goto LAB_07c78e20;
      fVar15 = fVar12 * fVar16 + fVar20 * fVar15 + fVar19 * fVar24;
      unaff_d11 = (ulong)(uint)fVar15;
      fVar15 = (fVar5 * fVar12 + fVar3 * fVar20 + fVar4 * fVar19) - fVar15;
      unaff_d15 = (ulong)(uint)fVar15;
    } while (fVar15 / fVar18 <= 0.0);
    unaff_d10 = FUN_094cbc54();
    FUN_07c1d744(&stack0x00000150,&stack0x000000c0,0);
  } while( true );
}


