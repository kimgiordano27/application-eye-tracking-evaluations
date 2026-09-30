/*
FUNCTION_NAME: FUN_0670a8c0
ENTRY_POINT: 0670a8c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0670a8c0(long param_1,undefined8 param_2,long param_3,undefined1 (*param_4) [16],
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_70 [12];
  
  puVar6 = PTR_DAT_070f5ad8;
  if ((bRam00000000075582d3 & 1) == 0) {
    FUN_03188a78(System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo);
    FUN_03188a78(Sentry_Internal_MainSentryEventProcessor_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2ff8);
    FUN_03188a78(System_Net_Mail_MailAddress_TypeInfo);
    FUN_03188a78(PTR_DAT_070f5ad8);
    FUN_03188a78(System_Security_Cryptography_Oid_TypeInfo);
    FUN_03188a78(OVRScreenFade_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_OnCullingCompleteCallback_TypeInfo);
    FUN_03188a78(UnityEditor_Analytics_PackageManagerEmbedPackageAnalytic_TypeInfo);
    FUN_03188a78(Best_HTTP_OnHeaderEnumerationDelegate_TypeInfo);
    FUN_03188a78(System_Data_OperatorInfo_TypeInfo);
    FUN_03188a78(System_Data_Operators_TypeInfo);
    FUN_03188a78(Oculus_Interaction_Input_OneEuroFilter_TypeInfo);
    FUN_03188a78(Oculus_Interaction_OneGrabPhysicsJointTransformer_TypeInfo);
    bRam00000000075582d3 = 1;
  }
  auStack_70._8_4_ = 0;
  auStack_70._0_8_ = 0;
  uStack_80 = 0;
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  auStack_d0._0_8_ = 0;
  auStack_d0._8_8_ = 0;
  auStack_e0._0_8_ = 0;
  auStack_e0._8_8_ = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar15 = FUN_065d0c30(0);
  puVar7 = System_Security_Cryptography_Oid_TypeInfo;
  puVar6 = OVRScreenFade_TypeInfo;
  auVar4._8_4_ = auStack_70._8_4_;
  auVar4._0_8_ = auStack_70._0_8_;
  if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x10), auStack_70 = auVar4, lVar15 == 0)) {
LAB_0670aef8:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar16 = FUN_03cf9308(lVar15,*(undefined8 *)OVRScreenFade_TypeInfo);
  uVar19 = *(undefined8 *)puVar7;
  *(undefined8 *)(param_1 + 0x200) = uVar16;
  uVar16 = FUN_03cf9308(lVar15,uVar19);
  uVar19 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x208) = uVar16;
  uVar16 = FUN_03cf9308(lVar15,uVar19);
  *(undefined8 *)(param_1 + 0x200) = uVar16;
  if (param_3 == 0) goto LAB_0670aef8;
  lVar15 = FUN_066c5ab4(param_3,*(undefined8 *)
                                 System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo);
  auVar5._8_4_ = auStack_70._8_4_;
  auVar5._0_8_ = auStack_70._0_8_;
  if ((*(long *)(param_1 + 0x1a0) == 0) ||
     (lVar22 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x80), auStack_70 = auVar5, lVar22 == 0))
  goto LAB_0670aef8;
  thunk_FUN_069a5650(lVar22,0,0);
  auStack_70 = FUN_0670da50(0);
  *(undefined2 *)(param_1 + 0x244) = 1;
  *(byte *)(param_1 + 0x246) = param_7 & 1;
  if (*(long *)(param_1 + 0x208) == 0) goto LAB_0670aef8;
  uVar17 = TMPro_TMP_Text__SetText(*(long *)(param_1 + 0x208),0);
  if ((uVar17 & 1) == 0) {
    if (lVar15 == 0) goto LAB_0670aef8;
  }
  else {
    FUN_069a415c(lVar22,*(undefined8 *)System_Data_OperatorInfo_TypeInfo,0);
    if (lVar15 == 0) goto LAB_0670aef8;
    FUN_0671bbe8(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x208),
                 *(undefined4 *)(lVar15 + 0x160),*(undefined4 *)(lVar15 + 0x164),lVar22,0);
  }
  if (*(char *)(lVar15 + 0x1c9) != '\0') {
    FUN_069a415c(lVar22,*(undefined8 *)System_Data_Operators_TypeInfo,0);
    uVar13 = FUN_0671b9f0(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x220),
                          *(undefined4 *)(lVar15 + 0x160),*(undefined4 *)(lVar15 + 0x164),lVar22,0);
    *(undefined4 *)(param_1 + 0x220) = uVar13;
  }
  uVar17 = FUN_066e6808(lVar15,0);
  if (((uVar17 & 1) != 0) && (*(char *)(param_1 + 0x246) != '\0')) {
    uVar17 = FUN_069a415c(lVar22,*(undefined8 *)
                                  Oculus_Interaction_OneGrabPhysicsJointTransformer_TypeInfo,0);
  }
  puVar6 = Sentry_Internal_MainSentryEventProcessor_TypeInfo;
  auStack_70._8_4_ = 0;
  bVar10 = FUN_066fd00c(uVar17,lVar15);
  auStack_70._0_8_ =
       CONCAT44(auStack_70._4_4_,CONCAT13(bVar10,auStack_70._0_3_)) & 0xffffffff01ffffff;
  if ((bVar10 & 1) != 0) {
    uVar23 = (uint)*(byte *)(param_1 + 0x246) << 1;
    if (*(char *)(lVar15 + 0x1ac) == '\0') {
      uVar23 = uVar23 | 1;
    }
    auStack_70._8_4_ = uVar23;
    auVar24 = FUN_066e6b30(lVar15,0);
    uVar13 = FUN_066e6c28(lVar15,0);
    uVar14 = FUN_066e6cb8(lVar15,0);
    FUN_06700818(param_1,auVar24._0_8_,auVar24._8_8_,uVar13,lVar22,uVar23,uVar14 & 1);
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar18 = FUN_066d38e4(lVar15,0);
  uVar11 = 0;
  if (lVar18 != 0) {
    uVar11 = thunk_FUN_066bd314(lVar18,*(undefined1 *)(lVar15 + 0x1e0),0);
  }
  iVar2 = *(int *)(lVar15 + 0x1cc);
  cVar3 = *(char *)(lVar15 + 399);
  auStack_70._0_8_ =
       CONCAT35(auStack_70._5_3_,CONCAT14(uVar11,auStack_70._0_4_)) & 0xffffff01ffffffff;
  auStack_70[5] = cVar3;
  if (*(int *)(lVar15 + 0x170) == 1) {
    bVar9 = *(int *)(lVar15 + 0x174) == 2;
  }
  else {
    bVar9 = false;
  }
  auStack_70[1] = bVar9;
  auStack_70[0] = iVar2 == 1;
  uVar17 = FUN_066e7044(lVar15,0);
  if ((uVar17 & 1) == 0) {
LAB_0670ac88:
    bVar12 = 0;
  }
  else {
    bVar1 = bVar9;
    if (*(float *)(lVar15 + 0x224) <= 0.0) {
      bVar1 = true;
    }
    if (bVar1 != false) goto LAB_0670ac88;
    bVar12 = FUN_066e7158(lVar15,0);
    bVar12 = bVar12 ^ 1;
  }
  puVar6 = System_Net_Mail_MailAddress_TypeInfo;
  uStack_80 = *(undefined4 *)(lVar15 + 0x128);
  uStack_b0 = *(undefined8 *)(lVar15 + 0xf8);
  uStack_a0 = *(undefined8 *)(lVar15 + 0x108);
  uStack_88 = *(undefined8 *)(lVar15 + 0x120);
  uStack_90 = *(undefined8 *)(lVar15 + 0x118);
  auStack_70._0_8_ =
       CONCAT53(auStack_70._3_5_,CONCAT12(bVar12,auStack_70._0_2_)) & 0xffffffffff01ffff;
  uStack_a8 = CONCAT44((int)((ulong)*(undefined8 *)(lVar15 + 0x100) >> 0x20),1);
  uStack_98 = *(ulong *)(lVar15 + 0x110) & 0xffffffff;
  if ((bVar10 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_070f2ff8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar13 = FUN_06757348(0);
    FUN_069bba54(&uStack_b0,uVar13,0);
  }
  puVar8 = UnityEditor_Analytics_PackageManagerEmbedPackageAnalytic_TypeInfo;
  puVar7 = Oculus_Interaction_Input_OneEuroFilter_TypeInfo;
  uStack_118 = uStack_a8;
  uStack_120 = uStack_b0;
  uStack_108 = uStack_98;
  uStack_110 = uStack_a0;
  uStack_f8 = uStack_88;
  uStack_100 = uStack_90;
  uStack_f0 = uStack_80;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uStack_158 = uStack_118;
  uStack_160 = uStack_120;
  uStack_148 = uStack_108;
  uStack_150 = uStack_110;
  uStack_138 = uStack_f8;
  uStack_140 = uStack_100;
  uStack_130 = uStack_f0;
  auStack_c0 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_0000015F_BurstDirectCall__GetFunctionPointer
                         (param_2,&uStack_160,*(undefined8 *)puVar8,1,0,1,0);
  uStack_198 = *(undefined8 *)(lVar15 + 0x160);
  uStack_184 = *(undefined8 *)(lVar15 + 0x10c);
  uStack_18c = *(undefined8 *)(lVar15 + 0x104);
  uStack_170 = *(undefined8 *)(lVar15 + 0x120);
  uStack_178 = *(undefined8 *)(lVar15 + 0x118);
  uStack_168 = *(undefined4 *)(lVar15 + 0x128);
  uStack_190 = 1;
  uStack_17c = 0;
  auStack_d0 = UnityEngine_XR_Hands_Gestures_XRHandOrientationUtility_CheckDirectionAlignment_0000015F_BurstDirectCall__GetFunctionPointer
                         (param_2,&uStack_198,*(undefined8 *)puVar7,1,0,1,0);
  auStack_e0._8_8_ = *(undefined8 *)(*param_4 + 8);
  auStack_e0._0_8_ = *(undefined8 *)*param_4;
  auVar24 = *param_4;
  iVar20 = *(int *)(lVar15 + 0x170);
  if (iVar20 == 0) {
    puVar21 = (undefined8 *)Best_HTTP_OnHeaderEnumerationDelegate_TypeInfo;
    auStack_e0 = *param_4;
    if (iVar2 != 1) goto LAB_0670aeb8;
  }
  else {
    if (iVar2 == 1) {
      bVar9 = true;
    }
    auVar24 = *param_4;
    if (bVar9 == true) {
      FUN_067096e4(param_1,param_2,lVar15,auStack_e0,auStack_c0,auStack_70);
      iVar20 = *(int *)(lVar15 + 0x170);
      auStack_70._0_8_ = auStack_70._0_8_ & 0xffffffffffffff00;
      auVar24 = auStack_c0;
    }
    if (iVar20 == 2) {
      auStack_70[2] = 0;
      goto LAB_0670aeb8;
    }
    if (iVar20 != 1) goto LAB_0670aeb8;
    auStack_e0 = auVar24;
    if (*(int *)(lVar15 + 0x174) == 2) {
      FUN_06709d24(param_1,param_2,auStack_e0,auStack_d0,cVar3 != '\0');
      auVar24 = auStack_d0;
      goto LAB_0670aeb8;
    }
    if ((*(int *)(lVar15 + 0x174) != 1) ||
       (puVar21 = (undefined8 *)UnityEngine_Rendering_OnCullingCompleteCallback_TypeInfo,
       (bVar12 & 1) != 0)) goto LAB_0670aeb8;
  }
  FUN_069a415c(lVar22,*puVar21,0);
  auVar24 = auStack_e0;
LAB_0670aeb8:
  auStack_e0 = auVar24;
  FUN_0670a20c(param_1,param_2,lVar15,auStack_e0,param_5,param_6,auStack_70);
  return;
}


