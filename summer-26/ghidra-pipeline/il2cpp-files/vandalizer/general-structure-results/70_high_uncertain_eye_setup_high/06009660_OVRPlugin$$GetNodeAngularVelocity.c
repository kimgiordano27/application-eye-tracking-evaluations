/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 06009660
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetNodeAngularVelocity(float param_1,undefined1 param_2 [16],float param_3)

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
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  float fVar13;
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
  
code_r0x06009660:
  param_1 = SQRT(param_1);
  if (param_1 <= param_3) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar20 = *pfVar8;
    fVar21 = pfVar8[1];
    param_1 = pfVar8[2];
  }
  else {
    fVar20 = -unaff_s12 / param_1;
    fVar21 = -unaff_s11 / param_1;
    param_1 = -unaff_s8 / param_1;
  }
  fVar13 = *unaff_x21;
  fVar26 = unaff_x21[1];
  fVar15 = unaff_x21[2];
  fVar17 = unaff_x21[3];
  fVar24 = unaff_x21[4];
  fVar19 = unaff_x21[5];
  if (*(char *)(unaff_x20 + 0xba2) == '\0') {
    FUN_031f20f4();
    *(undefined1 *)(unaff_x20 + 0xba2) = 1;
  }
  fVar19 = param_1 * fVar19 + fVar20 * fVar17 + fVar21 * fVar24;
  fVar17 = ABS(fVar19);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar17 = fVar17 * *(float *)(unaff_x26 + 0xb34);
  fVar24 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar17 <= fVar24) {
    fVar17 = fVar24;
  }
  if (ABS(0.0 - fVar19) < fVar17) goto LAB_06009a9c;
  fVar13 = param_1 * fVar15 + fVar20 * fVar13 + fVar21 * fVar26;
  uVar12 = (ulong)(uint)fVar13;
  fVar13 = (fStack000000000000008c * param_1 +
           in_stack_00000080._4_4_ * fVar20 + fStack0000000000000088 * fVar21) - fVar13;
  uVar6 = (ulong)(uint)fVar13;
  if (fVar13 / fVar19 <= 0.0) goto LAB_06009a9c;
  uVar9 = FUN_06df42dc();
  FUN_05faebbc(&stack0x00000150,&stack0x000000c0,0);
  do {
    fVar21 = fStack0000000000000158;
    fVar20 = fStack0000000000000154;
    uVar3 = uStack0000000000000150;
    if (*(int *)(*(long *)PTR_DAT_075f4af0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06008004(uVar9,uVar6,uVar12,uVar3,fVar20,fVar21,&stack0x000000e0,0);
    uVar6 = FUN_06002380(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x000000e0);
    if ((uVar6 & 1) != 0) {
      uStack0000000000000078 = uStack00000000000000e4;
      uStack000000000000007c = uStack00000000000000e0;
      in_stack_00000070._4_4_ = in_stack_000000e8;
      FUN_05faebbc(in_stack_00000038,&stack0x00000150,0);
      in_stack_00000030._4_4_ = 1;
    }
LAB_06009a9c:
    do {
      do {
        do {
          lVar7 = *(long *)(unaff_x22 + 0x20);
          if (lVar7 == 0) goto LAB_06009aa4;
          if (*(int *)(lVar7 + 0x18) <= unaff_w23) {
            return in_stack_00000030._4_4_ & 1;
          }
          FUN_046e0764(&stack0x00000090,lVar7,unaff_w23,*unaff_x29);
          in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
          in_stack_00000120 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
          in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
          in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
          *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
          *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
          lVar7 = *(long *)(unaff_x22 + 0x20);
          if (lVar7 == 0) goto LAB_06009aa4;
          iVar1 = *(int *)(lVar7 + 0x18);
          unaff_w23 = unaff_w23 + 1;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = unaff_w23 / iVar1;
          }
          FUN_046e0764(&stack0x00000090,lVar7,unaff_w23 - iVar2 * iVar1,*unaff_x29);
          in_stack_000000f0 = CONCAT44(fStack0000000000000094,fStack0000000000000090);
          in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
          in_stack_000000f8 = fStack0000000000000098;
          uStack00000000000000fc = uStack000000000000009c;
          in_stack_00000108 = uStack00000000000000a8;
          in_stack_00000100 = uStack00000000000000a0;
          uStack0000000000000104 = uStack00000000000000a4;
          if (in_stack_00000148 != '\0') {
            if ((in_stack_000000b8 & 0xff) == 0) break;
LAB_060095cc:
            in_stack_00000178 = in_stack_00000128;
            in_stack_00000170 = in_stack_00000120;
            *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
            *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
            FUN_05faf300(&stack0x00000090);
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
            if (*(char *)(unaff_x28 + 0xa81) == '\0') {
              FUN_031f20f4();
              *(undefined1 *)(unaff_x28 + 0xa81) = 1;
            }
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            param_1 = unaff_s8 * unaff_s8 + unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11;
            param_3 = DAT_014ba9b8;
            goto code_r0x06009660;
          }
        } while ((in_stack_000000b8 & 0xff) != 0);
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_06009aa4:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_060095cc;
        in_stack_00000178 = in_stack_00000128;
        in_stack_00000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_05faf300(&stack0x00000090);
        uVar5 = uStack00000000000000a8;
        uVar4 = uStack00000000000000a0;
        uVar3 = uStack000000000000009c;
        fVar13 = fStack0000000000000098;
        fVar21 = fStack0000000000000094;
        fVar20 = fStack0000000000000090;
        in_stack_00000178 = CONCAT44(uStack00000000000000fc,in_stack_000000f8);
        in_stack_00000170 = in_stack_000000f0;
        *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
        *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(in_stack_00000100,uStack00000000000000fc);
        uVar11 = uStack00000000000000a8;
        FUN_05faf300(&stack0x00000090);
        uVar10 = uStack00000000000000a4;
        fVar24 = (float)FUN_06008d5c(&stack0x00000120);
        fVar15 = fVar24;
        fVar17 = fVar21;
        fVar19 = fVar13;
        fVar26 = (float)FUN_06009ae0(fVar20);
        fVar22 = *unaff_x21;
        fVar14 = unaff_x21[1];
        fVar18 = unaff_x21[2];
        fVar25 = unaff_x21[3];
        fVar23 = unaff_x21[4];
        fVar16 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0xba2) == '\0') {
          FUN_031f20f4();
          *(undefined1 *)(unaff_x20 + 0xba2) = 1;
        }
        fVar23 = fVar19 * fVar16 + fVar26 * fVar25 + fVar17 * fVar23;
        fVar16 = ABS(fVar23);
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = fVar16 * *(float *)(unaff_x26 + 0xb34);
        fVar25 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar16 <= fVar25) {
          fVar16 = fVar25;
        }
      } while (ABS(0.0 - fVar23) < fVar16);
      uVar12 = (ulong)(uint)(fVar19 * fVar18);
      fVar15 = -(fVar19 * fVar18 + fVar22 * fVar26 + fVar17 * fVar14) - fVar15;
      uVar6 = (ulong)(uint)fVar15;
    } while (fVar15 / fVar23 <= 0.0);
    uVar9 = FUN_06df42dc();
    FUN_06008d80(uVar9);
    fStack0000000000000154 = fVar21;
    uStack0000000000000150 = FUN_06009e48(fVar20,fVar21,fVar13,fVar24,uVar10,uVar11);
    fStack0000000000000158 = fVar13;
    uStack000000000000015c = FUN_06e45c98(uVar3,0);
    in_stack_00000168 = uVar5;
    in_stack_00000160 = uVar4;
  } while( true );
}


