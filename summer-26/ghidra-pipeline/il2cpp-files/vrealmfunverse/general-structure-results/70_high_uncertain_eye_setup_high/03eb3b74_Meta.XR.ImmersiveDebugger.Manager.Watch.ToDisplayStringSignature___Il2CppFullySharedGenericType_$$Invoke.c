/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<__Il2CppFullySharedGenericType>$$Invoke
ENTRY_POINT: 03eb3b74
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


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<__Il2CppFullySharedGenericType>__Invoke
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  float *pfVar8;
  ushort in_w10;
  int in_w11;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x29;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float in_s3;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  lVar7 = (long)&stack0x00000000 - ((ulong)(in_w11 + 0x10) + 0xf & 0x1fffffff0);
  lVar4 = param_1;
  if ((in_w10 & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar7 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = lVar9;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x140) = lVar9;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x148) = lVar9;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x118) = lVar9;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x100) = lVar9;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar9;
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
  *(ulong *)(unaff_x29 + -0xf0) = lVar9 - ((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar4,*(undefined8 *)(in_x9 + 0x10));
  auVar28 = FUN_056c41bc();
  *(long *)(unaff_x29 + -0x108) = auVar28._0_8_;
  lVar4 = *(long *)(unaff_x23 + 0x20);
  *(long *)(unaff_x29 + -0x110) = auVar28._8_8_;
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
  pfVar8 = *(float **)(lVar4 + 0xb8);
  lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  fVar22 = *pfVar8;
  fVar23 = pfVar8[1];
  fVar24 = pfVar8[2];
  fVar15 = pfVar8[3];
  fVar27 = pfVar8[6];
  lVar4 = *(long *)(lVar5 + 8);
  fVar26 = pfVar8[5];
  uVar2 = *(ushort *)(lVar4 + 0x135);
  *(float *)(unaff_x29 + -0xd8) = pfVar8[4];
  *(float *)(unaff_x29 + -0xd4) = fVar15;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_02b76218();
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x28));
  fVar15 = fVar23;
  fVar25 = fVar24;
  fVar10 = fVar22;
  if (*(char *)(unaff_x29 + -0x54) == '\0') {
LAB_03eb4078:
    lVar4 = *(long *)(unaff_x23 + 0x20);
    *(float *)(unaff_x29 + -0x120) = fVar22;
    lVar5 = *(long *)(lVar4 + 0xc0);
    *(float *)(unaff_x29 + -0x128) = fVar10;
    *(float *)(unaff_x29 + -300) = fVar23;
    lVar4 = *(long *)(lVar5 + 8);
    *(float *)(unaff_x29 + -0x130) = fVar24;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x30),lVar7);
    fVar21 = *(float *)(unaff_x29 + -0xd8);
    fVar20 = *(float *)(unaff_x29 + -0xd4);
    fVar22 = fVar26;
    fVar10 = fVar27;
    if (*(char *)(unaff_x29 + -0xb8) == '\0') {
LAB_03eb4310:
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(unaff_x29 + -0x118));
      auVar28 = FUN_056be164();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(unaff_x29 + -0x100));
      auVar29 = FUN_056be164();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x48),*(undefined8 *)(unaff_x29 + -0xf8));
      auVar30 = FUN_056be2e4();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(unaff_x29 + -0xf0));
      auVar31 = FUN_056be2e4();
      uVar14 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar13 = *(undefined8 *)(unaff_x29 + -0x70);
      *(float *)((long)unaff_x19 + 100) = fVar20;
      *(float *)(unaff_x19 + 0xd) = fVar21;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x108);
      *(float *)((long)unaff_x19 + 0x6c) = fVar22;
      *(float *)(unaff_x19 + 0xe) = fVar10;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uVar14;
      *(undefined8 *)((long)unaff_x19 + 0xc) = uVar13;
      uVar14 = *(undefined8 *)(unaff_x29 + -0x88);
      uVar13 = *(undefined8 *)(unaff_x29 + -0x90);
      *unaff_x19 = uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x110);
      *(undefined8 *)((long)unaff_x19 + 0x2c) = uVar14;
      *(undefined8 *)((long)unaff_x19 + 0x24) = uVar13;
      *(long *)((long)unaff_x19 + 0x74) = auVar28._0_8_;
      *(int *)(unaff_x19 + 1) = (int)uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x60);
      *(long *)((long)unaff_x19 + 0x7c) = auVar28._8_8_;
      *(undefined8 *)((long)unaff_x19 + 0x1c) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x80);
      *(long *)((long)unaff_x19 + 0x84) = auVar29._0_8_;
      *(undefined8 *)((long)unaff_x19 + 0x34) = uVar6;
      uVar12 = *(undefined4 *)(unaff_x29 + -0x120);
      *(long *)((long)unaff_x19 + 0x8c) = auVar29._8_8_;
      *(long *)((long)unaff_x19 + 0x94) = auVar30._0_8_;
      *(undefined4 *)((long)unaff_x19 + 0x3c) = uVar12;
      *(float *)(unaff_x19 + 8) = fVar15;
      uVar12 = *(undefined4 *)(unaff_x29 + -0xd8);
      uVar17 = *(undefined4 *)(unaff_x29 + -0xd4);
      *(long *)((long)unaff_x19 + 0x9c) = auVar30._8_8_;
      *(long *)((long)unaff_x19 + 0xa4) = auVar31._0_8_;
      *(undefined4 *)((long)unaff_x19 + 0x4c) = uVar12;
      *(float *)(unaff_x19 + 10) = fVar26;
      uVar12 = *(undefined4 *)(unaff_x29 + -0x128);
      *(float *)((long)unaff_x19 + 0x44) = fVar25;
      *(undefined4 *)(unaff_x19 + 9) = uVar17;
      uVar17 = *(undefined4 *)(unaff_x29 + -300);
      *(float *)((long)unaff_x19 + 0x54) = fVar27;
      *(undefined4 *)(unaff_x19 + 0xb) = uVar12;
      uVar12 = *(undefined4 *)(unaff_x29 + -0x130);
      lVar4 = *(long *)(unaff_x29 + -0xe8);
      *(long *)((long)unaff_x19 + 0xac) = auVar31._8_8_;
      *(undefined4 *)((long)unaff_x19 + 0x5c) = uVar17;
      *(undefined4 *)(unaff_x19 + 0xc) = uVar12;
      uVar6 = *(undefined8 *)(unaff_x29 + -0xa0);
      *(undefined8 *)((long)unaff_x19 + 0xbc) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)((long)unaff_x19 + 0xb4) = uVar6;
      if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -0x50)) {
        return;
      }
      goto LAB_03eb4568;
    }
    lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar7 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(unaff_x29 + -0x138));
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      fVar11 = (float)FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      fVar22 = fVar23;
      fVar10 = fVar24;
      fVar20 = in_s3;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      uVar6 = *(undefined8 *)(lVar7 + 0x18);
      *(float *)(unaff_x29 + -0x14c) = fVar25;
      *(float *)(unaff_x29 + -0x138) = fVar15;
      FUN_02b3d498(lVar4,uVar6,*(undefined8 *)(unaff_x29 + -0x140));
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
        fVar15 = (float)FUN_05c7b504(0);
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar7 + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
          lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(unaff_x29 + -0x148));
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar16 = fVar11 * fVar10 + fVar23 * fVar20 + in_s3 * fVar22;
          fVar18 = fVar23 * fVar15 + fVar24 * fVar20 + in_s3 * fVar10;
          fVar19 = (in_s3 * fVar20 - fVar11 * fVar15) - fVar23 * fVar22;
          fVar26 = fVar18 - fVar11 * fVar22;
          fVar27 = fVar19 - fVar24 * fVar10;
          *(float *)(unaff_x29 + -0xd8) = fVar16 - fVar24 * fVar15;
          *(float *)(unaff_x29 + -0xd4) =
               (fVar24 * fVar22 + fVar11 * fVar20 + in_s3 * fVar15) - fVar23 * fVar10;
          FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
          fVar10 = (float)FUN_05c7b504(0);
          fVar15 = *(float *)(unaff_x29 + -0x138);
          fVar25 = *(float *)(unaff_x29 + -0x14c);
          fVar20 = (fVar24 * fVar16 + fVar11 * fVar19 + in_s3 * fVar10) - fVar23 * fVar18;
          fVar21 = (fVar11 * fVar18 + fVar23 * fVar19 + in_s3 * fVar16) - fVar24 * fVar10;
          fVar22 = (fVar23 * fVar10 + fVar24 * fVar19 + in_s3 * fVar18) - fVar11 * fVar16;
          fVar10 = ((in_s3 * fVar19 - fVar11 * fVar10) - fVar23 * fVar16) - fVar24 * fVar18;
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
      fVar10 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      fVar15 = fVar23;
      fVar25 = fVar24;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(unaff_x29 + -0x120));
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        fVar22 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar5 + 8);
        fVar20 = fVar15;
        fVar21 = fVar25;
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
          lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(unaff_x29 + -0x128));
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar22 = fVar10 - fVar22;
          fVar15 = fVar23 - fVar15;
          fVar25 = fVar24 - fVar25;
          fVar11 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
          fVar10 = fVar10 - fVar11;
          fVar23 = fVar23 - fVar20;
          fVar24 = fVar24 - fVar21;
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


