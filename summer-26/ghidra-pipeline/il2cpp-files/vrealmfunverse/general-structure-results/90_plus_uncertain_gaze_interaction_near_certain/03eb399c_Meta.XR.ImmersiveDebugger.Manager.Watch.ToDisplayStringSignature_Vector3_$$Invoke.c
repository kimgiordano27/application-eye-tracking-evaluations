/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$Invoke
ENTRY_POINT: 03eb399c
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


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__Invoke(long param_1)

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
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long lVar10;
  long unaff_x23;
  long lVar11;
  long lVar12;
  undefined8 unaff_x26;
  long lVar13;
  long unaff_x29;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float in_s3;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  lVar4 = param_1;
  if ((in_w10 & 1) == 0) {
    param_1 = FUN_02b76218(param_1);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar10 = (long)&stack0x00000000 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar12 = lVar10 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar11 = lVar12 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0xe0) = unaff_x26;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar13 = lVar11 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar8 = lVar13 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x120) = lVar8;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x128) = lVar8;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar8 = lVar8 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar8 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = lVar9;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x140) = lVar9;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x148) = lVar9;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x118) = lVar9;
  lVar5 = lVar4;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar5 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar4 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x100) = lVar9;
  lVar4 = lVar5;
  if ((in_w10 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    in_w10 = *(ushort *)(*(long *)(in_x9 + 8) + 0x135);
    lVar4 = *(long *)(in_x9 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar9;
  if ((in_w10 & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  iVar1 = *(int *)(lVar4 + 0xfc);
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
  auVar32 = FUN_056c41bc();
  *(long *)(unaff_x29 + -0x108) = auVar32._0_8_;
  lVar4 = *(long *)(unaff_x23 + 0x20);
  *(long *)(unaff_x29 + -0x110) = auVar32._8_8_;
  lVar5 = *(long *)(lVar4 + 0xc0);
  lVar4 = *(long *)(lVar5 + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  puVar3 = PTR_DAT_06320af8;
  FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x18),lVar10);
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
  FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x20),lVar12);
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
  fVar26 = *pfVar7;
  fVar27 = pfVar7[1];
  fVar28 = pfVar7[2];
  fVar19 = pfVar7[3];
  fVar31 = pfVar7[6];
  lVar4 = *(long *)(lVar5 + 8);
  fVar30 = pfVar7[5];
  uVar2 = *(ushort *)(lVar4 + 0x135);
  *(float *)(unaff_x29 + -0xd8) = pfVar7[4];
  *(float *)(unaff_x29 + -0xd4) = fVar19;
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_02b76218();
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x28),lVar11);
  fVar19 = fVar27;
  fVar29 = fVar28;
  fVar14 = fVar26;
  if (*(char *)(unaff_x29 + -0x54) == '\0') {
LAB_03eb4078:
    lVar4 = *(long *)(unaff_x23 + 0x20);
    *(float *)(unaff_x29 + -0x120) = fVar26;
    lVar5 = *(long *)(lVar4 + 0xc0);
    *(float *)(unaff_x29 + -0x128) = fVar14;
    *(float *)(unaff_x29 + -300) = fVar27;
    lVar4 = *(long *)(lVar5 + 8);
    *(float *)(unaff_x29 + -0x130) = fVar28;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x30),lVar8);
    fVar25 = *(float *)(unaff_x29 + -0xd8);
    fVar24 = *(float *)(unaff_x29 + -0xd4);
    fVar26 = fVar30;
    fVar14 = fVar31;
    if (*(char *)(unaff_x29 + -0xb8) == '\0') {
LAB_03eb4310:
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x38),*(undefined8 *)(unaff_x29 + -0x118));
      auVar32 = FUN_056be164();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(unaff_x29 + -0x100));
      auVar33 = FUN_056be164();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(unaff_x29 + -0xf8));
      auVar34 = FUN_056be2e4();
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x50),*(undefined8 *)(unaff_x29 + -0xf0));
      auVar35 = FUN_056be2e4();
      uVar18 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar17 = *(undefined8 *)(unaff_x29 + -0x70);
      *(float *)((long)unaff_x19 + 100) = fVar24;
      *(float *)(unaff_x19 + 0xd) = fVar25;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x108);
      *(float *)((long)unaff_x19 + 0x6c) = fVar26;
      *(float *)(unaff_x19 + 0xe) = fVar14;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uVar18;
      *(undefined8 *)((long)unaff_x19 + 0xc) = uVar17;
      uVar18 = *(undefined8 *)(unaff_x29 + -0x88);
      uVar17 = *(undefined8 *)(unaff_x29 + -0x90);
      *unaff_x19 = uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x110);
      *(undefined8 *)((long)unaff_x19 + 0x2c) = uVar18;
      *(undefined8 *)((long)unaff_x19 + 0x24) = uVar17;
      *(long *)((long)unaff_x19 + 0x74) = auVar32._0_8_;
      *(int *)(unaff_x19 + 1) = (int)uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x60);
      *(long *)((long)unaff_x19 + 0x7c) = auVar32._8_8_;
      *(undefined8 *)((long)unaff_x19 + 0x1c) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x29 + -0x80);
      *(long *)((long)unaff_x19 + 0x84) = auVar33._0_8_;
      *(undefined8 *)((long)unaff_x19 + 0x34) = uVar6;
      uVar16 = *(undefined4 *)(unaff_x29 + -0x120);
      *(long *)((long)unaff_x19 + 0x8c) = auVar33._8_8_;
      *(long *)((long)unaff_x19 + 0x94) = auVar34._0_8_;
      *(undefined4 *)((long)unaff_x19 + 0x3c) = uVar16;
      *(float *)(unaff_x19 + 8) = fVar19;
      uVar16 = *(undefined4 *)(unaff_x29 + -0xd8);
      uVar21 = *(undefined4 *)(unaff_x29 + -0xd4);
      *(long *)((long)unaff_x19 + 0x9c) = auVar34._8_8_;
      *(long *)((long)unaff_x19 + 0xa4) = auVar35._0_8_;
      *(undefined4 *)((long)unaff_x19 + 0x4c) = uVar16;
      *(float *)(unaff_x19 + 10) = fVar30;
      uVar16 = *(undefined4 *)(unaff_x29 + -0x128);
      *(float *)((long)unaff_x19 + 0x44) = fVar29;
      *(undefined4 *)(unaff_x19 + 9) = uVar21;
      uVar21 = *(undefined4 *)(unaff_x29 + -300);
      *(float *)((long)unaff_x19 + 0x54) = fVar31;
      *(undefined4 *)(unaff_x19 + 0xb) = uVar16;
      uVar16 = *(undefined4 *)(unaff_x29 + -0x130);
      lVar4 = *(long *)(unaff_x29 + -0xe8);
      *(long *)((long)unaff_x19 + 0xac) = auVar35._8_8_;
      *(undefined4 *)((long)unaff_x19 + 0x5c) = uVar21;
      *(undefined4 *)(unaff_x19 + 0xc) = uVar16;
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
      fVar15 = (float)FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      fVar26 = fVar27;
      fVar14 = fVar28;
      fVar24 = in_s3;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      *(float *)(unaff_x29 + -0x14c) = fVar29;
      *(float *)(unaff_x29 + -0x138) = fVar19;
      FUN_02b3d498(lVar4,uVar6,*(undefined8 *)(unaff_x29 + -0x140));
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
        fVar19 = (float)FUN_05c7b504(0);
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar5 + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
          lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(unaff_x29 + -0x148));
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar20 = fVar15 * fVar14 + fVar27 * fVar24 + in_s3 * fVar26;
          fVar22 = fVar27 * fVar19 + fVar28 * fVar24 + in_s3 * fVar14;
          fVar23 = (in_s3 * fVar24 - fVar15 * fVar19) - fVar27 * fVar26;
          fVar30 = fVar22 - fVar15 * fVar26;
          fVar31 = fVar23 - fVar28 * fVar14;
          *(float *)(unaff_x29 + -0xd8) = fVar20 - fVar28 * fVar19;
          *(float *)(unaff_x29 + -0xd4) =
               (fVar28 * fVar26 + fVar15 * fVar24 + in_s3 * fVar19) - fVar27 * fVar14;
          FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
          fVar14 = (float)FUN_05c7b504(0);
          fVar19 = *(float *)(unaff_x29 + -0x138);
          fVar29 = *(float *)(unaff_x29 + -0x14c);
          fVar24 = (fVar28 * fVar20 + fVar15 * fVar23 + in_s3 * fVar14) - fVar27 * fVar22;
          fVar25 = (fVar15 * fVar22 + fVar27 * fVar23 + in_s3 * fVar20) - fVar28 * fVar14;
          fVar26 = (fVar27 * fVar14 + fVar28 * fVar23 + in_s3 * fVar22) - fVar15 * fVar20;
          fVar14 = ((in_s3 * fVar23 - fVar15 * fVar14) - fVar27 * fVar20) - fVar28 * fVar22;
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
    FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x10),lVar13);
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      fVar14 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
      lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      lVar4 = *(long *)(lVar5 + 8);
      fVar19 = fVar27;
      fVar29 = fVar28;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(unaff_x29 + -0x120));
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        fVar26 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
        lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        lVar4 = *(long *)(lVar5 + 8);
        fVar24 = fVar19;
        fVar25 = fVar29;
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02b76218();
          lVar5 = *(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar4,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(unaff_x29 + -0x128));
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar26 = fVar14 - fVar26;
          fVar19 = fVar27 - fVar19;
          fVar29 = fVar28 - fVar29;
          fVar15 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
          fVar14 = fVar14 - fVar15;
          fVar27 = fVar27 - fVar24;
          fVar28 = fVar28 - fVar25;
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


