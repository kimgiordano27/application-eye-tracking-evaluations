/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 0531abf8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetTrackingTransformRelativePose(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 in_w8;
  float *pfVar10;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar11;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float in_s7;
  float fVar24;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar25;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar26;
  float unaff_s14;
  float unaff_s15;
  float fVar27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  ulong in_stack_00000090;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  char in_stack_000000b8;
  ulong in_stack_000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined8 uStack00000000000000e4;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined8 uStack0000000000000104;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  ulong in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  char in_stack_00000178;
  undefined4 uStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_00000198;
  
code_r0x0531abf8:
  *(undefined1 *)(unaff_x20 + 0x2c0) = in_w8;
LAB_0531abfc:
  fVar12 = unaff_s12 * unaff_s9 + unaff_s11 * unaff_s10 + unaff_s13 * unaff_s14;
  fVar16 = ABS(fVar12);
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 * *(float *)(unaff_x26 + 0x568);
  fVar19 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
  if (fVar16 <= fVar19) {
    fVar16 = fVar19;
  }
  fVar19 = fStack00000000000000c8;
  iVar11 = unaff_w23;
  if (ABS(0.0 - fVar12) < fVar16) goto LAB_0531afac;
  fVar20 = unaff_s12 * in_s7 + unaff_s11 * unaff_s15 + unaff_s13 * unaff_s8;
  fVar16 = (fStack000000000000008c * unaff_s12 +
           fStack0000000000000088 * unaff_s11 + in_stack_00000080._4_4_ * unaff_s13) - fVar20;
  if (fVar16 / fVar12 <= 0.0) goto LAB_0531afac;
  uVar13 = FUN_060ae8a4();
  FUN_052c2604(&stack0x00000180,&stack0x000000f0,0);
  do {
    fVar19 = fStack0000000000000188;
    fVar12 = fStack0000000000000184;
    uVar3 = uStack0000000000000180;
    if (*(int *)(*(long *)System_Xml_ReadState___TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05319588(uVar13,fVar16,fVar20,uVar3,fVar12,fVar19,&stack0x00000110,0);
    uVar8 = FUN_05313f18(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_,
                         &stack0x00000110);
    fVar19 = fStack00000000000000c8;
    iVar11 = unaff_w23;
    if ((uVar8 & 1) != 0) {
      uStack0000000000000078 = uStack0000000000000114;
      uStack000000000000007c = uStack0000000000000110;
      in_stack_00000070._4_4_ = in_stack_00000118;
      FUN_052c2604(in_stack_00000038,&stack0x00000180,0);
      in_stack_00000030._4_4_ = 1;
      fVar19 = fStack00000000000000c8;
    }
LAB_0531afac:
    do {
      do {
        do {
          fStack00000000000000c8 = fVar19;
          lVar9 = *(long *)(unaff_x22 + 0x20);
          unaff_w23 = iVar11 + 1;
          fVar19 = fStack00000000000000c8;
          if (lVar9 == 0) goto LAB_0531afb8;
          if (*(int *)(lVar9 + 0x18) <= unaff_w23) {
            return in_stack_00000030._4_4_ & 1;
          }
          FUN_039ef234(&stack0x000000c0,lVar9,unaff_w23,*unaff_x29);
          in_stack_00000158 = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
          in_stack_00000168 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
          in_stack_00000160 = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
          lVar9 = *(long *)(unaff_x22 + 0x20);
          in_stack_00000150 = in_stack_000000c0;
          *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000e4;
          *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000e0,uStack00000000000000dc);
          fVar19 = fStack00000000000000c8;
          if (lVar9 == 0) goto LAB_0531afb8;
          iVar1 = *(int *)(lVar9 + 0x18);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = (iVar11 + 2) / iVar1;
          }
          FUN_039ef234(&stack0x00000090,lVar9,(iVar11 + 2) - iVar2 * iVar1,*unaff_x29);
          fVar19 = fStack00000000000000c8;
          in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
          in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
          in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
          in_stack_00000140 = in_stack_000000b0;
          in_stack_00000120 = in_stack_00000090;
          fStack00000000000000c8 = (float)in_stack_00000158;
          iVar11 = unaff_w23;
          if (in_stack_00000178 != '\0') {
            if (in_stack_000000b8 == '\0') break;
LAB_0531aadc:
            in_stack_000000c0 = in_stack_00000150;
            uStack00000000000000d4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
            uStack00000000000000d8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
            uStack00000000000000cc = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
            uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
            FUN_052c2dcc(&stack0x00000090);
            fVar16 = unaff_x21[3];
            fVar19 = unaff_x21[4];
            uStack0000000000000104 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
            fVar12 = unaff_x21[5];
            fStack00000000000000f8 = fStack0000000000000098;
            _fStack00000000000000f0 = in_stack_00000090;
            uVar4 = _fStack00000000000000f0;
            fStack00000000000000f0 = (float)in_stack_00000090;
            fStack00000000000000f4 = (float)(in_stack_00000090 >> 0x20);
            uStack00000000000000fc = uStack000000000000009c;
            uStack0000000000000100 = uStack00000000000000a0;
            in_stack_00000080._4_4_ = fStack00000000000000f4;
            fStack0000000000000088 = fStack00000000000000f0;
            fStack000000000000008c = fStack0000000000000098;
            _fStack00000000000000f0 = uVar4;
            if (*(char *)(unaff_x28 + 0x2bf) == '\0') {
              FUN_02f08768();
              *(undefined1 *)(unaff_x28 + 0x2bf) = 1;
            }
            if (*(int *)(*unaff_x25 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            fVar20 = SQRT(fVar12 * fVar12 + fVar16 * fVar16 + fVar19 * fVar19);
            if (fVar20 <= DAT_011b06e4) {
              if (DAT_06bb42c1 == '\0') {
                FUN_02f08768(PTR_DAT_067c8f78);
                DAT_06bb42c1 = '\x01';
              }
              pfVar10 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
              unaff_s11 = *pfVar10;
              unaff_s13 = pfVar10[1];
              unaff_s12 = pfVar10[2];
            }
            else {
              unaff_s11 = -fVar16 / fVar20;
              unaff_s13 = -fVar19 / fVar20;
              unaff_s12 = -fVar12 / fVar20;
            }
            unaff_s15 = *unaff_x21;
            unaff_s8 = unaff_x21[1];
            in_s7 = unaff_x21[2];
            unaff_s10 = unaff_x21[3];
            unaff_s14 = unaff_x21[4];
            unaff_s9 = unaff_x21[5];
            if (*(char *)(unaff_x20 + 0x2c0) != '\0') goto LAB_0531abfc;
            FUN_02f08768();
            in_w8 = 1;
            goto code_r0x0531abf8;
          }
        } while (in_stack_000000b8 != '\0');
        if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_0531afb8:
          fStack00000000000000c8 = fVar19;
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_0531aadc;
        in_stack_00000090 = in_stack_00000150;
        uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
        uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
        uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
        uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
        fStack0000000000000098 = fStack00000000000000c8;
        fStack00000000000000c8 = fVar19;
        FUN_052c2dcc(&stack0x000000c0);
        uVar22 = uStack00000000000000d8;
        uVar7 = uStack00000000000000d4;
        uVar6 = uStack00000000000000d0;
        uVar3 = uStack00000000000000cc;
        fVar5 = fStack00000000000000c8;
        uVar8 = in_stack_000000c0;
        fVar12 = in_stack_000000c0._4_4_;
        fStack0000000000000098 = (float)in_stack_00000128;
        in_stack_00000090 = in_stack_00000120;
        uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x14);
        uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x14) >> 0x20);
        uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0xc);
        uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0xc) >> 0x20);
        FUN_052c2dcc(&stack0x000000c0);
        uVar17 = uStack00000000000000cc;
        uVar21 = uStack00000000000000d0;
        fVar14 = (float)FUN_0531a27c(&stack0x00000150);
        fVar16 = fVar14;
        fVar18 = fVar12;
        fVar20 = fVar5;
        fVar15 = (float)FUN_0531aff4(uVar8 & 0xffffffff);
        fVar23 = *unaff_x21;
        fVar27 = unaff_x21[1];
        fVar24 = unaff_x21[2];
        fVar19 = unaff_x21[3];
        fVar26 = unaff_x21[4];
        fVar25 = unaff_x21[5];
        if (*(char *)(unaff_x20 + 0x2c0) == '\0') {
          FUN_02f08768();
          *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
        }
        fVar26 = fVar20 * fVar25 + fVar15 * fVar19 + fVar18 * fVar26;
        fVar25 = ABS(fVar26);
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar25 = fVar25 * *(float *)(unaff_x26 + 0x568);
        fVar19 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
        if (fVar25 <= fVar19) {
          fVar25 = fVar19;
        }
        fVar19 = fStack00000000000000c8;
      } while (ABS(0.0 - fVar26) < fVar25);
      fVar20 = fVar20 * fVar24;
      fVar16 = -(fVar20 + fVar23 * fVar15 + fVar18 * fVar27) - fVar16;
    } while (fVar16 / fVar26 <= 0.0);
    uVar13 = FUN_060ae8a4();
    FUN_0531a29c(uVar13);
    uStack0000000000000180 = FUN_0531b3e0(uVar8 & 0xffffffff,fVar12,fVar5,fVar14,uVar17,uVar21);
    fStack0000000000000188 = fVar5;
    fStack0000000000000184 = fVar12;
    uStack000000000000018c = FUN_060df37c(uVar3,0);
    uStack0000000000000194 = uVar7;
    uStack0000000000000190 = uVar6;
    in_stack_00000198 = uVar22;
  } while( true );
}


