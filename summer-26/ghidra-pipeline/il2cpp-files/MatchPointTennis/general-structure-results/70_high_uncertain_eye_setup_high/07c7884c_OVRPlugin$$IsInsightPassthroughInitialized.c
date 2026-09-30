/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughInitialized
ENTRY_POINT: 07c7884c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRPlugin__IsInsightPassthroughInitialized
          (ulong *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  float *pfVar16;
  long *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int iVar17;
  long unaff_x27;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  ulong uStack0000000000000090;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  uint in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  ulong in_stack_000000f0;
  float fStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 in_stack_00000100;
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  ulong in_stack_00000120;
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
  ulong in_stack_00000170;
  undefined8 in_stack_00000178;
  
  uStack0000000000000090 = param_3._0_8_;
  fStack0000000000000098 = param_3._8_4_;
  uStack000000000000009c = param_3._12_4_;
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack00000000000000a0,uStack000000000000009c);
  param_1[1] = param_3._8_8_;
  *param_1 = uStack0000000000000090;
  lVar14 = *unaff_x20;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar14);
    lVar14 = *unaff_x20;
  }
  puVar5 = PTR_DAT_09f50808;
  puVar4 = PTR_DAT_09f1f580;
  puVar3 = PTR_DAT_09f1e748;
  lVar12 = *(long *)(unaff_x22 + 0x20);
  if (lVar12 != 0) {
    uStack0000000000000034 = 0;
    puVar15 = *(undefined4 **)(lVar14 + 0xb8);
    uStack000000000000007c = *puVar15;
    uStack0000000000000078 = puVar15[1];
    iVar17 = 0;
    uStack0000000000000074 = puVar15[2];
    do {
      if (*(int *)(lVar12 + 0x18) <= iVar17) {
        return uStack0000000000000034;
      }
      FUN_05a2b850(&stack0x00000090,lVar12,iVar17,*(undefined8 *)puVar5);
      in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      in_stack_00000120 = uStack0000000000000090;
      *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      lVar14 = *(long *)(unaff_x22 + 0x20);
      if (lVar14 == 0) break;
      iVar1 = *(int *)(lVar14 + 0x18);
      iVar17 = iVar17 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar17 / iVar1;
      }
      FUN_05a2b850(&stack0x00000090,lVar14,iVar17 - iVar2 * iVar1,*(undefined8 *)puVar5);
      in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      fStack00000000000000f8 = fStack0000000000000098;
      uStack00000000000000fc = uStack000000000000009c;
      in_stack_000000f0 = uStack0000000000000090;
      in_stack_00000108 = uStack00000000000000a8;
      in_stack_00000100 = uStack00000000000000a0;
      uStack0000000000000104 = uStack00000000000000a4;
      if (in_stack_00000148 == '\0') {
        if ((in_stack_000000b8 & 0xff) == 0) goto LAB_07c7893c;
        goto LAB_07c78e20;
      }
      if ((in_stack_000000b8 & 0xff) == 0) {
LAB_07c7893c:
        if (*(long *)(unaff_x22 + 0x20) == 0) break;
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_07c78950;
        in_stack_00000178 = in_stack_00000128;
        in_stack_00000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_07c1de88(&stack0x00000090);
        uVar11 = uStack00000000000000a8;
        uVar10 = uStack00000000000000a0;
        uVar7 = uStack000000000000009c;
        fVar9 = fStack0000000000000098;
        uVar6 = uStack0000000000000090;
        uVar13 = uStack0000000000000090 & 0xffffffff;
        fVar8 = uStack0000000000000090._4_4_;
        in_stack_00000178 = CONCAT44(uStack00000000000000fc,fStack00000000000000f8);
        in_stack_00000170 = in_stack_000000f0;
        *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
        *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(in_stack_00000100,uStack00000000000000fc);
        uVar24 = uStack00000000000000a8;
        FUN_07c1de88(&stack0x00000090);
        uVar21 = uStack00000000000000a4;
        fVar31 = (float)FUN_07c780e0(&stack0x00000120);
        fVar23 = fVar31;
        fVar26 = fVar8;
        fVar30 = fVar9;
        fVar18 = (float)FUN_07c78e64(uVar13);
        fVar32 = *unaff_x21;
        fVar27 = unaff_x21[1];
        fVar29 = unaff_x21[2];
        fVar20 = unaff_x21[3];
        fVar33 = unaff_x21[4];
        fVar28 = unaff_x21[5];
        if (DAT_0a51c24f == '\0') {
          FUN_04447ba8(puVar4);
          DAT_0a51c24f = '\x01';
        }
        fVar28 = fVar30 * fVar28 + fVar18 * fVar20 + fVar26 * fVar33;
        fVar33 = ABS(fVar28);
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        fVar22 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar20 = fVar33 * DAT_01c762f8;
        if (fVar33 * DAT_01c762f8 <= fVar22) {
          fVar20 = fVar22;
        }
        if (fVar20 <= ABS(0.0 - fVar28)) {
          uVar25 = (ulong)(uint)(fVar30 * fVar29);
          fVar23 = -(fVar30 * fVar29 + fVar32 * fVar18 + fVar26 * fVar27) - fVar23;
          uVar13 = (ulong)(uint)fVar23;
          if (fVar23 / fVar28 <= 0.0) goto LAB_07c78e20;
          uVar19 = FUN_094cbc54();
          FUN_07c78104(uVar19);
          uStack0000000000000150 = FUN_07c791cc(uVar6 & 0xffffffff,fVar8,fVar9,fVar31,uVar21,uVar24)
          ;
          fStack0000000000000158 = fVar9;
          fStack0000000000000154 = fVar8;
          uStack000000000000015c = FUN_09516694(uVar7,0);
          in_stack_00000168 = uVar11;
          in_stack_00000160 = uVar10;
LAB_07c78d98:
          fVar9 = fStack0000000000000158;
          fVar8 = fStack0000000000000154;
          uVar7 = uStack0000000000000150;
          if (*(int *)(*(long *)PTR_DAT_09f4dfe0 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_07c77388(uVar19,uVar13,uVar25,uVar7,fVar8,fVar9,&stack0x000000e0,0);
          uVar13 = FUN_07c71620(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074
                                ,&stack0x000000e0);
          if ((uVar13 & 1) != 0) {
            uStack0000000000000078 = uStack00000000000000e4;
            uStack000000000000007c = uStack00000000000000e0;
            uStack0000000000000074 = in_stack_000000e8;
            FUN_07c1d744(in_stack_00000038,&stack0x00000150,0);
            uStack0000000000000034 = 1;
          }
        }
      }
      else {
LAB_07c78950:
        in_stack_00000178 = in_stack_00000128;
        in_stack_00000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_07c1de88(&stack0x00000090);
        fVar8 = fStack0000000000000098;
        uStack00000000000000d4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
        fStack00000000000000c8 = fStack0000000000000098;
        _fStack00000000000000c0 = uStack0000000000000090;
        uVar13 = _fStack00000000000000c0;
        uStack00000000000000cc = uStack000000000000009c;
        uStack00000000000000d0 = uStack00000000000000a0;
        fStack00000000000000c0 = (float)uStack0000000000000090;
        fVar9 = fStack00000000000000c0;
        fStack00000000000000c4 = (float)(uStack0000000000000090 >> 0x20);
        fVar23 = fStack00000000000000c4;
        fVar31 = unaff_x21[3];
        fVar30 = unaff_x21[4];
        fVar26 = unaff_x21[5];
        _fStack00000000000000c0 = uVar13;
        if (DAT_0a51bf42 == '\0') {
          FUN_04447ba8(puVar3);
          DAT_0a51bf42 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        fVar18 = SQRT(fVar26 * fVar26 + fVar31 * fVar31 + fVar30 * fVar30);
        if (fVar18 <= DAT_01c7607c) {
          if (DAT_0a51bf43 == '\0') {
            FUN_04447ba8(PTR_DAT_09f1e740);
            DAT_0a51bf43 = '\x01';
          }
          pfVar16 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
          fVar31 = *pfVar16;
          fVar30 = pfVar16[1];
          fVar18 = pfVar16[2];
        }
        else {
          fVar31 = -fVar31 / fVar18;
          fVar30 = -fVar30 / fVar18;
          fVar18 = -fVar26 / fVar18;
        }
        fVar26 = *unaff_x21;
        fVar33 = unaff_x21[1];
        fVar27 = unaff_x21[2];
        fVar28 = unaff_x21[3];
        fVar32 = unaff_x21[4];
        fVar29 = unaff_x21[5];
        if (DAT_0a51c24f == '\0') {
          FUN_04447ba8(puVar4);
          DAT_0a51c24f = '\x01';
        }
        fVar28 = fVar18 * fVar29 + fVar31 * fVar28 + fVar30 * fVar32;
        fVar29 = ABS(fVar28);
        if (fVar29 <= 0.0) {
          fVar29 = 0.0;
        }
        fVar20 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar32 = fVar29 * DAT_01c762f8;
        if (fVar29 * DAT_01c762f8 <= fVar20) {
          fVar32 = fVar20;
        }
        if (fVar32 <= ABS(0.0 - fVar28)) {
          fVar26 = fVar18 * fVar27 + fVar31 * fVar26 + fVar30 * fVar33;
          uVar25 = (ulong)(uint)fVar26;
          fVar26 = (fVar8 * fVar18 + fVar9 * fVar31 + fVar23 * fVar30) - fVar26;
          uVar13 = (ulong)(uint)fVar26;
          if (0.0 < fVar26 / fVar28) {
            uVar19 = FUN_094cbc54();
            FUN_07c1d744(&stack0x00000150,&stack0x000000c0,0);
            goto LAB_07c78d98;
          }
        }
      }
LAB_07c78e20:
      lVar12 = *(long *)(unaff_x22 + 0x20);
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


