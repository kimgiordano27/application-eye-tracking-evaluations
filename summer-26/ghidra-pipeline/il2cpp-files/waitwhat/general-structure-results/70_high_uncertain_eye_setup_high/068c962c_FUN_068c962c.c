/*
FUNCTION_NAME: FUN_068c962c
ENTRY_POINT: 068c962c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_068c962c(undefined8 *param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                 long *param_5,long *param_6,long param_7)

{
  int iVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float local_160;
  undefined4 local_140;
  float fStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 uStack_ec;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  if ((DAT_07559211 & 1) == 0) {
    FUN_03188a78(
                Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_070f13a0);
    FUN_03188a78(OVRPlugin_LayerLayout_TypeInfo);
    FUN_03188a78(Photon_Pun_PhotonAnimatorView_<>c__DisplayClass18_0_TypeInfo);
    DAT_07559211 = 1;
  }
  puVar9 = OVRPlugin_LayerLayout_TypeInfo;
  puVar10 = 
  Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo;
  local_c0 = 0;
  fStack_bc = 0.0;
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  local_a8 = 0.0;
  local_b0 = 0.0;
  fStack_ac = 0.0;
  local_e0 = 0;
  local_d8 = 0.0;
  local_d4 = 0.0;
  fStack_c8 = 0.0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  if (param_6 == (long *)0x0) goto LAB_068c9e34;
  lVar14 = *param_6;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)
           Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
         ) {
        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 7) * 0x10 + 0x138);
        goto LAB_068c9738;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_031c0d08(param_6,*(long *)
                                  Oculus_Interaction_PoseDetection_FingerFeatureConfigBuilder_AbductionStateBuilder_TypeInfo
                         ,7);
LAB_068c9738:
  puVar8 = PTR_DAT_070c1b68;
  lVar14 = (*(code *)*puVar11)(param_6,param_5,puVar11[1]);
  bVar2 = *(byte *)(*(long *)puVar9 + 0x130);
  if (*(byte *)(*param_6 + 0x130) < bVar2) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar18 = param_6;
    if (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar9) {
      plVar18 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar9 = PTR_DAT_070f13a0;
  uVar16 = FUN_069d69b8(plVar18,0,0);
  if ((uVar16 & 1) == 0) goto LAB_068c97c4;
  if (plVar18 == (long *)0x0) goto LAB_068c9e34;
  if (((char)plVar18[0x36] == '\0') && ((char)plVar18[0x22] != '\0')) {
    lVar15 = *param_6;
    lVar13 = *(long *)puVar10;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 6) * 0x10 + 0x138);
          goto LAB_068c9ca8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_031c0d08(param_6,lVar13,6);
LAB_068c9ca8:
    uVar12 = (*(code *)*puVar11)(param_6,puVar11[1]);
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar8);
    }
    uVar16 = FUN_069d69b8(lVar14,uVar12,0);
    if ((uVar16 & 1) == 0) goto LAB_068c97c4;
    lVar15 = *param_6;
    lVar13 = *(long *)puVar10;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar13) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar17 + 6) * 0x10 + 0x138);
          goto LAB_068c9d30;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_031c0d08(param_6,lVar13,6);
LAB_068c9d30:
    uVar12 = (*(code *)*puVar11)(param_6,puVar11[1]);
    if (lVar14 == 0) goto LAB_068c9e34;
    uVar16 = FUN_069e954c(lVar14,uVar12,0);
    if ((uVar16 & 1) == 0) goto LAB_068c97c8;
    FUN_068c9e38(&local_140,plVar18,plVar18[0x21]);
    uVar25 = uStack_138;
    param_3 = fStack_13c;
    lVar14 = thunk_FUN_069e7970(lVar14,0);
    if (lVar14 == 0) goto LAB_068c9e34;
    auVar21 = ZEXT416(uVar25);
    FUN_069e515c(lVar14,0);
    uVar25 = auVar21._0_4_;
    FUN_069e5200(lVar14,0);
    iVar1 = *(int *)(*(long *)puVar9 + 0xe4);
  }
  else {
LAB_068c97c4:
    if (lVar14 == 0) goto LAB_068c9e34;
LAB_068c97c8:
    FUN_069e6fbc(lVar14,0);
    uVar25 = param_4._0_4_;
    FUN_069e5200(lVar14,0);
    iVar1 = *(int *)(*(long *)puVar9 + 0xe4);
  }
  if (iVar1 == 0) {
    thunk_FUN_031e5338();
  }
  auVar21 = ZEXT416(uVar25);
  FUN_069e4d6c(&local_c0,0);
  if ((param_7 == 0) ||
     (lVar14 = FUN_069d3a80(param_7,0),
     puVar10 = Photon_Pun_PhotonAnimatorView_<>c__DisplayClass18_0_TypeInfo, lVar14 == 0))
  goto LAB_068c9e34;
  FUN_069e6fbc(lVar14,0);
  auVar28 = ZEXT416(local_c0);
  param_3 = param_3 - fStack_bc;
  fVar39 = auVar21._0_4_ - fStack_b8;
  local_100 = CONCAT44(fStack_bc,local_c0);
  uStack_ec = CONCAT44(local_a8,fStack_ac);
  fStack_f8 = fStack_b8;
  fStack_f4 = fStack_b4;
  fStack_f0 = local_b0;
  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  auVar21 = ZEXT416((uint)fVar39);
  FUN_068c9f08(&local_100);
  lVar14 = FUN_069d3a80(param_7,0);
  if (lVar14 == 0) goto LAB_068c9e34;
  FUN_069e5200(lVar14,0);
  fVar39 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor(0);
  auVar30._4_4_ = local_b0;
  auVar30._0_4_ = fStack_b4;
  auVar30._8_4_ = fStack_ac;
  auVar27._0_4_ = auVar21._0_4_;
  auVar38._8_4_ = auVar28._0_4_;
  fVar22 = local_b0 * auVar38._8_4_;
  fVar23 = local_a8 * auVar38._8_4_;
  auVar29._4_4_ = local_a8;
  auVar29._0_4_ = local_a8;
  auVar29._8_4_ = local_a8;
  auVar29._12_4_ = local_a8;
  auVar30._12_4_ = local_a8;
  auVar30 = NEON_ext(auVar29,auVar30,4,1);
  fVar32 = fVar39 * local_b0;
  fVar35 = param_3 * local_b0;
  auVar21._4_4_ = fVar22;
  auVar21._0_4_ = fStack_b4 * auVar38._8_4_;
  auVar21._8_4_ = fStack_ac * auVar38._8_4_;
  auVar21._12_4_ = fVar23;
  auVar28._4_4_ = fVar22;
  auVar28._0_4_ = fStack_b4 * auVar38._8_4_;
  auVar28._8_4_ = fStack_ac * auVar38._8_4_;
  auVar28._12_4_ = fVar23;
  auVar38 = NEON_ext(auVar21,auVar28,4,1);
  auVar42._4_4_ = fVar32;
  auVar42._0_4_ = auVar27._0_4_ * fStack_b4;
  auVar42._8_4_ = param_3 * fStack_ac;
  auVar42._12_4_ = fVar35;
  auVar43._4_4_ = fVar32;
  auVar43._0_4_ = auVar27._0_4_ * fStack_b4;
  auVar43._8_4_ = param_3 * fStack_ac;
  auVar43._12_4_ = fVar35;
  auVar21 = NEON_ext(auVar42,auVar43,0xc,1);
  auVar27._4_4_ = param_3;
  auVar27._8_4_ = auVar27._0_4_;
  auVar27._12_4_ = fVar39;
  auVar28 = NEON_rev64(auVar27,4);
  auVar38._0_4_ =
       (auVar38._4_4_ + auVar27._0_4_ * auVar30._0_4_ + fVar32) - auVar28._0_4_ * fStack_b4;
  auVar38._4_4_ = 0;
  auVar38._8_4_ = (fVar22 + param_3 * auVar30._8_4_ + auVar21._4_4_) - auVar28._8_4_ * fStack_ac;
  auVar38._12_4_ = ((fVar23 - fVar39 * auVar30._12_4_) - fVar35) - auVar28._12_4_ * fStack_ac;
  uVar24 = 0;
  auVar42 = ZEXT416((uint)auVar38._12_4_);
  auVar21 = auVar38;
  fVar22 = (float)UnityEngine_TextCore_Text_UnicodeLineBreakingRules___ctor(0);
  fVar39 = auVar38._8_4_;
  auVar28 = auVar21;
  auVar30 = auVar42;
  lVar14 = (**(code **)(*param_5 + 0x4c8))(param_5,param_6,*(undefined8 *)(*param_5 + 0x4d0));
  if (lVar14 == 0) goto LAB_068c9e34;
  uVar19 = FUN_069e6fbc(lVar14,0);
  uVar26 = auVar28._0_4_;
  fVar23 = fVar39;
  uVar20 = FUN_069e5200(lVar14,0);
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_069e4d6c(uVar19,fVar39,uVar26,uVar20,fVar23,auVar28._0_4_,auVar30._0_4_,&local_e0,0);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar16 = FUN_069d8404(plVar18,0,0);
  if ((uVar16 & 1) == 0) {
    if (plVar18 == (long *)0x0) goto LAB_068c9e34;
    if (*(char *)((long)plVar18 + 0x1dc) != '\0') goto LAB_068c9a38;
    auVar28 = ZEXT416((uint)fStack_ac);
    auVar21 = ZEXT416((uint)local_a8);
    fVar39 = local_b0;
    fVar32 = (float)FUN_069c57a8(0);
    fVar35 = local_d8;
    fVar22 = (float)local_e0;
    auVar38._8_4_ = local_e0._4_4_;
    fVar40 = auVar28._0_4_;
    fVar23 = fVar39;
    lVar14 = FUN_069d3a80(param_7,0);
    if (lVar14 == 0) goto LAB_068c9e34;
    fVar32 = fVar32 + fVar22;
    fVar39 = fVar39 + auVar38._8_4_;
    fVar40 = fVar40 + fVar35;
    fVar35 = (float)FUN_069e5200(lVar14,0);
    fVar34 = auVar28._0_4_;
    fVar22 = auVar21._0_4_;
    local_160 = fVar23;
  }
  else {
LAB_068c9a38:
    auVar28 = ZEXT416((uint)fStack_cc);
    fVar23 = fStack_d0;
    fVar32 = (float)FUN_069c57a8(0);
    fVar39 = auVar21._0_4_;
    fVar35 = auVar42._0_4_;
    auVar31._4_4_ = fVar39;
    auVar31._0_4_ = auVar38._8_4_;
    auVar3._4_4_ = fStack_d0;
    auVar3._0_4_ = local_d4;
    auVar3._8_4_ = fStack_cc;
    fVar33 = fStack_d0 * fVar35;
    fVar34 = fStack_cc * fVar35;
    fVar36 = fStack_c8 * fVar35;
    auVar31._8_4_ = fVar22;
    auVar31._12_4_ = uVar24;
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = local_d4 * fVar35;
    auVar4._8_4_ = fVar34;
    auVar4._12_4_ = fVar36;
    auVar5._4_4_ = fVar33;
    auVar5._0_4_ = local_d4 * fVar35;
    auVar5._8_4_ = fVar34;
    auVar5._12_4_ = fVar36;
    auVar30 = NEON_ext(auVar4,auVar5,0xc,1);
    auVar41._4_4_ = fStack_c8;
    auVar41._0_4_ = fStack_c8;
    auVar41._8_4_ = fStack_c8;
    auVar41._12_4_ = fStack_c8;
    auVar3._12_4_ = fStack_c8;
    auVar42 = NEON_ext(auVar41,auVar3,4,1);
    fVar35 = fVar39 * fStack_d0;
    fVar37 = auVar38._8_4_ * fStack_d0;
    auVar21 = NEON_ext(auVar31,auVar31,0xc,1);
    auVar6._4_4_ = fVar35;
    auVar6._0_4_ = auVar38._8_4_ * local_d4;
    auVar6._8_4_ = fVar22 * fStack_cc;
    auVar6._12_4_ = fVar37;
    auVar7._4_4_ = fVar35;
    auVar7._0_4_ = auVar38._8_4_ * local_d4;
    auVar7._8_4_ = fVar22 * fStack_cc;
    auVar7._12_4_ = fVar37;
    auVar43 = NEON_ext(auVar6,auVar7,4,1);
    auVar21 = NEON_ext(auVar21,auVar31,8,1);
    fVar40 = auVar28._0_4_ + local_d8;
    fVar34 = (fVar34 + fVar39 * auVar42._4_4_ + auVar43._12_4_) - auVar21._4_4_ * fStack_d0;
    fVar35 = (auVar30._4_4_ + fVar22 * auVar42._8_4_ + fVar35) - auVar21._8_4_ * fStack_cc;
    fVar22 = ((fVar36 - fVar22 * auVar42._12_4_) - fVar37) - auVar21._12_4_ * fStack_cc;
    fVar32 = fVar32 + (float)local_e0;
    fVar39 = fVar23 + local_e0._4_4_;
    local_160 = (fVar33 + auVar38._8_4_ * auVar42._0_4_ + auVar43._4_4_) - auVar21._0_4_ * local_d4;
  }
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar16 = FUN_069d69b8(plVar18,0,0);
  if ((uVar16 & 1) != 0) {
    if (plVar18 == (long *)0x0) goto LAB_068c9e34;
    if ((char)plVar18[0x3a] == '\0') {
      lVar14 = FUN_069d3a80(param_7,0);
      if (lVar14 == 0) goto LAB_068c9e34;
      fVar32 = (float)FUN_069e6fbc(lVar14,0);
      fVar40 = auVar28._0_4_;
      fVar39 = fVar23;
    }
  }
  lVar14 = FUN_069d3a80(param_7,0);
  if (lVar14 != 0) {
    FUN_069e9470(lVar14,0);
    FUN_069c1c74(&local_140,fVar32,fVar39,fVar40,fVar35,local_160,fVar34,fVar22,0);
    param_1[1] = CONCAT44(uStack_134,uStack_138);
    *param_1 = CONCAT44(fStack_13c,local_140);
    param_1[3] = CONCAT44(uStack_124,local_128);
    param_1[2] = CONCAT44(uStack_12c,local_130);
    param_1[5] = uStack_118;
    param_1[4] = local_120;
    param_1[7] = uStack_108;
    param_1[6] = uStack_110;
    return;
  }
LAB_068c9e34:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


