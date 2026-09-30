/*
FUNCTION_NAME: FUN_068b8388
ENTRY_POINT: 068b8388
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


uint FUN_068b8388(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                 byte *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 local_264;
  undefined4 uStack_260;
  undefined8 uStack_25c;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 local_214;
  undefined8 uStack_20c;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  char local_e8 [4];
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_075591e3 & 1) == 0) {
    FUN_03188a78(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo);
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass28_0_TypeInfo)
    ;
    FUN_03188a78(Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo)
    ;
    FUN_03188a78(System_Net_FtpWebRequest_RequestStage_TypeInfo);
    FUN_03188a78(PTR_DAT_07115e38);
    FUN_03188a78(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionConfig_TypeInfo);
    FUN_03188a78(PTR_DAT_07115e30);
    FUN_03188a78(UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo);
    FUN_03188a78(PTR_DAT_07115e28);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_075591e3 = 1;
  }
  local_84 = 0;
  local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_e8[0] = '\0';
  uStack_fc = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_104 = 0;
  uStack_110 = 0;
  uStack_12c = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_134 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_16c = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  local_174 = 0;
  uStack_180 = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  uVar5 = FUN_068c3fa8(param_1,&local_80,&local_84,&local_e0,&local_e4,local_e8);
  if ((uVar5 & 1) == 0) goto LAB_068b8720;
  if (*(char *)(param_1 + 0xc0) == '\0') {
LAB_068b8528:
    lVar6 = *(long *)(param_1 + 0x390);
    if (lVar6 == 0) goto LAB_068b8748;
    if (0 < *(int *)(lVar6 + 0x18)) {
      lVar9 = *(long *)(param_1 + 0x398);
      uVar7 = FUN_042e47a4(lVar6,0,*(undefined8 *)
                                    Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<>c__DisplayClass29_0_TypeInfo
                          );
      if (lVar9 == 0) goto LAB_068b8748;
      uVar8 = FUN_05256c68(lVar9,uVar7,&local_150,
                           *(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo
                          );
      uVar7 = local_150;
      uVar12 = uStack_148;
      uVar13 = uStack_140;
      uVar14 = uStack_12c;
      uVar11 = uStack_138;
      uVar10 = local_134;
      uVar3 = uStack_130;
      if ((uVar8 & 1) != 0) goto LAB_068b8588;
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 0x398);
    lVar6 = FUN_068b06d0(param_1);
    if ((lVar6 == 0) ||
       (uVar7 = FUN_042e47a4(lVar6,0,*(undefined8 *)System_Net_FtpWebRequest_RequestStage_TypeInfo),
       lVar9 == 0)) goto LAB_068b8748;
    uVar8 = FUN_05256c68(lVar9,uVar7,&local_120,
                         *(undefined8 *)
                          UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo
                        );
    uVar7 = local_120;
    uVar12 = uStack_118;
    uVar13 = uStack_110;
    uVar14 = uStack_fc;
    uVar11 = uStack_108;
    uVar10 = local_104;
    uVar3 = uStack_100;
    if ((uVar8 & 1) == 0) goto LAB_068b8528;
LAB_068b8588:
    uStack_1c0 = uVar3;
    local_1c4 = uVar10;
    uStack_1c8 = uVar11;
    local_1e0 = uVar7;
    uStack_1d8 = uVar12;
    uStack_1d0 = uVar13;
    uStack_1bc = uVar14;
    FUN_0466ff7c(&local_80,&local_1e0,*(undefined8 *)PTR_DAT_07115e38);
  }
  puVar2 = UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo;
  puVar1 = PTR_DAT_07115e28;
  if (((char)local_e0 == '\0') || (local_e8[0] == '\0')) {
    if ((char)local_80 == '\0') goto LAB_068b8720;
    FUN_0466ffac(&local_1e0,&local_80,*(undefined8 *)PTR_DAT_07115e28);
    uStack_188 = uStack_1d8;
    local_190 = local_1e0;
    uStack_178 = uStack_1c8;
    uStack_180 = uStack_1d0;
    uStack_16c = uStack_1bc;
    local_174 = local_1c4;
    uStack_170 = uStack_1c0;
    uVar7 = uStack_1d0;
    uVar11 = local_1c4;
    uVar10 = FUN_06a6354c(&local_190,0);
    *(undefined4 *)param_2 = uVar10;
    *(int *)((long)param_2 + 4) = (int)uVar7;
    uVar7 = *(undefined8 *)puVar1;
    *(undefined4 *)(param_2 + 1) = uVar11;
    FUN_0466ffac(&local_230,&local_80,uVar7);
    uStack_188 = uStack_228;
    local_190 = local_230;
    uStack_180 = uStack_220;
    uStack_16c = uStack_20c;
    uVar11 = FUN_06a63564(&local_190,0);
    *(undefined4 *)param_3 = uVar11;
    *(int *)((long)param_3 + 4) = (int)uStack_220;
    *(undefined4 *)(param_3 + 1) = local_214;
    *param_4 = local_84;
    lVar6 = *(long *)(param_1 + 0x30);
    FUN_0466ffac(&local_280,&local_80,*(undefined8 *)puVar1);
    uStack_188 = uStack_278;
    local_190 = local_280;
    uStack_178 = uStack_268;
    uStack_180 = uStack_270;
    uStack_16c = uStack_25c;
    local_174 = local_264;
    uStack_170 = uStack_260;
    uVar7 = FUN_06a634a0(&local_190,0);
    if (lVar6 == 0) {
LAB_068b8748:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar8 = FUN_06858f90(lVar6,uVar7,&local_158,0);
    if ((uVar8 & 1) != 0) {
      bVar4 = FUN_068b4588(param_1,local_158);
      goto LAB_068b8718;
    }
    bVar4 = 0;
  }
  else {
    FUN_046704b4(&local_1e0,&local_e0,
                 *(undefined8 *)
                  UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo);
    *(undefined4 *)(param_2 + 1) = local_1ac;
    *param_2 = local_1b4;
    FUN_046704b4(&local_230,&local_e0,*(undefined8 *)puVar2);
    *param_3 = local_1f8;
    *(undefined4 *)(param_3 + 1) = local_1f0;
    *param_4 = local_e4;
    FUN_046704b4(&local_280,&local_e0,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    bVar4 = FUN_069d69b8(local_280,0,0);
LAB_068b8718:
    bVar4 = bVar4 & 1;
  }
  *param_5 = bVar4;
LAB_068b8720:
  return uVar5 & 1;
}


