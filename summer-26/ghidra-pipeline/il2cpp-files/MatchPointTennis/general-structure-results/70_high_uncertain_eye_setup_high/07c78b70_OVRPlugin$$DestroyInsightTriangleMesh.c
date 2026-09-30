/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightTriangleMesh
ENTRY_POINT: 07c78b70
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


uint OVRPlugin__DestroyInsightTriangleMesh
               (undefined8 *param_1,undefined4 param_2,undefined1 param_3 [16],undefined4 param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
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
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  ulong unaff_d8;
  float unaff_s9;
  float fVar17;
  float unaff_s10;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
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
  
  uStack0000000000000064 = param_4;
code_r0x07c78b70:
  uStack0000000000000178 = CONCAT44(uStack00000000000000fc,fStack00000000000000f8);
  uStack0000000000000170 = in_stack_000000f0;
  *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
  *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(uStack0000000000000100,uStack00000000000000fc);
  uVar12 = uStack0000000000000064;
  FUN_07c1de88(param_1);
  uVar9 = uStack00000000000000a4;
  fVar6 = (float)FUN_07c780e0(&stack0x00000120);
  fVar11 = fVar6;
  fVar10 = unaff_s9;
  fVar13 = unaff_s10;
  fVar7 = (float)FUN_07c78e64(unaff_d8);
  fVar18 = *unaff_x21;
  fVar15 = unaff_x21[1];
  fVar17 = unaff_x21[2];
  fVar20 = unaff_x21[3];
  fVar19 = unaff_x21[4];
  fVar16 = unaff_x21[5];
  if (*(char *)(unaff_x20 + 0x24f) == '\0') {
    FUN_04447ba8();
    *(undefined1 *)(unaff_x20 + 0x24f) = 1;
  }
  fVar19 = fVar13 * fVar16 + fVar7 * fVar20 + fVar10 * fVar19;
  fVar16 = ABS(fVar19);
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 * *(float *)(unaff_x26 + 0x2f8);
  fVar20 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar16 <= fVar20) {
    fVar16 = fVar20;
  }
  if (ABS(0.0 - fVar19) < fVar16) goto LAB_07c78e20;
  uVar14 = (ulong)(uint)(fVar13 * fVar17);
  fVar11 = -(fVar13 * fVar17 + fVar18 * fVar7 + fVar10 * fVar15) - fVar11;
  uVar3 = (ulong)(uint)fVar11;
  if (fVar11 / fVar19 <= 0.0) goto LAB_07c78e20;
  uVar8 = FUN_094cbc54();
  FUN_07c78104(uVar8);
  fStack0000000000000154 = unaff_s9;
  uStack0000000000000150 = FUN_07c791cc(unaff_d8 & 0xffffffff,unaff_s9,unaff_s10,fVar6,uVar9,uVar12)
  ;
  fStack0000000000000158 = unaff_s10;
  uVar9 = in_stack_00000068._4_4_;
  uVar12 = uStack0000000000000064;
  uStack000000000000015c = FUN_09516694(uStack0000000000000070,0);
  in_stack_00000168 = uVar12;
  uStack0000000000000164 = param_2;
  uStack0000000000000160 = uVar9;
  do {
    fVar10 = fStack0000000000000158;
    fVar11 = fStack0000000000000154;
    uVar9 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_09f4dfe0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07c77388(uVar8,uVar3,uVar14,uVar9,fVar11,fVar10,&stack0x000000e0,0);
    uVar3 = FUN_07c71620(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x000000e0);
    if ((uVar3 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      uStack0000000000000074 = in_stack_000000e8;
      FUN_07c1d744(in_stack_00000038,&stack0x00000150,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_07c78e20:
    do {
      do {
        lVar4 = *(long *)(unaff_x22 + 0x20);
        if (lVar4 == 0) goto LAB_07c78e28;
        if (*(int *)(lVar4 + 0x18) <= unaff_w23) {
          return in_stack_00000030._4_4_ & 1;
        }
        FUN_05a2b850(&stack0x00000090,lVar4,unaff_w23,*unaff_x29);
        in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
        in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
        *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
        lVar4 = *(long *)(unaff_x22 + 0x20);
        if (lVar4 == 0) goto LAB_07c78e28;
        iVar1 = *(int *)(lVar4 + 0x18);
        unaff_w23 = unaff_w23 + 1;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = unaff_w23 / iVar1;
        }
        FUN_05a2b850(&stack0x00000090,lVar4,unaff_w23 - iVar2 * iVar1,*unaff_x29);
        in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
        fStack00000000000000f8 = fStack0000000000000098;
        uStack00000000000000fc = uStack000000000000009c;
        in_stack_00000108 = uStack00000000000000a8;
        uStack0000000000000100 = uStack00000000000000a0;
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
            uStack0000000000000178 = in_stack_00000128;
            uStack0000000000000170 = in_stack_00000120;
            *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
            *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
            FUN_07c1de88(&stack0x00000090);
            unaff_d8 = (ulong)(uint)fStack0000000000000090;
            param_1 = (undefined8 *)&stack0x00000090;
            in_stack_00000068._4_4_ = uStack00000000000000a0;
            uStack0000000000000070 = uStack000000000000009c;
            param_2 = uStack00000000000000a4;
            unaff_s10 = fStack0000000000000098;
            unaff_s9 = fStack0000000000000094;
            uStack0000000000000064 = uStack00000000000000a8;
            goto code_r0x07c78b70;
          }
        }
        else if ((in_stack_000000b8 & 0xff) == 0) goto LAB_07c7893c;
        uStack0000000000000178 = in_stack_00000128;
        uStack0000000000000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_07c1de88(&stack0x00000090);
        fVar13 = fStack0000000000000098;
        fVar10 = fStack0000000000000094;
        fVar11 = fStack0000000000000090;
        in_stack_000000c0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
        uStack00000000000000d4 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
        in_stack_000000c8 = fStack0000000000000098;
        uStack00000000000000d0 = uStack00000000000000a0;
        fVar15 = unaff_x21[3];
        fVar7 = unaff_x21[4];
        fVar6 = unaff_x21[5];
        if (*(char *)(unaff_x28 + 0xf42) == '\0') {
          FUN_04447ba8();
          *(undefined1 *)(unaff_x28 + 0xf42) = 1;
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        fVar16 = SQRT(fVar6 * fVar6 + fVar15 * fVar15 + fVar7 * fVar7);
        if (fVar16 <= DAT_01c7607c) {
          if (DAT_0a51bf43 == '\0') {
            FUN_04447ba8(PTR_DAT_09f1e740);
            DAT_0a51bf43 = '\x01';
          }
          pfVar5 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
          fVar15 = *pfVar5;
          fVar7 = pfVar5[1];
          fVar16 = pfVar5[2];
        }
        else {
          fVar15 = -fVar15 / fVar16;
          fVar7 = -fVar7 / fVar16;
          fVar16 = -fVar6 / fVar16;
        }
        fVar6 = *unaff_x21;
        fVar21 = unaff_x21[1];
        fVar17 = unaff_x21[2];
        fVar18 = unaff_x21[3];
        fVar20 = unaff_x21[4];
        fVar19 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x24f) == '\0') {
          FUN_04447ba8();
          *(undefined1 *)(unaff_x20 + 0x24f) = 1;
        }
        fVar19 = fVar16 * fVar19 + fVar15 * fVar18 + fVar7 * fVar20;
        fVar18 = ABS(fVar19);
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar18 = fVar18 * *(float *)(unaff_x26 + 0x2f8);
        fVar20 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar18 <= fVar20) {
          fVar18 = fVar20;
        }
      } while (ABS(0.0 - fVar19) < fVar18);
      fVar6 = fVar16 * fVar17 + fVar15 * fVar6 + fVar7 * fVar21;
      uVar14 = (ulong)(uint)fVar6;
      fVar6 = (fVar13 * fVar16 + fVar11 * fVar15 + fVar10 * fVar7) - fVar6;
      uVar3 = (ulong)(uint)fVar6;
    } while (fVar6 / fVar19 <= 0.0);
    uVar8 = FUN_094cbc54();
    FUN_07c1d744(&stack0x00000150,&stack0x000000c0,0);
  } while( true );
}


