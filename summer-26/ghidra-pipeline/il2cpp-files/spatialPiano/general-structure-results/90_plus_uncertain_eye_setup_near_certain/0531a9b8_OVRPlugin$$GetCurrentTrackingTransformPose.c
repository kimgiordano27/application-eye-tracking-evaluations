/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 0531a9b8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_9;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 OVRPlugin__GetCurrentTrackingTransformPose(undefined1 param_1 [16])

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  long *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int iVar14;
  long unaff_x27;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uStack0000000000000034;
  undefined8 *in_stack_00000038;
  undefined4 uStack0000000000000074;
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
  undefined4 uStack0000000000000184;
  undefined4 uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 in_stack_00000198;
  
  _uStack0000000000000188 = param_1._8_8_;
  _uStack0000000000000180 = param_1._0_8_;
  *(ulong *)(unaff_x27 + 0x74) = CONCAT44(uStack00000000000000d8,uStack00000000000000d4);
  *(ulong *)(unaff_x27 + 0x6c) = CONCAT44(uStack00000000000000d0,uStack00000000000000cc);
  FUN_060fdf88(&stack0x00000090,0);
  FUN_060fdf88(&stack0x00000090,0);
  *(ulong *)((long)in_stack_00000038 + 0x14) =
       CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
  *(ulong *)((long)in_stack_00000038 + 0xc) =
       CONCAT44(uStack00000000000000a0,uStack000000000000009c);
  in_stack_00000038[1] = CONCAT44(uStack000000000000009c,fStack0000000000000098);
  *in_stack_00000038 = in_stack_00000090;
  lVar11 = *unaff_x20;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar11);
    lVar11 = *unaff_x20;
  }
  puVar5 = System_Linq_Expressions_Interpreter_DecrementInstruction_TypeInfo;
  puVar4 = PTR_DAT_067c8fa8;
  puVar3 = PTR_DAT_067c8f80;
  lVar9 = *(long *)(unaff_x22 + 0x20);
  fVar26 = fStack00000000000000c8;
  if (lVar9 != 0) {
    puVar12 = *(undefined4 **)(lVar11 + 0xb8);
    uStack0000000000000034 = 0;
    uStack000000000000007c = *puVar12;
    uStack0000000000000078 = puVar12[1];
    iVar14 = 0;
    uStack0000000000000074 = puVar12[2];
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar14) {
        return uStack0000000000000034;
      }
      FUN_039ef234(&stack0x000000c0,lVar9,iVar14,*(undefined8 *)puVar5);
      in_stack_00000158 = CONCAT44(uStack00000000000000cc,fStack00000000000000c8);
      in_stack_00000168 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
      in_stack_00000160 = CONCAT44(uStack00000000000000d4,uStack00000000000000d0);
      lVar11 = *(long *)(unaff_x22 + 0x20);
      in_stack_00000150 = in_stack_000000c0;
      *(undefined8 *)(unaff_x27 + 0x54) = uStack00000000000000e4;
      *(ulong *)(unaff_x27 + 0x4c) = CONCAT44(uStack00000000000000e0,uStack00000000000000dc);
      fVar26 = fStack00000000000000c8;
      if (lVar11 == 0) break;
      iVar1 = *(int *)(lVar11 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (iVar14 + 1) / iVar1;
      }
      FUN_039ef234(&stack0x00000090,lVar11,(iVar14 + 1) - iVar2 * iVar1,*(undefined8 *)puVar5);
      fVar26 = fStack00000000000000c8;
      in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      in_stack_00000140 = in_stack_000000b0;
      in_stack_00000120 = in_stack_00000090;
      fStack00000000000000c8 = (float)in_stack_00000158;
      if (in_stack_00000178 == '\0') {
        if (in_stack_000000b8 == '\0') goto LAB_0531aac8;
        goto LAB_0531afac;
      }
      if (in_stack_000000b8 == '\0') {
LAB_0531aac8:
        if (*(long *)(unaff_x22 + 0x20) == 0) break;
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_0531aadc;
        in_stack_00000090 = in_stack_00000150;
        uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
        uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
        uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
        uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
        fStack0000000000000098 = fStack00000000000000c8;
        fStack00000000000000c8 = fVar26;
        FUN_052c2dcc(&stack0x000000c0);
        uVar25 = uStack00000000000000d8;
        uVar8 = uStack00000000000000d4;
        uVar7 = uStack00000000000000d0;
        uVar18 = uStack00000000000000cc;
        fVar24 = fStack00000000000000c8;
        uVar10 = in_stack_000000c0;
        fVar20 = in_stack_000000c0._4_4_;
        fStack0000000000000098 = (float)in_stack_00000128;
        in_stack_00000090 = in_stack_00000120;
        uStack00000000000000a4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x14);
        uStack00000000000000a8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x14) >> 0x20);
        uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x27 + 0xc);
        uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0xc) >> 0x20);
        FUN_052c2dcc(&stack0x000000c0);
        uVar17 = uStack00000000000000cc;
        uVar22 = uStack00000000000000d0;
        fVar15 = (float)FUN_0531a27c(&stack0x00000150);
        fVar19 = fVar15;
        fVar31 = fVar20;
        fVar30 = fVar24;
        fVar29 = (float)FUN_0531aff4(uVar10 & 0xffffffff);
        fVar27 = *unaff_x21;
        fVar21 = unaff_x21[1];
        fVar28 = unaff_x21[2];
        fVar26 = unaff_x21[3];
        fVar33 = unaff_x21[4];
        fVar32 = unaff_x21[5];
        if (DAT_06bb42c0 == '\0') {
          FUN_02f08768(puVar4);
          DAT_06bb42c0 = '\x01';
        }
        fVar32 = fVar30 * fVar32 + fVar29 * fVar26 + fVar31 * fVar33;
        fVar26 = ABS(fVar32);
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        fVar23 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar33 = fVar26 * DAT_011b0568;
        if (fVar26 * DAT_011b0568 <= fVar23) {
          fVar33 = fVar23;
        }
        fVar26 = fStack00000000000000c8;
        if (fVar33 <= ABS(0.0 - fVar32)) {
          fVar30 = fVar30 * fVar28;
          fVar19 = -(fVar30 + fVar27 * fVar29 + fVar31 * fVar21) - fVar19;
          if (fVar19 / fVar32 <= 0.0) goto LAB_0531afac;
          uVar16 = FUN_060ae8a4();
          FUN_0531a29c(uVar16);
          uVar17 = FUN_0531b3e0(uVar10 & 0xffffffff,fVar20,fVar24,fVar15,uVar17,uVar22);
          _uStack0000000000000180 = CONCAT44(fVar20,uVar17);
          _uStack0000000000000188 = CONCAT44(uStack000000000000018c,fVar24);
          uVar18 = FUN_060df37c(uVar18,0);
          uStack0000000000000194 = uVar8;
          uStack0000000000000190 = uVar7;
          _uStack0000000000000188 = CONCAT44(uVar18,uStack0000000000000188);
          in_stack_00000198 = uVar25;
OVRPlugin__GetControllerState4:
          uVar18 = uStack0000000000000180;
          uVar7 = uStack0000000000000184;
          uVar8 = uStack0000000000000188;
          if (*(int *)(*(long *)System_Xml_ReadState___TypeInfo + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05319588(uVar16,fVar19,fVar30,uVar18,uVar7,uVar8,&stack0x00000110,0);
          uVar10 = FUN_05313f18(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074
                                ,&stack0x00000110);
          fVar26 = fStack00000000000000c8;
          if ((uVar10 & 1) != 0) {
            uStack0000000000000078 = uStack0000000000000114;
            uStack000000000000007c = uStack0000000000000110;
            uStack0000000000000074 = in_stack_00000118;
            FUN_052c2604(in_stack_00000038,&stack0x00000180,0);
            uStack0000000000000034 = 1;
            fVar26 = fStack00000000000000c8;
          }
        }
      }
      else {
LAB_0531aadc:
        in_stack_000000c0 = in_stack_00000150;
        uStack00000000000000d4 = (undefined4)*(undefined8 *)(unaff_x27 + 0x44);
        uStack00000000000000d8 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x44) >> 0x20);
        uStack00000000000000cc = (undefined4)*(undefined8 *)(unaff_x27 + 0x3c);
        uStack00000000000000d0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x3c) >> 0x20);
        FUN_052c2dcc(&stack0x00000090);
        fVar19 = fStack0000000000000098;
        fVar26 = unaff_x21[3];
        fVar31 = unaff_x21[4];
        uStack0000000000000104 = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
        fVar30 = unaff_x21[5];
        fStack00000000000000f8 = fStack0000000000000098;
        _fStack00000000000000f0 = in_stack_00000090;
        uVar6 = _fStack00000000000000f0;
        fStack00000000000000f0 = (float)in_stack_00000090;
        fVar20 = fStack00000000000000f0;
        fStack00000000000000f4 = (float)(in_stack_00000090 >> 0x20);
        fVar24 = fStack00000000000000f4;
        uStack00000000000000fc = uStack000000000000009c;
        uStack0000000000000100 = uStack00000000000000a0;
        _fStack00000000000000f0 = uVar6;
        if (DAT_06bb42bf == '\0') {
          FUN_02f08768(puVar3);
          DAT_06bb42bf = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        fVar15 = SQRT(fVar30 * fVar30 + fVar26 * fVar26 + fVar31 * fVar31);
        if (fVar15 <= DAT_011b06e4) {
          if (DAT_06bb42c1 == '\0') {
            FUN_02f08768(PTR_DAT_067c8f78);
            DAT_06bb42c1 = '\x01';
          }
          pfVar13 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
          fVar29 = *pfVar13;
          fVar31 = pfVar13[1];
          fVar15 = pfVar13[2];
        }
        else {
          fVar29 = -fVar26 / fVar15;
          fVar31 = -fVar31 / fVar15;
          fVar15 = -fVar30 / fVar15;
        }
        fVar33 = *unaff_x21;
        fVar27 = unaff_x21[1];
        fVar30 = unaff_x21[2];
        fVar28 = unaff_x21[3];
        fVar32 = unaff_x21[4];
        fVar26 = unaff_x21[5];
        if (DAT_06bb42c0 == '\0') {
          FUN_02f08768(puVar4);
          DAT_06bb42c0 = '\x01';
        }
        fVar28 = fVar15 * fVar26 + fVar29 * fVar28 + fVar31 * fVar32;
        fVar26 = ABS(fVar28);
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        fVar21 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar32 = fVar26 * DAT_011b0568;
        if (fVar26 * DAT_011b0568 <= fVar21) {
          fVar32 = fVar21;
        }
        fVar26 = fStack00000000000000c8;
        if (fVar32 <= ABS(0.0 - fVar28)) {
          fVar30 = fVar15 * fVar30 + fVar29 * fVar33 + fVar31 * fVar27;
          fVar19 = (fVar19 * fVar15 + fVar20 * fVar29 + fVar24 * fVar31) - fVar30;
          if (0.0 < fVar19 / fVar28) {
            uVar16 = FUN_060ae8a4();
            FUN_052c2604(&stack0x00000180,&stack0x000000f0,0);
            goto OVRPlugin__GetControllerState4;
          }
        }
      }
LAB_0531afac:
      fStack00000000000000c8 = fVar26;
      lVar9 = *(long *)(unaff_x22 + 0x20);
      iVar14 = iVar14 + 1;
      fVar26 = fStack00000000000000c8;
    } while (lVar9 != 0);
  }
  fStack00000000000000c8 = fVar26;
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


