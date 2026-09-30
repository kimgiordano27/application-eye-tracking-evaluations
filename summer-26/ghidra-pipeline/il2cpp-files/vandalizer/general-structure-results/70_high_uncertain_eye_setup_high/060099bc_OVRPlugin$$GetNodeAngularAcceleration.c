/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularAcceleration
ENTRY_POINT: 060099bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetNodeAngularAcceleration
               (float param_1,ulong param_2,ulong param_3,undefined1 param_4 [16],
               undefined1 param_5 [16],ulong param_6,float param_7)

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
  ulong unaff_d8;
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
  ulong unaff_d14;
  float fVar24;
  ulong unaff_d15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack0000000000000030;
  uint uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  uint uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000088;
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
  uint uStack00000000000000b8;
  float fStack00000000000000bc;
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
  
code_r0x060099bc:
  fStack0000000000000000 = in_stack_00000088._4_4_;
  fStack0000000000000004 = param_1;
  fStack0000000000000008 = param_7;
  uStack0000000000000150 = FUN_06009e48(unaff_d9,param_2,param_3,unaff_d14,unaff_d8,param_6);
  uStack0000000000000154 = (undefined4)param_2;
  uStack0000000000000158 = (undefined4)param_3;
  fStack0000000000000000 = fStack0000000000000030;
  uVar8 = uStack000000000000006c;
  uVar13 = uStack0000000000000068;
  uVar14 = in_stack_00000060._4_4_;
  uStack000000000000015c = FUN_06e45c98(uStack0000000000000070,0);
  in_stack_00000168 = uVar14;
  uStack0000000000000164 = uVar13;
  uStack0000000000000160 = uVar8;
  do {
    uVar7 = uStack0000000000000158;
    uVar6 = uStack0000000000000154;
    uVar8 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_075f4af0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06008004(unaff_d10,unaff_d15,unaff_d11,uVar8,uVar6,uVar7,&stack0x000000e0,0);
    uVar9 = FUN_06002380(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                         &stack0x000000e0);
    if ((uVar9 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      uStack0000000000000074 = in_stack_000000e8;
      FUN_05faebbc(in_stack_00000038,&stack0x00000150,0);
      uStack0000000000000034 = 1;
    }
LAB_06009a9c:
    do {
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if (lVar10 == 0) goto LAB_06009aa4;
      if (*(int *)(lVar10 + 0x18) <= unaff_w23) {
        return uStack0000000000000034 & 1;
      }
      FUN_046e0764(&stack0x00000090,lVar10,unaff_w23,*unaff_x29);
      in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      *(ulong *)(unaff_x27 + 0x24) = CONCAT44(uStack00000000000000b8,uStack00000000000000b4);
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      lVar10 = *(long *)(unaff_x22 + 0x20);
      if (lVar10 == 0) goto LAB_06009aa4;
      iVar1 = *(int *)(lVar10 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w23 / iVar1;
      }
      FUN_046e0764(&stack0x00000090,lVar10,unaff_w23 - iVar2 * iVar1,*unaff_x29);
      in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
      in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      in_stack_000000f8 = fStack0000000000000098;
      uStack00000000000000fc = uStack000000000000009c;
      in_stack_00000108 = uStack00000000000000a8;
      in_stack_00000100 = uStack00000000000000a0;
      uStack0000000000000104 = uStack00000000000000a4;
      if (in_stack_00000148 == '\0') {
        if ((uStack00000000000000b8 & 0xff) != 0) goto LAB_06009a9c;
LAB_060095b8:
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_06009aa4:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) != 1) {
          in_stack_00000178 = in_stack_00000128;
          in_stack_00000170 = in_stack_00000120;
          *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
          *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
          FUN_05faf300(&stack0x00000090);
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
          FUN_05faf300(&stack0x00000090);
          param_7 = fStack0000000000000098;
          param_1 = fStack0000000000000094;
          in_stack_00000088._4_4_ = fStack0000000000000090;
          uVar13 = uStack00000000000000a4;
          fVar12 = (float)FUN_06008d5c(&stack0x00000120);
          fStack0000000000000004 = param_1;
          fStack0000000000000008 = param_7;
          fStack0000000000000000 = in_stack_00000088._4_4_;
          fVar15 = fVar12;
          fVar19 = fVar4;
          fVar20 = fVar5;
          fVar16 = (float)FUN_06009ae0(fVar3);
          fVar24 = *unaff_x21;
          fVar17 = unaff_x21[1];
          fVar22 = unaff_x21[2];
          fVar23 = unaff_x21[3];
          fVar21 = unaff_x21[4];
          fVar18 = unaff_x21[5];
          if (*(char *)(unaff_x20 + 0xba2) == '\0') {
            FUN_031f20f4();
            *(undefined1 *)(unaff_x20 + 0xba2) = 1;
          }
          fVar21 = fVar20 * fVar18 + fVar16 * fVar23 + fVar19 * fVar21;
          fVar18 = ABS(fVar21);
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar18 = fVar18 * *(float *)(unaff_x26 + 0xb34);
          fVar23 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
          if (fVar18 <= fVar23) {
            fVar18 = fVar23;
          }
          if (fVar18 <= ABS(0.0 - fVar21)) {
            unaff_d11 = (ulong)(uint)(fVar20 * fVar22);
            fVar15 = -(fVar20 * fVar22 + fVar24 * fVar16 + fVar19 * fVar17) - fVar15;
            unaff_d15 = (ulong)(uint)fVar15;
            if (0.0 < fVar15 / fVar21) {
              unaff_d10 = FUN_06df42dc();
              unaff_d8 = (ulong)uVar13;
              unaff_d14 = (ulong)(uint)fVar12;
              param_2 = (ulong)(uint)fVar4;
              unaff_d9 = (ulong)(uint)fVar3;
              param_3 = (ulong)(uint)fVar5;
              fStack0000000000000000 = fVar12;
              fStack0000000000000008 = (float)uVar14;
              FUN_06008d80(unaff_d10);
              param_6 = (ulong)uVar14;
              fStack0000000000000030 = fStack00000000000000bc;
              goto code_r0x060099bc;
            }
          }
          goto LAB_06009a9c;
        }
      }
      else if ((uStack00000000000000b8 & 0xff) == 0) goto LAB_060095b8;
      in_stack_00000178 = in_stack_00000128;
      in_stack_00000170 = in_stack_00000120;
      *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
      *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
      FUN_05faf300(&stack0x00000090);
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
      if (*(char *)(unaff_x28 + 0xa81) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x28 + 0xa81) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar12 = SQRT(fVar15 * fVar15 + fVar20 * fVar20 + fVar19 * fVar19);
      if (fVar12 <= DAT_014ba9b8) {
        if (DAT_07a3ca82 == '\0') {
          FUN_031f20f4(PTR_DAT_0759b378);
          DAT_07a3ca82 = '\x01';
        }
        pfVar11 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
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
      if (*(char *)(unaff_x20 + 0xba2) == '\0') {
        FUN_031f20f4();
        *(undefined1 *)(unaff_x20 + 0xba2) = 1;
      }
      fVar18 = fVar12 * fVar18 + fVar20 * fVar17 + fVar19 * fVar22;
      fVar17 = ABS(fVar18);
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      fVar17 = fVar17 * *(float *)(unaff_x26 + 0xb34);
      fVar22 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar17 <= fVar22) {
        fVar17 = fVar22;
      }
      if (ABS(0.0 - fVar18) < fVar17) goto LAB_06009a9c;
      fVar15 = fVar12 * fVar16 + fVar20 * fVar15 + fVar19 * fVar24;
      unaff_d11 = (ulong)(uint)fVar15;
      fVar15 = (fVar5 * fVar12 + fVar3 * fVar20 + fVar4 * fVar19) - fVar15;
      unaff_d15 = (ulong)(uint)fVar15;
    } while (fVar15 / fVar18 <= 0.0);
    unaff_d10 = FUN_06df42dc();
    FUN_05faebbc(&stack0x00000150,&stack0x000000c0,0);
  } while( true );
}


