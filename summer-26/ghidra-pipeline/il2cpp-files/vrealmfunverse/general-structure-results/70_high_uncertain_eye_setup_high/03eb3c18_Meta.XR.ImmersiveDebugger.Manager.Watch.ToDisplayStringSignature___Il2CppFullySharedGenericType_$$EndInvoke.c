/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$EndInvoke
ENTRY_POINT: 03eb3c18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__EndInvoke
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_x9;
  float *pfVar7;
  ushort in_w10;
  long in_x11;
  long lVar8;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x29;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float in_s3;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  *(long *)(unaff_x29 + -0x140) = in_x11;
  lVar4 = param_1;
  if ((in_w10 & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar8 = in_x11 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x148) = lVar8;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x118) = lVar8;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x100) = lVar8;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar8;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  iVar1 = *(int *)(lVar5 + 0xfc);
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  lVar4 = *(long *)(in_x9 + 8);
  *(ulong *)(unaff_x29 + -0xf0) = lVar8 - ((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar4,*(undefined8 *)(in_x9 + 0x10));
  auVar27 = FUN_056c41bc();
  *(long *)(unaff_x29 + -0x108) = auVar27._0_8_;
  lVar4 = *(long *)(unaff_x23 + 0x20);
  *(long *)(unaff_x29 + -0x110) = auVar27._8_8_;
  lVar5 = *(long *)(lVar4 + 0xc0);
  lVar4 = *(long *)(lVar5 + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  puVar3 = PTR_DAT_06320af8;
  FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x18));
  FUN_056c45a8(unaff_x29 + -0xb8);
  lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0xb0);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xa8);
  lVar4 = *(long *)(lVar5 + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x20));
  FUN_056c45a8(unaff_x29 + -0xd0);
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -200);
  *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xd0);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0xc0);
  if (iVar1 == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c3c7e == '\0') {
    FUN_02b3c81c(PTR_DAT_06320af8);
    DAT_066c3c7e = '\x01';
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *(long *)puVar3;
  }
  pfVar7 = *(float **)(lVar4 + 0xb8);
  lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  fVar21 = *pfVar7;
  fVar22 = pfVar7[1];
  fVar23 = pfVar7[2];
  fVar14 = pfVar7[3];
  fVar26 = pfVar7[6];
  lVar4 = *(long *)(lVar5 + 8);
  fVar25 = pfVar7[5];
  uVar2 = *(ushort *)(lVar4 + 0x135);
  *(float *)(unaff_x29 + -0xd8) = pfVar7[4];
  *(float *)(unaff_x29 + -0xd4) = fVar14;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_02b76218();
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x28));
  fVar14 = fVar22;
  fVar24 = fVar23;
  fVar9 = fVar21;
  if (*(char *)(unaff_x29 + -0x54) == '\0') {
LAB_03eb4078:
    lVar4 = *(long *)(unaff_x23 + 0x20);
    *(float *)(unaff_x29 + -0x120) = fVar21;
    lVar5 = *(long *)(lVar4 + 0xc0);
    *(float *)(unaff_x29 + -0x128) = fVar9;
    *(float *)(unaff_x29 + -300) = fVar22;
    lVar4 = *(long *)(lVar5 + 8);
    *(float *)(unaff_x29 + -0x130) = fVar23;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x30));
    fVar20 = *(float *)(unaff_x29 + -0xd8);
    fVar19 = *(float *)(unaff_x29 + -0xd4);
    fVar21 = fVar25;
    fVar9 = fVar26;
    if (*(char *)(unaff_x29 + -0xb8) == '\0') {
LAB_03eb4310:
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x38),*(undefined8 *)(unaff_x29 + -0x118));
      auVar27 = FUN_056be164();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(unaff_x29 + -0x100));
      auVar28 = FUN_056be164();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(unaff_x29 + -0xf8));
      auVar29 = FUN_056be2e4();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x50),*(undefined8 *)(unaff_x29 + -0xf0));
      auVar30 = FUN_056be2e4();
      uVar13 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar12 = *(undefined8 *)(unaff_x29 + -0x70);
      *(float *)((long)unaff_x19 + 100) = fVar19;
      *(float *)(unaff_x19 + 0xd) = fVar20;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x108);
      *(float *)((long)unaff_x19 + 0x6c) = fVar21;
      *(float *)(unaff_x19 + 0xe) = fVar9;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uVar13;
      *(undefined8 *)((long)unaff_x19 + 0xc) = uVar12;
      uVar13 = *(undefined8 *)(unaff_x29 + -0x88);
      uVar12 = *(undefined8 *)(unaff_x29 + -0x90);
      *unaff_x19 = uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x110);
      *(undefined8 *)((long)unaff_x19 + 0x2c) = uVar13;
      *(undefined8 *)((long)unaff_x19 + 0x24) = uVar12;
      *(long *)((long)unaff_x19 + 0x74) = auVar27._0_8_;
      *(int *)(unaff_x19 + 1) = (int)uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x60);
      *(long *)((long)unaff_x19 + 0x7c) = auVar27._8_8_;
      *(undefined8 *)((long)unaff_x19 + 0x1c) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x80);
      *(long *)((long)unaff_x19 + 0x84) = auVar28._0_8_;
      *(undefined8 *)((long)unaff_x19 + 0x34) = uVar6;
      uVar11 = *(undefined4 *)(unaff_x29 + -0x120);
      *(long *)((long)unaff_x19 + 0x8c) = auVar28._8_8_;
      *(long *)((long)unaff_x19 + 0x94) = auVar29._0_8_;
      *(undefined4 *)((long)unaff_x19 + 0x3c) = uVar11;
      *(float *)(unaff_x19 + 8) = fVar14;
      uVar11 = *(undefined4 *)(unaff_x29 + -0xd8);
      uVar16 = *(undefined4 *)(unaff_x29 + -0xd4);
      *(long *)((long)unaff_x19 + 0x9c) = auVar29._8_8_;
      *(long *)((long)unaff_x19 + 0xa4) = auVar30._0_8_;
      *(undefined4 *)((long)unaff_x19 + 0x4c) = uVar11;
      *(float *)(unaff_x19 + 10) = fVar25;
      uVar11 = *(undefined4 *)(unaff_x29 + -0x128);
      *(float *)((long)unaff_x19 + 0x44) = fVar24;
      *(undefined4 *)(unaff_x19 + 9) = uVar16;
      uVar16 = *(undefined4 *)(unaff_x29 + -300);
      *(float *)((long)unaff_x19 + 0x54) = fVar26;
      *(undefined4 *)(unaff_x19 + 0xb) = uVar11;
      uVar11 = *(undefined4 *)(unaff_x29 + -0x130);
      lVar4 = *(long *)(unaff_x29 + -0xe8);
      *(long *)((long)unaff_x19 + 0xac) = auVar30._8_8_;
      *(undefined4 *)((long)unaff_x19 + 0x5c) = uVar16;
      *(undefined4 *)(unaff_x19 + 0xc) = uVar11;
      uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
      *(undefined8 *)((long)unaff_x19 + 0xbc) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)((long)unaff_x19 + 0xb4) = uVar6;
      if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -0x50)) {
        return;
      }
      goto LAB_03eb4568;
    }
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(unaff_x29 + -0x138));
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      fVar10 = (float)FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      fVar21 = fVar22;
      fVar9 = fVar23;
      fVar19 = in_s3;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      *(float *)(unaff_x29 + -0x14c) = fVar24;
      *(float *)(unaff_x29 + -0x138) = fVar14;
      FUN_02b3d498(lVar4,uVar6,*(undefined8 *)(unaff_x29 + -0x140));
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
        fVar14 = (float)FUN_05c7b504(0);
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar5 + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
          lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(unaff_x29 + -0x148));
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar15 = fVar10 * fVar9 + fVar22 * fVar19 + in_s3 * fVar21;
          fVar17 = fVar22 * fVar14 + fVar23 * fVar19 + in_s3 * fVar9;
          fVar18 = (in_s3 * fVar19 - fVar10 * fVar14) - fVar22 * fVar21;
          fVar25 = fVar17 - fVar10 * fVar21;
          fVar26 = fVar18 - fVar23 * fVar9;
          *(float *)(unaff_x29 + -0xd8) = fVar15 - fVar23 * fVar14;
          *(float *)(unaff_x29 + -0xd4) =
               (fVar23 * fVar21 + fVar10 * fVar19 + in_s3 * fVar14) - fVar22 * fVar9;
          FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
          fVar9 = (float)FUN_05c7b504(0);
          fVar14 = *(float *)(unaff_x29 + -0x138);
          fVar24 = *(float *)(unaff_x29 + -0x14c);
          fVar19 = (fVar23 * fVar15 + fVar10 * fVar18 + in_s3 * fVar9) - fVar22 * fVar17;
          fVar20 = (fVar10 * fVar17 + fVar22 * fVar18 + in_s3 * fVar15) - fVar23 * fVar9;
          fVar21 = (fVar22 * fVar9 + fVar23 * fVar18 + in_s3 * fVar17) - fVar10 * fVar15;
          fVar9 = ((in_s3 * fVar18 - fVar10 * fVar9) - fVar22 * fVar15) - fVar23 * fVar17;
          goto LAB_03eb4310;
        }
      }
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar5 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x10));
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      fVar9 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      fVar14 = fVar22;
      fVar24 = fVar23;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(unaff_x29 + -0x120));
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        fVar21 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar5 + 8);
        fVar19 = fVar14;
        fVar20 = fVar24;
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
          lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(unaff_x29 + -0x128));
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar21 = fVar9 - fVar21;
          fVar14 = fVar22 - fVar14;
          fVar24 = fVar23 - fVar24;
          fVar10 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
          fVar9 = fVar9 - fVar10;
          fVar22 = fVar22 - fVar19;
          fVar23 = fVar23 - fVar20;
          goto LAB_03eb4078;
        }
      }
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0xe8) + 0x28) == *(long *)(unaff_x29 + -0x50)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_03eb4568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


