/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector2>$$EndInvoke
ENTRY_POINT: 03eb38e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector2>__EndInvoke
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float in_s3;
  float fVar17;
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
  undefined1 auStack_110 [4];
  float fStack_10c;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  float fStack_f0;
  float fStack_ec;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  char acStack_14 [4];
  long lStack_10;
  
  lStack_a8 = tpidr_el0;
  lStack_10 = *(long *)(lStack_a8 + 0x28);
  if ((DAT_066c4b1c & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06320af8);
    DAT_066c4b1c = 1;
  }
  lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar7 + 8);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar5 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar5 = *(long *)(lVar7 + 8);
  }
  iVar1 = *(int *)(lVar6 + 0xfc);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar6 = *(long *)(lVar7 + 8);
  }
  lVar11 = (long)(auStack_110 + -((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0)) -
           ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar5 = *(long *)(lVar7 + 8);
  }
  lVar13 = lVar11 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar6 = *(long *)(lVar7 + 8);
  }
  lVar12 = lVar13 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar6;
  uStack_a0 = param_5;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar5 = *(long *)(lVar7 + 8);
  }
  lVar14 = lVar12 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar6 = *(long *)(lVar7 + 8);
  }
  lVar9 = lVar14 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar6;
  lStack_e0 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar5 = *(long *)(lVar7 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar5;
  lStack_e8 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar6 = *(long *)(lVar7 + 8);
  }
  lVar9 = lVar9 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar6;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar5 = *(long *)(lVar7 + 8);
  }
  lVar10 = lVar9 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar5;
  lStack_f8 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar6 = *(long *)(lVar7 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar6;
  lStack_100 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar5 = *(long *)(lVar7 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar5;
  lStack_108 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar6 = *(long *)(lVar7 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar5 = lVar6;
  lStack_d8 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar5 = *(long *)(lVar7 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar5;
  lStack_c0 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    uVar2 = *(ushort *)(*(long *)(lVar7 + 8) + 0x135);
    lVar6 = *(long *)(lVar7 + 8);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lStack_b8 = lVar10;
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02b76218(lVar6);
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  lStack_b0 = lVar10 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lVar5 = *(long *)(lVar7 + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
    lVar7 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar5,*(undefined8 *)(lVar7 + 0x10),
               auStack_110 + -((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0),param_4,0,&cStack_78);
  auVar27 = FUN_056c41bc(param_3,CONCAT71(uStack_77,cStack_78),0);
  uStack_d0 = auVar27._8_8_;
  uStack_c8 = auVar27._0_8_;
  lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  lVar5 = *(long *)(lVar6 + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
    auVar27._8_8_ = uStack_d0;
    auVar27._0_8_ = uStack_c8;
    lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  puVar3 = PTR_DAT_06320af8;
  uStack_d0 = auVar27._8_8_;
  uStack_c8 = auVar27._0_8_;
  FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x18),lVar11,param_4,0,&cStack_78);
  FUN_056c45a8(&cStack_78,param_3,CONCAT71(uStack_77,cStack_78),0);
  uStack_30 = CONCAT71(uStack_77,cStack_78);
  lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  uStack_28 = uStack_70;
  uStack_20 = uStack_68;
  lVar5 = *(long *)(lVar6 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
    lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x20),lVar13,param_4,0,&uStack_90);
  FUN_056c45a8(&uStack_90,param_3,uStack_90,0);
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  uStack_40 = uStack_80;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c3c7e == '\0') {
    FUN_02b3c81c(PTR_DAT_06320af8);
    DAT_066c3c7e = '\x01';
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar5 = *(long *)puVar3;
  }
  pfVar8 = *(float **)(lVar5 + 0xb8);
  lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  fVar20 = *pfVar8;
  fVar21 = pfVar8[1];
  fVar23 = pfVar8[2];
  fStack_94 = pfVar8[3];
  fVar26 = pfVar8[6];
  lVar5 = *(long *)(lVar6 + 8);
  fStack_98 = pfVar8[4];
  fVar25 = pfVar8[5];
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
    lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
  }
  FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x28),lVar12,param_4,0,acStack_14);
  fVar22 = fVar21;
  fVar24 = fVar23;
  fVar15 = fVar20;
  if (acStack_14[0] == '\0') {
LAB_03eb4078:
    lStack_e0 = CONCAT44(lStack_e0._4_4_,fVar20);
    lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lStack_e8 = CONCAT44(lStack_e8._4_4_,fVar15);
    lVar5 = *(long *)(lVar6 + 8);
    fStack_f0 = fVar23;
    fStack_ec = fVar21;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    uVar4 = uStack_a0;
    FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x30),lVar9,param_4,0,&cStack_78);
    fVar20 = fVar25;
    fVar15 = fVar26;
    fVar18 = fStack_94;
    fVar19 = fStack_98;
    if (cStack_78 == '\0') {
LAB_03eb4310:
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar6 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x38),lStack_d8,param_4,0,&cStack_78);
      auVar27 = FUN_056be164(param_3,uVar4,CONCAT71(uStack_77,cStack_78),0);
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar6 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x40),lStack_c0,param_4,0,&cStack_78);
      auVar28 = FUN_056be164(param_3,uVar4,CONCAT71(uStack_77,cStack_78),0);
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar6 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x48),lStack_b8,param_4,0,&cStack_78);
      auVar29 = FUN_056be2e4(param_3,uVar4,CONCAT71(uStack_77,cStack_78),0);
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar6 + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x50),lStack_b0,param_4,0,&cStack_78);
      auVar30 = FUN_056be2e4(param_3,uStack_a0,CONCAT71(uStack_77,cStack_78),0);
      *(float *)((long)param_1 + 100) = fVar18;
      *(float *)(param_1 + 0xd) = fVar19;
      *(float *)((long)param_1 + 0x6c) = fVar20;
      *(float *)(param_1 + 0xe) = fVar15;
      *(undefined8 *)((long)param_1 + 0x14) = uStack_28;
      *(undefined8 *)((long)param_1 + 0xc) = uStack_30;
      *param_1 = uStack_c8;
      *(undefined8 *)((long)param_1 + 0x2c) = uStack_48;
      *(undefined8 *)((long)param_1 + 0x24) = uStack_50;
      *(long *)((long)param_1 + 0x74) = auVar27._0_8_;
      *(int *)(param_1 + 1) = (int)uStack_d0;
      *(long *)((long)param_1 + 0x7c) = auVar27._8_8_;
      *(undefined8 *)((long)param_1 + 0x1c) = uStack_20;
      *(long *)((long)param_1 + 0x84) = auVar28._0_8_;
      *(undefined8 *)((long)param_1 + 0x34) = uStack_40;
      *(long *)((long)param_1 + 0x8c) = auVar28._8_8_;
      *(long *)((long)param_1 + 0x94) = auVar29._0_8_;
      *(undefined4 *)((long)param_1 + 0x3c) = (undefined4)lStack_e0;
      *(float *)(param_1 + 8) = fVar22;
      *(long *)((long)param_1 + 0x9c) = auVar29._8_8_;
      *(long *)((long)param_1 + 0xa4) = auVar30._0_8_;
      *(float *)((long)param_1 + 0x4c) = fStack_98;
      *(float *)(param_1 + 10) = fVar25;
      *(float *)((long)param_1 + 0x44) = fVar24;
      *(float *)(param_1 + 9) = fStack_94;
      *(float *)((long)param_1 + 0x54) = fVar26;
      *(undefined4 *)(param_1 + 0xb) = (undefined4)lStack_e8;
      *(long *)((long)param_1 + 0xac) = auVar30._8_8_;
      *(float *)((long)param_1 + 0x5c) = fStack_ec;
      *(float *)(param_1 + 0xc) = fStack_f0;
      *(undefined8 *)((long)param_1 + 0xbc) = uStack_58;
      *(undefined8 *)((long)param_1 + 0xb4) = uStack_60;
      if (*(long *)(lStack_a8 + 0x28) == lStack_10) {
        return;
      }
      goto LAB_03eb4568;
    }
    lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar6 + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x10),lStack_f8,param_4,0,&cStack_78);
    if (CONCAT71(uStack_77,cStack_78) != 0) {
      fVar15 = (float)FUN_05c9a10c(CONCAT71(uStack_77,cStack_78),0);
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar6 + 8);
      fVar20 = fVar21;
      fVar26 = fVar23;
      fVar25 = in_s3;
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      lStack_f8 = CONCAT44(lStack_f8._4_4_,fVar22);
      fStack_10c = fVar24;
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x18),lStack_100,param_4,0,&cStack_78);
      if (CONCAT71(uStack_77,cStack_78) != 0) {
        FUN_05c9a10c(CONCAT71(uStack_77,cStack_78),0);
        fVar22 = (float)FUN_05c7b504(0);
        lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        lVar5 = *(long *)(lVar6 + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218();
          lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x20),lStack_108,param_4,0,&cStack_78);
        if (CONCAT71(uStack_77,cStack_78) != 0) {
          fVar24 = fVar15 * fVar26 + fVar21 * fVar25 + in_s3 * fVar20;
          fVar16 = fVar21 * fVar22 + fVar23 * fVar25 + in_s3 * fVar26;
          fVar17 = (in_s3 * fVar25 - fVar15 * fVar22) - fVar21 * fVar20;
          fStack_94 = (fVar23 * fVar20 + fVar15 * fVar25 + in_s3 * fVar22) - fVar21 * fVar26;
          fStack_98 = fVar24 - fVar23 * fVar22;
          fVar25 = fVar16 - fVar15 * fVar20;
          fVar26 = fVar17 - fVar23 * fVar26;
          FUN_05c9a10c(CONCAT71(uStack_77,cStack_78),0);
          fVar22 = (float)FUN_05c7b504(0);
          fVar18 = (fVar23 * fVar24 + fVar15 * fVar17 + in_s3 * fVar22) - fVar21 * fVar16;
          fVar19 = (fVar15 * fVar16 + fVar21 * fVar17 + in_s3 * fVar24) - fVar23 * fVar22;
          fVar20 = (fVar21 * fVar22 + fVar23 * fVar17 + in_s3 * fVar16) - fVar15 * fVar24;
          fVar15 = ((in_s3 * fVar17 - fVar15 * fVar22) - fVar21 * fVar24) - fVar23 * fVar16;
          fVar22 = (float)lStack_f8;
          fVar24 = fStack_10c;
          goto LAB_03eb4310;
        }
      }
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar6 + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
    }
    FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x10),lVar14,param_4,0,&cStack_78);
    if (CONCAT71(uStack_77,cStack_78) != 0) {
      fVar15 = (float)FUN_05c9bf94(CONCAT71(uStack_77,cStack_78),0);
      lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      lVar5 = *(long *)(lVar6 + 8);
      fVar22 = fVar21;
      fVar24 = fVar23;
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218();
        lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
      }
      FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x18),lStack_e0,param_4,0,&cStack_78);
      if (CONCAT71(uStack_77,cStack_78) != 0) {
        fVar20 = (float)FUN_05c9bf94(CONCAT71(uStack_77,cStack_78),0);
        lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        lVar5 = *(long *)(lVar6 + 8);
        fVar18 = fVar22;
        fVar19 = fVar24;
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218();
          lVar6 = *(long *)(*(long *)(param_6 + 0x20) + 0xc0);
        }
        FUN_02b3d498(lVar5,*(undefined8 *)(lVar6 + 0x20),lStack_e8,param_4,0,&cStack_78);
        if (CONCAT71(uStack_77,cStack_78) != 0) {
          fVar20 = fVar15 - fVar20;
          fVar22 = fVar21 - fVar22;
          fVar24 = fVar23 - fVar24;
          fVar16 = (float)FUN_05c9bf94(CONCAT71(uStack_77,cStack_78),0);
          fVar15 = fVar15 - fVar16;
          fVar21 = fVar21 - fVar18;
          fVar23 = fVar23 - fVar19;
          goto LAB_03eb4078;
        }
      }
    }
  }
  if (*(long *)(lStack_a8 + 0x28) == lStack_10) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_03eb4568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


