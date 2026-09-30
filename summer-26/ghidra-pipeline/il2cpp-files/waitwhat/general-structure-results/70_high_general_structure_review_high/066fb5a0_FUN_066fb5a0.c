/*
FUNCTION_NAME: FUN_066fb5a0
ENTRY_POINT: 066fb5a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066fc0f0) */
/* WARNING: Removing unreachable block (ram,0x066fc000) */
/* WARNING: Removing unreachable block (ram,0x066fbef8) */
/* WARNING: Removing unreachable block (ram,0x066fc184) */

void FUN_066fb5a0(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 extraout_x1;
  char cVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  ulong local_2b0;
  undefined1 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  ulong local_280;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  ulong local_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  ulong local_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined1 *puStack_1e8;
  long local_1e0;
  undefined1 *local_1d8;
  ulong local_1d0;
  undefined1 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e4 [4];
  ulong local_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_ac [4];
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  
  if ((DAT_075582ab & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2278);
    FUN_03188a78(OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo);
    FUN_03188a78(System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1980);
    FUN_03188a78(System_Globalization_Calendar_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(System_Data_LookupNode_TypeInfo);
    FUN_03188a78(System_Net_CloseExState_TypeInfo);
    FUN_03188a78(PTR_DAT_070f13b8);
    FUN_03188a78(System_Net_ListenerPrefix_TypeInfo);
    FUN_03188a78(Sentry_Internal_MainSentryEventProcessor_TypeInfo);
    FUN_03188a78(System_ObsoleteAttribute_TypeInfo);
    FUN_03188a78(Fusion_NetworkProjectConfig_TypeInfo);
    FUN_03188a78(System_Reflection_Emit_OpCodeNames_TypeInfo);
    FUN_03188a78(UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo);
    FUN_03188a78(Oculus_Interaction_OneGrabPhysicsJointTransformer_TypeInfo);
    DAT_075582ab = 1;
  }
  local_a8 = 0;
  local_ac[0] = 0;
  local_c0 = 0;
  local_e4[0] = 0;
  puStack_d8 = (undefined1 *)0x0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_f0 = 0;
  puStack_108 = (undefined1 *)0x0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_90 = param_1;
  local_80 = param_2;
  if ((*param_3 == 0) ||
     (lVar15 = FUN_066c5ab4(*param_3,*(undefined8 *)
                                      System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo),
     puVar3 = PTR_DAT_070c1b68, local_a8 = lVar15, lVar15 == 0)) {
LAB_066fc858:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar7 = FUN_066e69a4(lVar15,0);
  if (*(char *)(lVar15 + 0x1c8) == '\0') {
    uVar8 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_066fc858;
    uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar8 = FUN_069d69b8(uVar24,0,0);
  }
  if ((*(long *)(param_1 + 0x1b0) == 0) ||
     (plVar16 = *(long **)(*(long *)(param_1 + 0x1b0) + 0x38), plVar16 == (long *)0x0))
  goto LAB_066fc858;
  iVar14 = *(int *)(lVar15 + 0x1cc);
  iVar9 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
  puVar4 = System_Globalization_Calendar_TypeInfo;
  lVar23 = *(long *)(param_1 + 0x1a0);
  if (iVar9 == 1) {
    if (lVar23 == 0) goto LAB_066fc858;
    puVar21 = (undefined8 *)(lVar23 + 0x20);
  }
  else {
    if (lVar23 == 0) goto LAB_066fc858;
    puVar21 = (undefined8 *)(lVar23 + 0x30);
  }
  if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_066fc858;
  uVar24 = *puVar21;
  uVar10 = TMPro_TMP_Text__SetText(*(long *)(param_1 + 0x1b0),0);
  if (((uVar7 | uVar10 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar10 = FUN_069d69b8(uVar24,0,0);
  }
  else {
    uVar10 = 0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar23 = FUN_0660bdac(0);
  if (lVar23 == 0) goto LAB_066fc858;
  uVar17 = FUN_0660bf8c(lVar23,0);
  if ((uVar17 & 1) == 0) {
    cVar5 = *(char *)(param_1 + 0x249);
  }
  else {
    cVar5 = '\0';
  }
  if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_066fc858;
  uVar17 = FUN_066efcac(*(long *)(param_1 + 0x1c0),0);
  if ((uVar17 & 1) == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(param_1 + 0x248);
  }
  if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_066fc858;
  uVar11 = FUN_066ef5d0(*(long *)(param_1 + 0x1b8),0);
  if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_066fc858;
  uVar12 = FUN_066ef7d0(*(long *)(param_1 + 0x1c8),0);
  if (((uVar7 | uVar11 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_070c2278 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar11 = FUN_06986514(0);
  }
  else {
    uVar11 = 0;
  }
  uVar12 = uVar12 ^ 1 | uVar7;
  uVar13 = FUN_066e7044(lVar15,0);
  uVar17 = FUN_066e7034(lVar15,0);
  if (((uVar17 & 1) != 0) && ((uVar13 & 1) == 0)) {
    if (*(int *)(*(long *)Fusion_NetworkProjectConfig_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06732fd8(lVar15,0,0);
  }
  uVar1 = uVar8 & 1;
  if (iVar14 == 2) {
    uVar1 = uVar1 + 1;
  }
  iVar9 = uVar1 + (uVar10 & 1);
  if (cVar5 != '\0') {
    iVar9 = iVar9 + 1;
  }
  cVar22 = *(char *)(param_1 + 0x24b);
  iVar9 = iVar9 + ((uVar12 ^ 0xffffffff) & 1) + (uVar11 & 1) + (uVar13 & 1);
  local_88 = CONCAT44(local_88._4_4_,iVar9);
  if ((cVar22 != '\0') && (iVar9 != 0)) {
    plVar16 = *(long **)(lVar15 + 0x1d8);
    if (plVar16 == (long *)0x0) goto LAB_066fc858;
    (**(code **)(*plVar16 + 0x298))(plVar16,0,*(undefined8 *)(*plVar16 + 0x2a0));
    cVar22 = *(char *)(param_1 + 0x24b);
  }
  if (cVar22 == '\0') {
    local_a0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_98 = 0;
  }
  else {
    if (*(long *)(lVar15 + 0x1d8) == 0) goto LAB_066fc858;
    local_a0 = FUN_066d427c(*(long *)(lVar15 + 0x1d8),0);
    if (*(char *)(param_1 + 0x24b) == '\0') {
      uStack_98 = 0;
    }
    else {
      plVar16 = *(long **)(lVar15 + 0x1d8);
      if (plVar16 == (long *)0x0) goto LAB_066fc858;
      uStack_98 = (**(code **)(*plVar16 + 0x1c8))(plVar16,param_2,*(undefined8 *)(*plVar16 + 0x1d0))
      ;
    }
  }
  puVar3 = System_ObsoleteAttribute_TypeInfo;
  lVar23 = *(long *)System_ObsoleteAttribute_TypeInfo;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar23);
    lVar23 = *(long *)puVar3;
  }
  uVar28 = *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0xbc);
  if (DAT_07547007 == '\0') {
    FUN_03188a78(PTR_DAT_070d2c80);
    DAT_07547007 = '\x01';
  }
  lVar23 = *(long *)(*(long *)PTR_DAT_070d2c80 + 0xb8);
  uStack_188 = *(undefined8 *)(lVar23 + 0x48);
  local_190 = *(undefined8 *)(lVar23 + 0x40);
  uStack_178 = *(undefined8 *)(lVar23 + 0x58);
  uStack_180 = *(undefined8 *)(lVar23 + 0x50);
  uStack_168 = *(undefined8 *)(lVar23 + 0x68);
  local_170 = *(undefined8 *)(lVar23 + 0x60);
  uStack_158 = *(undefined8 *)(lVar23 + 0x78);
  uStack_160 = *(undefined8 *)(lVar23 + 0x70);
  FUN_0699af94(&local_150,&local_190,1,0);
  if (param_2 == 0) goto LAB_066fc858;
  puStack_1c8 = puStack_148;
  local_1d0 = local_150;
  uStack_1b8 = uStack_138;
  uStack_1c0 = uStack_140;
  uStack_1a8 = uStack_128;
  local_1b0 = local_130;
  uStack_198 = uStack_118;
  uStack_1a0 = uStack_120;
  FUN_069fee58(param_2,uVar28,&local_1d0,0);
  lVar23 = local_80;
  if ((uVar8 & 1) != 0) {
    uVar24 = FUN_03b9c340(0x12,*(undefined8 *)System_Data_LookupNode_TypeInfo);
    FUN_065e0fac(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    uVar18 = FUN_066fd050(param_1,&local_a0);
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x10);
    if (*(int *)(*(long *)OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0662dd0c(lVar23,uVar24,uVar18,2,0,uVar27,0,0);
    FUN_066fd168(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_065e0fb4(local_ac,0);
  }
  lVar23 = local_80;
  if (iVar14 == 2) {
    uVar24 = FUN_03b9c340(0x13,*(undefined8 *)System_Data_LookupNode_TypeInfo);
    FUN_065e0fac(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    uVar18 = FUN_066fd050(param_1,&local_a0);
    FUN_066fd288(param_1,param_3 + 1,lVar23,uVar24,uVar18);
    FUN_066fd168(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_065e0fb4(local_ac,0);
  }
  puVar21 = (undefined8 *)System_Data_LookupNode_TypeInfo;
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(param_1 + 0x1b0) == 0) ||
       (plVar16 = *(long **)(*(long *)(param_1 + 0x1b0) + 0x38), plVar16 == (long *)0x0))
    goto LAB_066fc858;
    iVar14 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
    lVar23 = local_80;
    uVar28 = 0x14;
    if (iVar14 != 1) {
      uVar28 = 0x15;
    }
    uVar24 = FUN_03b9c340(uVar28,*puVar21);
    FUN_065e0fac(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    uVar18 = FUN_066fd050(param_1,&local_a0);
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_066fd834(*(undefined4 *)(local_a8 + 300),*(undefined4 *)(local_a8 + 0x130),
                 *(undefined4 *)(local_a8 + 0x134),*(undefined4 *)(local_a8 + 0x138),param_1,
                 param_3 + 1,lVar23,uVar24,uVar18);
    FUN_066fd168(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_065e0fb4(local_ac,0);
  }
  lVar23 = local_80;
  if ((uVar13 & 1) != 0) {
    uVar24 = FUN_03b9c340(0x16,*puVar21);
    FUN_065e0fac(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar18 = uStack_98;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(long *)(param_1 + 0x110) == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x18);
    }
    uVar26 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x60);
    if (*(int *)(*(long *)Fusion_NetworkProjectConfig_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_067332ac(lVar23,uVar26,param_3 + 1,uVar24,uVar18,uVar27,0);
    puVar21 = (undefined8 *)System_Data_LookupNode_TypeInfo;
    FUN_066fd168(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_065e0fb4(local_ac,0);
  }
  lVar23 = local_80;
  if ((uVar11 & 1) != 0) {
    uVar24 = FUN_03b9c340(0x17,*puVar21);
    FUN_065e0fac(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    uVar18 = FUN_066fd050(param_1,&local_a0);
    FUN_066fd930(param_1,lVar23,uVar24,uVar18,*(undefined8 *)(param_1 + 0x110),param_3 + 1);
    FUN_066fd168(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_065e0fb4(local_ac,0);
  }
  lVar23 = local_80;
  if ((uVar12 & 1) == 0) {
    uVar24 = FUN_03b9c340(0x18,*puVar21);
    FUN_065e0fac(local_ac,lVar23,uVar24,0);
    lVar23 = local_80;
    uVar24 = local_a0;
    local_150 = 0;
    puStack_148 = local_ac;
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar27 = *(undefined8 *)(local_a8 + 0xd8);
    uVar18 = FUN_066fd050(param_1,&local_a0);
    FUN_066fdbc8(param_1,uVar27,lVar23,uVar24,uVar18);
    FUN_066fd168(param_1,lVar15 + 0x1d8,&local_a0);
    FUN_065e0fb4(local_ac,0);
  }
  lVar23 = local_80;
  uVar24 = FUN_03b9c340(0x19,*puVar21);
  FUN_065e0fac(local_ac,lVar23,uVar24,0);
  local_1e0 = 0;
  local_1d8 = local_ac;
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar23 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x78);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  thunk_FUN_069a5650(lVar23,0,0);
  if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar8 = FUN_066e41ec(*(long *)(param_1 + 0x1d0),0);
  if (*(long *)(param_1 + 0x1c0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar10 = FUN_066efcac(*(long *)(param_1 + 0x1c0),0);
  lVar23 = local_80;
  if (((uVar8 | uVar10) & 1) != 0) {
    uVar24 = FUN_03b9c340(0x1a,*puVar21);
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_065e0fac(&local_150,lVar23,uVar24,0);
    local_e4[0] = (undefined1)local_150;
    puStack_148 = local_e4;
    local_150 = 0;
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_066fde08(param_1,local_80,local_a0,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78),
                 *(undefined1 *)(local_a8 + 399));
    FUN_02d4cb38(&local_150);
  }
  lVar23 = local_80;
  if (cVar2 != '\0') {
    uVar24 = FUN_03b9c340(0x1d,*puVar21);
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_065e0fac(&local_150,lVar23,uVar24,0);
    local_e4[0] = (undefined1)local_150;
    puStack_1e8 = local_e4;
    local_1f0 = 0;
    if (*(long *)(param_1 + 0x1c0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x48);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar8 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
    if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x78);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar14 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
    lVar23 = local_80;
    if (iVar14 < 0) {
      iVar14 = iVar14 + 1;
    }
    uVar10 = uVar8;
    if (iVar14 >> 1 <= (int)uVar8) {
      uVar10 = iVar14 >> 1;
    }
    uVar11 = 0;
    if (-1 < (int)uVar8) {
      uVar11 = uVar10;
    }
    if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar24 = *(undefined8 *)(local_a8 + 0xd8);
    FUN_0661c5f0(&local_150,local_a0,0);
    if (*(long *)(param_1 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar8 = *(uint *)(*(long *)(param_1 + 0x140) + 0x18);
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    FUN_066fe940(param_1,uVar24,lVar23);
    FUN_02d4cb38(&local_1f0);
  }
  if (cVar5 != '\0') {
    if (*(long *)(param_1 + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar8 = FUN_066ef7d0(*(long *)(param_1 + 0x1c8),0);
    uVar29 = 0x3f800000;
    uVar28 = 0x3f800000;
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar16 = *(long **)(*(long *)(param_1 + 0x1c8) + 0x38);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar28 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
      if (*(long *)(param_1 + 0x1c8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar16 = *(long **)(*(long *)(param_1 + 0x1c8) + 0x40);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar29 = (**(code **)(*plVar16 + 0x218))(plVar16,*(undefined8 *)(*plVar16 + 0x220));
    }
    lVar23 = local_80;
    uVar24 = FUN_03b9c340(0x1b,*puVar21);
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_065e0fac(&local_150,lVar23,uVar24,0);
    lVar23 = local_80;
    puStack_1e8 = local_e4;
    local_1f0 = 0;
    local_e4[0] = (undefined1)local_150;
    FUN_0661c5f0(&local_150,local_a0,0);
    FUN_066fef70(uVar28,uVar29,param_1,&local_a8,lVar23);
    FUN_02d4cb38(&local_1f0);
    lVar23 = local_80;
    uVar24 = FUN_03b9c340(0x1c,*puVar21);
    local_150 = local_150 & 0xffffffffffffff00;
    FUN_065e0fac(&local_150,lVar23,uVar24,0);
    lVar23 = local_80;
    puStack_1e8 = local_e4;
    local_1f0 = 0;
    local_e4[0] = (undefined1)local_150;
    FUN_0661c5f0(&local_150,local_a0,0);
    local_200 = local_130;
    puStack_218 = puStack_148;
    local_220 = local_150;
    uStack_208 = uStack_138;
    uStack_210 = uStack_140;
    FUN_066ff5c8(uVar28,uVar29,param_1,&local_a8,lVar23,&local_220,uVar8 & 1);
    FUN_02d4cb38(&local_1f0);
  }
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_066ffd34(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78),uVar7 & 1);
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_06700030(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78));
  lVar23 = local_a8;
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_06700124(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78),
               *(undefined8 *)(local_a8 + 0x1a0));
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_06700370(param_1,extraout_x1,param_3,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78));
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_067006cc(param_1,lVar23,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78));
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_0670077c(param_1,lVar23,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78));
  uVar17 = FUN_066e6808(lVar23,0);
  if (((uVar17 & 1) != 0) && (*(char *)(param_1 + 0x246) != '\0')) {
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x78);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar17 = FUN_069a415c(lVar19,*(undefined8 *)
                                  Oculus_Interaction_OneGrabPhysicsJointTransformer_TypeInfo,0);
  }
  uVar17 = FUN_066fd00c(uVar17,lVar23);
  if ((uVar17 & 1) != 0) {
    if (*(char *)(param_1 + 0x245) == '\0') {
      iVar14 = (uint)*(byte *)(param_1 + 0x246) << 1;
    }
    else {
      iVar14 = 0;
    }
    auVar30 = FUN_066e6b30(lVar23,0);
    uVar28 = FUN_066e6c28(lVar23,0);
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
    uVar7 = FUN_066e6cb8(lVar23,0);
    FUN_06700818(param_1,auVar30._0_8_,auVar30._8_8_,uVar28,uVar24,iVar14,uVar7 & 1);
  }
  if (*(char *)(param_1 + 0x247) != '\0') {
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar19 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x78);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_069a415c(lVar19,*(undefined8 *)System_Reflection_Emit_OpCodeNames_TypeInfo,0);
  }
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
  cVar5 = *(char *)(lVar23 + 399);
  if (*(int *)(*(long *)PTR_DAT_070f1980 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_066337dc(uVar24,*(undefined8 *)UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo,
               cVar5 != '\0',0);
  puVar3 = Sentry_Internal_MainSentryEventProcessor_TypeInfo;
  if (*(int *)(*(long *)Sentry_Internal_MainSentryEventProcessor_TypeInfo + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar19 = FUN_066d38e4(lVar23,0);
  if (lVar19 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = thunk_FUN_066bd314(lVar19,*(undefined1 *)(lVar23 + 0x1e0),0);
    uVar7 = uVar7 & 1;
  }
  lVar20 = *(long *)puVar3;
  lVar25 = *(long *)(param_1 + 0xf8);
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar20 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_070f13b8;
  if (lVar25 == **(long **)(lVar20 + 0xb8)) {
    iVar14 = (uint)*(byte *)(lVar23 + 0x18c) << 1;
  }
  else {
    iVar14 = 2;
  }
  if (*(int *)(*(long *)PTR_DAT_070f13b8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_069f5c88(&local_150,2,0);
  local_c0 = local_130;
  puStack_d8 = puStack_148;
  local_e0 = local_150;
  uStack_c8 = uStack_138;
  uStack_d0 = uStack_140;
  if (*(long *)(lVar23 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar17 = UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass12_0__<CreateMipMapShowStatusCodeToggle>b__0
                     (*(long *)(lVar23 + 0x1a0),0);
  if ((uVar17 & 1) != 0) {
    lVar20 = *(long *)(lVar23 + 0x1a0);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    puStack_d8 = *(undefined1 **)(lVar20 + 0x40);
    local_e0 = *(ulong *)(lVar20 + 0x38);
    uStack_c8 = *(undefined8 *)(lVar20 + 0x50);
    uStack_d0 = *(undefined8 *)(lVar20 + 0x48);
    local_c0 = *(undefined8 *)(lVar20 + 0x58);
  }
  if (*(char *)(param_1 + 0x24b) == '\0') {
    if (*(char *)(lVar23 + 0x1e0) == '\0') {
      lVar20 = *(long *)(param_1 + 0xf8);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      puStack_148 = *(undefined1 **)(lVar20 + 0x30);
      local_150 = *(ulong *)(lVar20 + 0x28);
      uStack_138 = *(undefined8 *)(lVar20 + 0x40);
      uStack_140 = *(undefined8 *)(lVar20 + 0x38);
      local_130 = *(undefined8 *)(lVar20 + 0x48);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      local_230 = local_130;
      puStack_248 = puStack_148;
      local_250 = local_150;
      uStack_238 = uStack_138;
      uStack_240 = uStack_140;
      local_260 = local_c0;
      puStack_278 = puStack_d8;
      local_280 = local_e0;
      uStack_268 = uStack_c8;
      uStack_270 = uStack_d0;
      uVar17 = FUN_069f6130(&local_250,&local_280,0);
      if ((uVar17 & 1) == 0) {
        cVar5 = *(char *)(param_1 + 0x245);
      }
      else {
        cVar5 = '\x01';
      }
    }
    else {
      cVar5 = '\x01';
    }
    lVar20 = local_80;
    uVar24 = local_a0;
    plVar16 = (long *)PTR_DAT_070c1b68;
    cVar5 = cVar5 != '\0';
    *(char *)(param_1 + 0x24a) = cVar5;
    if (*(char *)(param_1 + 0x24b) == '\0') {
      uVar18 = FUN_066fd050(param_1,&local_a0);
      puVar3 = OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo;
      if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
      if (*(int *)(*(long *)OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0662dd0c(lVar20,uVar24,uVar18,iVar14,0,uVar27,0,0);
      lVar15 = local_80;
      uVar24 = FUN_066fd050(param_1,&local_a0);
      lVar23 = *(long *)(param_1 + 0xf8);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar18 = *(undefined8 *)(param_1 + 0x260);
      if (*(long *)(lVar23 + 0x18) == 0) {
        bVar6 = false;
      }
      else {
        iVar14 = FUN_069b1268(*(long *)(lVar23 + 0x18),0);
        bVar6 = iVar14 == 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0662dd0c(lVar15,uVar24,lVar23,2,0,uVar18,bVar6,0);
      goto LAB_066fc820;
    }
  }
  else {
    cVar5 = *(char *)(param_1 + 0x24a);
    plVar16 = (long *)PTR_DAT_070c1b68;
  }
  lVar20 = local_80;
  uVar24 = local_a0;
  if (cVar5 == '\0') {
    if (*(char *)(param_1 + 0x245) == '\0') {
      plVar16 = *(long **)(lVar15 + 0x1d8);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      (**(code **)(*plVar16 + 0x298))(plVar16,1,*(undefined8 *)(*plVar16 + 0x2a0));
      plVar16 = *(long **)(lVar15 + 0x1d8);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uStack_98 = (**(code **)(*plVar16 + 0x1c8))
                            (plVar16,local_80,*(undefined8 *)(*plVar16 + 0x1d0));
    }
    lVar23 = local_80;
    uVar18 = uStack_98;
    uVar24 = local_a0;
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
    if (*(int *)(*(long *)OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0662dd0c(lVar23,uVar24,uVar18,iVar14,0,uVar27,0,0);
    if (*(long *)(lVar15 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    *(undefined8 *)(*(long *)(lVar15 + 0x1d8) + 0x118) = uStack_98;
    FUN_066fd168(param_1,lVar15 + 0x1d8,&local_a0);
  }
  else if (uVar7 == 0) {
    uVar24 = *(undefined8 *)(lVar23 + 0xf0);
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar17 = FUN_069d69b8(uVar24,0,0);
    local_290 = local_c0;
    local_2b0 = local_e0;
    puStack_2a8 = puStack_d8;
    uStack_2a0 = uStack_d0;
    uStack_298 = uStack_c8;
    if ((uVar17 & 1) != 0) {
      local_130 = 0;
      puStack_148 = (undefined1 *)0x0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      FUN_069f5a18(&local_150,*(undefined8 *)(lVar23 + 0xf0),0);
      local_290 = local_130;
      local_2b0 = local_150;
      puStack_2a8 = puStack_148;
      uStack_2a0 = uStack_140;
      uStack_298 = uStack_138;
    }
    local_110 = local_2b0;
    puStack_108 = puStack_2a8;
    uStack_100 = uStack_2a0;
    uStack_f8 = uStack_298;
    local_f0 = local_290;
    FUN_0661e448(&local_2b0,0);
    lVar19 = local_80;
    uVar24 = local_a0;
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
    uVar18 = **(undefined8 **)(*(long *)System_Net_CloseExState_TypeInfo + 0xb8);
    if (*(int *)(*(long *)System_Net_ListenerPrefix_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06725a8c(lVar19,lVar23,uVar24,uVar18,iVar14,0,uVar27,0,0);
    if (*(long *)(lVar15 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    *(undefined8 *)(*(long *)(lVar15 + 0x1d8) + 0x118) = uVar18;
  }
  else {
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    puVar21 = (undefined8 *)FUN_066bd2fc(lVar19,0);
    if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar27 = *puVar21;
    uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
    if (*(int *)(*(long *)OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo);
    }
    FUN_0662dd0c(lVar20,uVar24,uVar27,0,0,uVar18,0,0);
    lVar15 = *(long *)(lVar15 + 0x1d8);
    puVar21 = (undefined8 *)FUN_066bd2fc(lVar19,0);
    uVar24 = *puVar21;
    puVar21 = (undefined8 *)FUN_066bd304(lVar19,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_066dafd0(lVar15,uVar24,*puVar21,0);
  }
LAB_066fc820:
  lVar15 = local_1e0;
  FUN_065e0fb4(local_1d8,0);
  if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd0(lVar15);
  }
  return;
}


