/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 0531aad8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_9;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint OVRPlugin__GetTrackingTransformRawPose(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 in_ZR;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  long unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar12;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
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
  
  do {
    iVar12 = unaff_w23;
    if (!(bool)in_ZR) {
      fStack0000000000000098 = (float)in_stack_00000158;
      in_stack_00000090 = in_stack_00000150;
      uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
      uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
      uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
      uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
      FUN_052c2dcc(&stack0x000000c0);
      uVar18 = uStack00000000000000d8;
      uVar8 = uStack00000000000000d4;
      uVar7 = uStack00000000000000d0;
      uVar3 = uStack00000000000000cc;
      fVar6 = fStack00000000000000c8;
      uVar9 = in_stack_000000c0;
      fVar5 = in_stack_000000c0._4_4_;
      fStack0000000000000098 = (float)in_stack_00000128;
      in_stack_00000090 = in_stack_00000120;
      uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x14);
      uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x14) >> 0x20);
      uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0xc);
      uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0xc) >> 0x20);
      FUN_052c2dcc(&stack0x000000c0);
      uVar16 = uStack00000000000000cc;
      uVar17 = uStack00000000000000d0;
      fVar24 = (float)FUN_0531a27c(&stack0x00000150);
      fVar15 = fVar24;
      fVar23 = fVar5;
      fVar19 = fVar6;
      fVar13 = (float)FUN_0531aff4(uVar9 & 0xffffffff);
      fVar22 = *unaff_x21;
      fVar27 = unaff_x21[1];
      fVar20 = unaff_x21[2];
      fVar21 = unaff_x21[3];
      fVar26 = unaff_x21[4];
      fVar25 = unaff_x21[5];
      if (*(char *)(unaff_x20 + 0x2c0) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
      }
      fVar25 = fVar19 * fVar25 + fVar13 * fVar21 + fVar23 * fVar26;
      fVar21 = ABS(fVar25);
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar21 = fVar21 * *(float *)(unaff_x26 + 0x568);
      fVar26 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar21 <= fVar26) {
        fVar21 = fVar26;
      }
      if (ABS(0.0 - fVar25) < fVar21) goto LAB_0531afac;
      fVar19 = fVar19 * fVar20;
      fVar15 = -(fVar19 + fVar22 * fVar13 + fVar23 * fVar27) - fVar15;
      if (fVar15 / fVar25 <= 0.0) goto LAB_0531afac;
      uVar14 = FUN_060ae8a4();
      FUN_0531a29c(uVar14);
      uStack0000000000000180 = FUN_0531b3e0(uVar9 & 0xffffffff,fVar5,fVar6,fVar24,uVar16,uVar17);
      fStack0000000000000188 = fVar6;
      fStack0000000000000184 = fVar5;
      uStack000000000000018c = FUN_060df37c(uVar3,0);
      uStack0000000000000194 = uVar8;
      uStack0000000000000190 = uVar7;
      in_stack_00000198 = uVar18;
      goto OVRPlugin__GetControllerState4;
    }
    do {
      fStack00000000000000c8 = (float)in_stack_00000158;
      in_stack_000000c0 = in_stack_00000150;
      uStack00000000000000d4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
      uStack00000000000000d8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
      uStack00000000000000cc = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
      uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
      FUN_052c2dcc(&stack0x00000090);
      fVar15 = fStack0000000000000098;
      fVar19 = unaff_x21[3];
      fVar24 = unaff_x21[4];
      uStack0000000000000104 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
      fVar23 = unaff_x21[5];
      fStack00000000000000f8 = fStack0000000000000098;
      _fStack00000000000000f0 = in_stack_00000090;
      uVar4 = _fStack00000000000000f0;
      fStack00000000000000f0 = (float)in_stack_00000090;
      fVar5 = fStack00000000000000f0;
      fStack00000000000000f4 = (float)(in_stack_00000090 >> 0x20);
      fVar6 = fStack00000000000000f4;
      uStack00000000000000fc = uStack000000000000009c;
      uStack0000000000000100 = uStack00000000000000a0;
      _fStack00000000000000f0 = uVar4;
      if (*(char *)(unaff_x28 + 0x2bf) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x28 + 0x2bf) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      fVar13 = SQRT(fVar23 * fVar23 + fVar19 * fVar19 + fVar24 * fVar24);
      if (fVar13 <= DAT_011b06e4) {
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c1 = '\x01';
        }
        pfVar11 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
        fVar22 = *pfVar11;
        fVar24 = pfVar11[1];
        fVar13 = pfVar11[2];
      }
      else {
        fVar22 = -fVar19 / fVar13;
        fVar24 = -fVar24 / fVar13;
        fVar13 = -fVar23 / fVar13;
      }
      fVar26 = *unaff_x21;
      fVar23 = unaff_x21[1];
      fVar19 = unaff_x21[2];
      fVar21 = unaff_x21[3];
      fVar25 = unaff_x21[4];
      fVar20 = unaff_x21[5];
      if (*(char *)(unaff_x20 + 0x2c0) == '\0') {
        FUN_02f08768();
        *(undefined1 *)(unaff_x20 + 0x2c0) = 1;
      }
      fVar21 = fVar13 * fVar20 + fVar22 * fVar21 + fVar24 * fVar25;
      fVar20 = ABS(fVar21);
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar20 = fVar20 * *(float *)(unaff_x26 + 0x568);
      fVar25 = **(float **)(*unaff_x24 + 0xb8) * 8.0;
      if (fVar20 <= fVar25) {
        fVar20 = fVar25;
      }
      unaff_w23 = iVar12;
      if (fVar20 <= ABS(0.0 - fVar21)) {
        fVar19 = fVar13 * fVar19 + fVar22 * fVar26 + fVar24 * fVar23;
        fVar15 = (fVar15 * fVar13 + fVar5 * fVar22 + fVar6 * fVar24) - fVar19;
        if (0.0 < fVar15 / fVar21) {
          uVar14 = FUN_060ae8a4();
          FUN_052c2604(&stack0x00000180,&stack0x000000f0,0);
OVRPlugin__GetControllerState4:
          fVar6 = fStack0000000000000188;
          fVar5 = fStack0000000000000184;
          uVar3 = uStack0000000000000180;
          if (*(int *)(*(long *)System_Xml_ReadState___TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05319588(uVar14,fVar15,fVar19,uVar3,fVar5,fVar6,&stack0x00000110,0);
          uVar9 = FUN_05313f18(uStack000000000000007c,uStack0000000000000078,in_stack_00000070._4_4_
                               ,&stack0x00000110);
          if ((uVar9 & 1) != 0) {
            uStack0000000000000078 = uStack0000000000000114;
            uStack000000000000007c = uStack0000000000000110;
            in_stack_00000070._4_4_ = in_stack_00000118;
            FUN_052c2604(in_stack_00000038,&stack0x00000180,0);
            in_stack_00000030._4_4_ = 1;
          }
        }
      }
LAB_0531afac:
      while( true ) {
        lVar10 = *(long *)(unaff_x22 + 0x20);
        iVar12 = unaff_w23 + 1;
        if (lVar10 == 0) goto LAB_0531afb8;
        if (*(int *)(lVar10 + 0x18) <= iVar12) {
          return in_stack_00000030._4_4_ & 1;
        }
        FUN_039ef234(&stack0x000000c0,lVar10,iVar12,*unaff_x29);
        in_stack_00000158 = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
        in_stack_00000168 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_00000160 = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
        lVar10 = *(long *)(unaff_x22 + 0x20);
        in_stack_00000150 = in_stack_000000c0;
        *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000e4;
        *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000e0,uStack00000000000000dc);
        if (lVar10 == 0) goto LAB_0531afb8;
        iVar1 = *(int *)(lVar10 + 0x18);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = (unaff_w23 + 2) / iVar1;
        }
        FUN_039ef234(&stack0x00000090,lVar10,(unaff_w23 + 2) - iVar2 * iVar1,*unaff_x29);
        in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
        in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
        in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
        in_stack_00000140 = in_stack_000000b0;
        in_stack_00000120 = in_stack_00000090;
        unaff_w23 = iVar12;
        if (in_stack_00000178 != '\0') break;
        if (in_stack_000000b8 == '\0') goto LAB_0531aac8;
      }
    } while (in_stack_000000b8 != '\0');
LAB_0531aac8:
    if (*(long *)(unaff_x22 + 0x20) == 0) {
LAB_0531afb8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_ZR = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1;
  } while( true );
}


