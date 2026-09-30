/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$EndInvoke
ENTRY_POINT: 03eb3a4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__EndInvoke
               (long param_1,long param_2)

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
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x23;
  undefined8 unaff_x26;
  long lVar11;
  long unaff_x29;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float in_s3;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  lVar7 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0xe0) = unaff_x26;
  lVar4 = param_1;
  if ((in_w10 & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar11 = lVar7 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar11 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x120) = lVar9;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x128) = lVar9;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar10 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = lVar10;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x140) = lVar10;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x148) = lVar10;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x118) = lVar10;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x100) = lVar10;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar10;
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
  *(ulong *)(unaff_x29 + -0xf0) = lVar10 - ((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar4,*(undefined8 *)(in_x9 + 0x10));
  auVar30 = FUN_056c41bc();
  *(long *)(unaff_x29 + -0x108) = auVar30._0_8_;
  lVar4 = *(long *)(unaff_x23 + 0x20);
  *(long *)(unaff_x29 + -0x110) = auVar30._8_8_;
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
  fVar24 = *pfVar8;
  fVar25 = pfVar8[1];
  fVar26 = pfVar8[2];
  fVar17 = pfVar8[3];
  fVar29 = pfVar8[6];
  lVar4 = *(long *)(lVar5 + 8);
  fVar28 = pfVar8[5];
  uVar2 = *(ushort *)(lVar4 + 0x135);
  *(float *)(unaff_x29 + -0xd8) = pfVar8[4];
  *(float *)(unaff_x29 + -0xd4) = fVar17;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_02b76218();
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x28),lVar7);
  fVar17 = fVar25;
  fVar27 = fVar26;
  fVar12 = fVar24;
  if (*(char *)(unaff_x29 + -0x54) == '\0') {
LAB_03eb4078:
    lVar4 = *(long *)(unaff_x23 + 0x20);
    *(float *)(unaff_x29 + -0x120) = fVar24;
    lVar7 = *(long *)(lVar4 + 0xc0);
    *(float *)(unaff_x29 + -0x128) = fVar12;
    *(float *)(unaff_x29 + -300) = fVar25;
    lVar4 = *(long *)(lVar7 + 8);
    *(float *)(unaff_x29 + -0x130) = fVar26;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x30),lVar9);
    fVar23 = *(float *)(unaff_x29 + -0xd8);
    fVar22 = *(float *)(unaff_x29 + -0xd4);
    fVar24 = fVar28;
    fVar12 = fVar29;
    if (*(char *)(unaff_x29 + -0xb8) == '\0') {
LAB_03eb4310:
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(unaff_x29 + -0x118));
      auVar30 = FUN_056be164();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(unaff_x29 + -0x100));
      auVar31 = FUN_056be164();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x48),*(undefined8 *)(unaff_x29 + -0xf8));
      auVar32 = FUN_056be2e4();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(unaff_x29 + -0xf0));
      auVar33 = FUN_056be2e4();
      uVar16 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar15 = *(undefined8 *)(unaff_x29 + -0x70);
      *(float *)((long)unaff_x19 + 100) = fVar22;
      *(float *)(unaff_x19 + 0xd) = fVar23;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x108);
      *(float *)((long)unaff_x19 + 0x6c) = fVar24;
      *(float *)(unaff_x19 + 0xe) = fVar12;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uVar16;
      *(undefined8 *)((long)unaff_x19 + 0xc) = uVar15;
      uVar16 = *(undefined8 *)(unaff_x29 + -0x88);
      uVar15 = *(undefined8 *)(unaff_x29 + -0x90);
      *unaff_x19 = uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x110);
      *(undefined8 *)((long)unaff_x19 + 0x2c) = uVar16;
      *(undefined8 *)((long)unaff_x19 + 0x24) = uVar15;
      *(long *)((long)unaff_x19 + 0x74) = auVar30._0_8_;
      *(int *)(unaff_x19 + 1) = (int)uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x60);
      *(long *)((long)unaff_x19 + 0x7c) = auVar30._8_8_;
      *(undefined8 *)((long)unaff_x19 + 0x1c) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x80);
      *(long *)((long)unaff_x19 + 0x84) = auVar31._0_8_;
      *(undefined8 *)((long)unaff_x19 + 0x34) = uVar6;
      uVar14 = *(undefined4 *)(unaff_x29 + -0x120);
      *(long *)((long)unaff_x19 + 0x8c) = auVar31._8_8_;
      *(long *)((long)unaff_x19 + 0x94) = auVar32._0_8_;
      *(undefined4 *)((long)unaff_x19 + 0x3c) = uVar14;
      *(float *)(unaff_x19 + 8) = fVar17;
      uVar14 = *(undefined4 *)(unaff_x29 + -0xd8);
      uVar19 = *(undefined4 *)(unaff_x29 + -0xd4);
      *(long *)((long)unaff_x19 + 0x9c) = auVar32._8_8_;
      *(long *)((long)unaff_x19 + 0xa4) = auVar33._0_8_;
      *(undefined4 *)((long)unaff_x19 + 0x4c) = uVar14;
      *(float *)(unaff_x19 + 10) = fVar28;
      uVar14 = *(undefined4 *)(unaff_x29 + -0x128);
      *(float *)((long)unaff_x19 + 0x44) = fVar27;
      *(undefined4 *)(unaff_x19 + 9) = uVar19;
      uVar19 = *(undefined4 *)(unaff_x29 + -300);
      *(float *)((long)unaff_x19 + 0x54) = fVar29;
      *(undefined4 *)(unaff_x19 + 0xb) = uVar14;
      uVar14 = *(undefined4 *)(unaff_x29 + -0x130);
      lVar4 = *(long *)(unaff_x29 + -0xe8);
      *(long *)((long)unaff_x19 + 0xac) = auVar33._8_8_;
      *(undefined4 *)((long)unaff_x19 + 0x5c) = uVar19;
      *(undefined4 *)(unaff_x19 + 0xc) = uVar14;
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
      fVar13 = (float)FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      fVar24 = fVar25;
      fVar12 = fVar26;
      fVar22 = in_s3;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      uVar6 = *(undefined8 *)(lVar7 + 0x18);
      *(float *)(unaff_x29 + -0x14c) = fVar27;
      *(float *)(unaff_x29 + -0x138) = fVar17;
      FUN_02b3d498(lVar4,uVar6,*(undefined8 *)(unaff_x29 + -0x140));
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
        fVar17 = (float)FUN_05c7b504(0);
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar7 + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
          lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(unaff_x29 + -0x148));
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar18 = fVar13 * fVar12 + fVar25 * fVar22 + in_s3 * fVar24;
          fVar20 = fVar25 * fVar17 + fVar26 * fVar22 + in_s3 * fVar12;
          fVar21 = (in_s3 * fVar22 - fVar13 * fVar17) - fVar25 * fVar24;
          fVar28 = fVar20 - fVar13 * fVar24;
          fVar29 = fVar21 - fVar26 * fVar12;
          *(float *)(unaff_x29 + -0xd8) = fVar18 - fVar26 * fVar17;
          *(float *)(unaff_x29 + -0xd4) =
               (fVar26 * fVar24 + fVar13 * fVar22 + in_s3 * fVar17) - fVar25 * fVar12;
          FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
          fVar12 = (float)FUN_05c7b504(0);
          fVar17 = *(float *)(unaff_x29 + -0x138);
          fVar27 = *(float *)(unaff_x29 + -0x14c);
          fVar22 = (fVar26 * fVar18 + fVar13 * fVar21 + in_s3 * fVar12) - fVar25 * fVar20;
          fVar23 = (fVar13 * fVar20 + fVar25 * fVar21 + in_s3 * fVar18) - fVar26 * fVar12;
          fVar24 = (fVar25 * fVar12 + fVar26 * fVar21 + in_s3 * fVar20) - fVar13 * fVar18;
          fVar12 = ((in_s3 * fVar21 - fVar13 * fVar12) - fVar25 * fVar18) - fVar26 * fVar20;
          goto LAB_03eb4310;
        }
      }
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar7 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x10),lVar11);
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      fVar12 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
      lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar7 + 8);
      fVar17 = fVar25;
      fVar27 = fVar26;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(unaff_x29 + -0x120));
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        fVar24 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
        lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar7 + 8);
        fVar22 = fVar17;
        fVar23 = fVar27;
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
          lVar7 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar4,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(unaff_x29 + -0x128));
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar24 = fVar12 - fVar24;
          fVar17 = fVar25 - fVar17;
          fVar27 = fVar26 - fVar27;
          fVar13 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
          fVar12 = fVar12 - fVar13;
          fVar25 = fVar25 - fVar22;
          fVar26 = fVar26 - fVar23;
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


