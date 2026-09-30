/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$.ctor
ENTRY_POINT: 03eb38fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>___ctor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x29;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float in_s3;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_110 [272];
  
  lVar5 = tpidr_el0;
  *(long *)(unaff_x29 + -0xe8) = lVar5;
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(lVar5 + 0x28);
  if ((DAT_066c4b1c & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06320af8);
    DAT_066c4b1c = 1;
  }
  lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar8 + 8);
  uVar3 = *(ushort *)(lVar7 + 0x135);
  lVar5 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar5 = *(long *)(lVar8 + 8);
  }
  iVar1 = *(int *)(lVar7 + 0xfc);
  lVar7 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar7 = *(long *)(lVar8 + 8);
  }
  lVar12 = (long)(auStack_110 + -((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0)) -
           ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar5 = *(long *)(lVar8 + 8);
  }
  lVar14 = lVar12 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar7 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar7 = *(long *)(lVar8 + 8);
  }
  lVar13 = lVar14 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0xe0) = param_5;
  lVar5 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar5 = *(long *)(lVar8 + 8);
  }
  lVar15 = lVar13 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar7 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar7 = *(long *)(lVar8 + 8);
  }
  lVar10 = lVar15 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x120) = lVar10;
  lVar5 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar5 = *(long *)(lVar8 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x128) = lVar10;
  lVar7 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar7 = *(long *)(lVar8 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar5 = *(long *)(lVar8 + 8);
  }
  lVar11 = lVar10 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x138) = lVar11;
  lVar7 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar7 = *(long *)(lVar8 + 8);
  }
  lVar11 = lVar11 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x140) = lVar11;
  lVar5 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar5 = *(long *)(lVar8 + 8);
  }
  lVar11 = lVar11 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x148) = lVar11;
  lVar7 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar7 = *(long *)(lVar8 + 8);
  }
  lVar11 = lVar11 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x118) = lVar11;
  lVar5 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar5 = *(long *)(lVar8 + 8);
  }
  lVar11 = lVar11 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x100) = lVar11;
  lVar7 = lVar5;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(lVar8 + 8) + 0x135);
    lVar7 = *(long *)(lVar8 + 8);
  }
  lVar11 = lVar11 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0xf8) = lVar11;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_02b76218(lVar7);
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  iVar2 = *(int *)(lVar7 + 0xfc);
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  lVar5 = *(long *)(lVar8 + 8);
  *(ulong *)(unaff_x29 + -0xf0) = lVar11 - ((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
    lVar8 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar5,*(undefined8 *)(lVar8 + 0x10),
               auStack_110 + -((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0),param_4,0,
               unaff_x29 + -0xb8);
  auVar34 = FUN_056c41bc(param_3,*(undefined8 *)(unaff_x29 + -0xb8),0);
  *(long *)(unaff_x29 + -0x108) = auVar34._0_8_;
  lVar5 = *(long *)(param_6 + 0x20);
  *(long *)(unaff_x29 + -0x110) = auVar34._8_8_;
  lVar7 = *(long *)(lVar5 + 0xc0);
  lVar5 = *(long *)(lVar7 + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  puVar4 = PTR_DAT_06320af8;
  FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x18),lVar12,param_4,0,unaff_x29 + -0xb8);
  FUN_056c45a8(unaff_x29 + -0xb8,param_3,*(undefined8 *)(unaff_x29 + -0xb8),0);
  lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0xb0);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0xa8);
  lVar5 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x20),lVar14,param_4,0,unaff_x29 + -0xd0);
  FUN_056c45a8(unaff_x29 + -0xd0,param_3,*(undefined8 *)(unaff_x29 + -0xd0),0);
  iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
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
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *(long *)puVar4;
  }
  pfVar9 = *(float **)(lVar5 + 0xb8);
  lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  fVar28 = *pfVar9;
  fVar29 = pfVar9[1];
  fVar30 = pfVar9[2];
  fVar21 = pfVar9[3];
  fVar33 = pfVar9[6];
  lVar5 = *(long *)(lVar7 + 8);
  fVar32 = pfVar9[5];
  uVar3 = *(ushort *)(lVar5 + 0x135);
  *(float *)(unaff_x29 + -0xd8) = pfVar9[4];
  *(float *)(unaff_x29 + -0xd4) = fVar21;
  if ((uVar3 & 1) == 0) {
    lVar5 = FUN_02b76218();
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x28),lVar13,param_4,0,unaff_x29 + -0x54);
  fVar21 = fVar29;
  fVar31 = fVar30;
  fVar17 = fVar28;
  if (*(char *)(unaff_x29 + -0x54) == '\0') {
LAB_03eb4078:
    lVar5 = *(long *)(param_6 + 0x20);
    *(float *)(unaff_x29 + -0x120) = fVar28;
    lVar7 = *(long *)(lVar5 + 0xc0);
    *(float *)(unaff_x29 + -0x128) = fVar17;
    *(float *)(unaff_x29 + -300) = fVar29;
    lVar5 = *(long *)(lVar7 + 8);
    *(float *)(unaff_x29 + -0x130) = fVar30;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    uVar16 = *(undefined8 *)(unaff_x29 + -0xe0);
    FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x30),lVar10,param_4,0,unaff_x29 + -0xb8);
    fVar27 = *(float *)(unaff_x29 + -0xd8);
    fVar26 = *(float *)(unaff_x29 + -0xd4);
    fVar28 = fVar32;
    fVar17 = fVar33;
    if (*(char *)(unaff_x29 + -0xb8) == '\0') {
LAB_03eb4310:
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(unaff_x29 + -0x118),param_4,0
                   ,unaff_x29 + -0xb8);
      auVar34 = FUN_056be164(param_3,uVar16,*(undefined8 *)(unaff_x29 + -0xb8),0);
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(unaff_x29 + -0x100),param_4,0
                   ,unaff_x29 + -0xb8);
      auVar35 = FUN_056be164(param_3,uVar16,*(undefined8 *)(unaff_x29 + -0xb8),0);
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x48),*(undefined8 *)(unaff_x29 + -0xf8),param_4,0,
                   unaff_x29 + -0xb8);
      auVar36 = FUN_056be2e4(param_3,uVar16,*(undefined8 *)(unaff_x29 + -0xb8),0);
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar7 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(unaff_x29 + -0xf0),param_4,0,
                   unaff_x29 + -0xb8);
      auVar37 = FUN_056be2e4(param_3,*(undefined8 *)(unaff_x29 + -0xe0),
                             *(undefined8 *)(unaff_x29 + -0xb8),0);
      uVar20 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x70);
      *(float *)((long)param_1 + 100) = fVar26;
      *(float *)(param_1 + 0xd) = fVar27;
      uVar16 = *(undefined8 *)(unaff_x29 + -0x108);
      *(float *)((long)param_1 + 0x6c) = fVar28;
      *(float *)(param_1 + 0xe) = fVar17;
      *(undefined8 *)((long)param_1 + 0x14) = uVar20;
      *(undefined8 *)((long)param_1 + 0xc) = uVar6;
      uVar20 = *(undefined8 *)(unaff_x29 + -0x88);
      uVar6 = *(undefined8 *)(unaff_x29 + -0x90);
      *param_1 = uVar16;
      uVar16 = *(undefined8 *)(unaff_x29 + -0x110);
      *(undefined8 *)((long)param_1 + 0x2c) = uVar20;
      *(undefined8 *)((long)param_1 + 0x24) = uVar6;
      *(long *)((long)param_1 + 0x74) = auVar34._0_8_;
      *(int *)(param_1 + 1) = (int)uVar16;
      uVar16 = *(undefined8 *)(unaff_x29 + -0x60);
      *(long *)((long)param_1 + 0x7c) = auVar34._8_8_;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar16;
      uVar16 = *(undefined8 *)(unaff_x29 + -0x80);
      *(long *)((long)param_1 + 0x84) = auVar35._0_8_;
      *(undefined8 *)((long)param_1 + 0x34) = uVar16;
      uVar19 = *(undefined4 *)(unaff_x29 + -0x120);
      *(long *)((long)param_1 + 0x8c) = auVar35._8_8_;
      *(long *)((long)param_1 + 0x94) = auVar36._0_8_;
      *(undefined4 *)((long)param_1 + 0x3c) = uVar19;
      *(float *)(param_1 + 8) = fVar21;
      uVar19 = *(undefined4 *)(unaff_x29 + -0xd8);
      uVar23 = *(undefined4 *)(unaff_x29 + -0xd4);
      *(long *)((long)param_1 + 0x9c) = auVar36._8_8_;
      *(long *)((long)param_1 + 0xa4) = auVar37._0_8_;
      *(undefined4 *)((long)param_1 + 0x4c) = uVar19;
      *(float *)(param_1 + 10) = fVar32;
      uVar19 = *(undefined4 *)(unaff_x29 + -0x128);
      *(float *)((long)param_1 + 0x44) = fVar31;
      *(undefined4 *)(param_1 + 9) = uVar23;
      uVar23 = *(undefined4 *)(unaff_x29 + -300);
      *(float *)((long)param_1 + 0x54) = fVar33;
      *(undefined4 *)(param_1 + 0xb) = uVar19;
      uVar19 = *(undefined4 *)(unaff_x29 + -0x130);
      lVar5 = *(long *)(unaff_x29 + -0xe8);
      *(long *)((long)param_1 + 0xac) = auVar37._8_8_;
      *(undefined4 *)((long)param_1 + 0x5c) = uVar23;
      *(undefined4 *)(param_1 + 0xc) = uVar19;
      uVar16 = *(undefined8 *)(unaff_x29 + -0xa0);
      *(undefined8 *)((long)param_1 + 0xbc) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)((long)param_1 + 0xb4) = uVar16;
      if (*(long *)(lVar5 + 0x28) == *(long *)(unaff_x29 + -0x50)) {
        return;
      }
      goto LAB_03eb4568;
    }
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar7 + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(unaff_x29 + -0x138),param_4,0,
                 unaff_x29 + -0xb8);
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      fVar18 = (float)FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar7 + 8);
      fVar28 = fVar29;
      fVar17 = fVar30;
      fVar26 = in_s3;
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      uVar6 = *(undefined8 *)(lVar7 + 0x18);
      *(float *)(unaff_x29 + -0x14c) = fVar31;
      *(float *)(unaff_x29 + -0x138) = fVar21;
      FUN_02b3d498(lVar5,uVar6,*(undefined8 *)(unaff_x29 + -0x140),param_4,0,unaff_x29 + -0xb8);
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
        fVar21 = (float)FUN_05c7b504(0);
        lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        lVar5 = *(long *)(lVar7 + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218();
          lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(unaff_x29 + -0x148),param_4
                     ,0,unaff_x29 + -0xb8);
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar22 = fVar18 * fVar17 + fVar29 * fVar26 + in_s3 * fVar28;
          fVar24 = fVar29 * fVar21 + fVar30 * fVar26 + in_s3 * fVar17;
          fVar25 = (in_s3 * fVar26 - fVar18 * fVar21) - fVar29 * fVar28;
          fVar32 = fVar24 - fVar18 * fVar28;
          fVar33 = fVar25 - fVar30 * fVar17;
          *(float *)(unaff_x29 + -0xd8) = fVar22 - fVar30 * fVar21;
          *(float *)(unaff_x29 + -0xd4) =
               (fVar30 * fVar28 + fVar18 * fVar26 + in_s3 * fVar21) - fVar29 * fVar17;
          FUN_05c9a10c(*(long *)(unaff_x29 + -0xb8),0);
          fVar17 = (float)FUN_05c7b504(0);
          fVar21 = *(float *)(unaff_x29 + -0x138);
          fVar31 = *(float *)(unaff_x29 + -0x14c);
          fVar26 = (fVar30 * fVar22 + fVar18 * fVar25 + in_s3 * fVar17) - fVar29 * fVar24;
          fVar27 = (fVar18 * fVar24 + fVar29 * fVar25 + in_s3 * fVar22) - fVar30 * fVar17;
          fVar28 = (fVar29 * fVar17 + fVar30 * fVar25 + in_s3 * fVar24) - fVar18 * fVar22;
          fVar17 = ((in_s3 * fVar25 - fVar18 * fVar17) - fVar29 * fVar22) - fVar30 * fVar24;
          goto LAB_03eb4310;
        }
      }
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar7 + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x10),lVar15,param_4,0,unaff_x29 + -0xb8);
    if (*(long *)(unaff_x29 + -0xb8) != 0) {
      fVar17 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
      lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar7 + 8);
      fVar21 = fVar29;
      fVar31 = fVar30;
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(unaff_x29 + -0x120),param_4,0
                   ,unaff_x29 + -0xb8);
      if (*(long *)(unaff_x29 + -0xb8) != 0) {
        fVar28 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
        lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        lVar5 = *(long *)(lVar7 + 8);
        fVar26 = fVar21;
        fVar27 = fVar31;
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218();
          lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(unaff_x29 + -0x128),param_4
                     ,0,unaff_x29 + -0xb8);
        if (*(long *)(unaff_x29 + -0xb8) != 0) {
          fVar28 = fVar17 - fVar28;
          fVar21 = fVar29 - fVar21;
          fVar31 = fVar30 - fVar31;
          fVar18 = (float)FUN_05c9bf94(*(long *)(unaff_x29 + -0xb8),0);
          fVar17 = fVar17 - fVar18;
          fVar29 = fVar29 - fVar26;
          fVar30 = fVar30 - fVar27;
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


