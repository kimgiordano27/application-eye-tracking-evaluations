/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.SpaceWarpFeature$$SetAppSpaceRotation
ENTRY_POINT: 060c98d4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__SetAppSpaceRotation(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puVar6 = Oculus_Platform_Request<AchievementProgressList>_TypeInfo;
  puVar5 = PTR_DAT_06aaae90;
  puVar4 = PTR_DAT_06aaada0;
  puVar3 = PTR_DAT_06aa7368;
  puVar2 = PTR_DAT_06a41510;
  puVar1 = PTR_DAT_06a41508;
  if ((DAT_06e951e3 & 1) == 0) {
    FUN_02e3ca1c(Oculus_Platform_Request<AchievementUpdate>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06aa7368);
    FUN_02e3ca1c(Oculus_Platform_Request<AppDownloadProgressResult>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06aaada0);
    FUN_02e3ca1c(Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Request<ApplicationVersion>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a41508);
    FUN_02e3ca1c(Oculus_Platform_Request<AssetDetails>_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Request<AssetDetailsList>_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06aab698);
    FUN_02e3ca1c(PTR_DAT_06a41510);
    FUN_02e3ca1c(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06aaae90);
    FUN_02e3ca1c(Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Request<AvatarEditorResult>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06aa9d48);
    FUN_02e3ca1c(PTR_DAT_06a993e0);
    FUN_02e3ca1c(Oculus_Platform_Request<BlockedUserList>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06aa8b00);
    FUN_02e3ca1c(Oculus_Platform_Request<bool>_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Request<AchievementProgressList>_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Request<Challenge>_TypeInfo);
    DAT_06e951e3 = 1;
  }
  uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
  FUN_05c92978(uVar9,*(undefined8 *)puVar1,0,0,0,0,*(undefined8 *)puVar5,0);
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_8 = 0;
  FUN_05ca8184(&uStack_18,uVar9,0);
  *(undefined8 *)(param_1 + 0xb8) = uStack_10;
  *(undefined8 *)(param_1 + 0xb0) = uStack_18;
  *(undefined8 *)(param_1 + 0xc0) = uStack_8;
  thunk_FUN_02ee2be8(param_1 + 0xb8,0);
  uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
  FUN_05c92978(uVar9,*(undefined8 *)puVar2,0,0,0,0,*(undefined8 *)puVar4,0);
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_05ca8184(&uStack_30,uVar9,0);
  *(undefined8 *)(param_1 + 0xd0) = uStack_28;
  *(undefined8 *)(param_1 + 200) = uStack_30;
  *(undefined8 *)(param_1 + 0xd8) = uStack_20;
  thunk_FUN_02ee2be8(param_1 + 0xd0,0);
  lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
  FUN_05c92978(lVar10,*(undefined8 *)puVar6,1,0,0,0,0,0);
  puVar8 = Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo;
  puVar7 = Oculus_Platform_Request<ApplicationVersion>_TypeInfo;
  puVar6 = Oculus_Platform_Request<AppDownloadResult>_TypeInfo;
  puVar5 = PTR_DAT_06aab698;
  puVar4 = PTR_DAT_06aa9d48;
  puVar2 = PTR_DAT_06aa8b00;
  puVar1 = PTR_DAT_06a993e0;
  if (lVar10 != 0) {
    FUN_05c92914(lVar10,1,0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_05ca8184(&uStack_48,lVar10,0);
    *(undefined8 *)(param_1 + 0xe8) = uStack_40;
    *(undefined8 *)(param_1 + 0xe0) = uStack_48;
    *(undefined8 *)(param_1 + 0xf0) = uStack_38;
    thunk_FUN_02ee2be8(param_1 + 0xe8,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)puVar5,0,0,0,0,*(undefined8 *)puVar1,0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_05ca8184(&uStack_60,uVar9,0);
    *(undefined8 *)(param_1 + 0x100) = uStack_58;
    *(undefined8 *)(param_1 + 0xf8) = uStack_60;
    *(undefined8 *)(param_1 + 0x108) = uStack_50;
    thunk_FUN_02ee2be8(param_1 + 0x100,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)puVar6,1,0,0,0,0,0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_05ca8184(&uStack_78,uVar9,0);
    *(undefined8 *)(param_1 + 0x118) = uStack_70;
    *(undefined8 *)(param_1 + 0x110) = uStack_78;
    *(undefined8 *)(param_1 + 0x120) = uStack_68;
    thunk_FUN_02ee2be8(param_1 + 0x118,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)puVar7,0,0,0,0,*(undefined8 *)puVar2,0);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    FUN_05ca8184(&uStack_90,uVar9,0);
    *(undefined8 *)(param_1 + 0x130) = uStack_88;
    *(undefined8 *)(param_1 + 0x128) = uStack_90;
    *(undefined8 *)(param_1 + 0x138) = uStack_80;
    thunk_FUN_02ee2be8(param_1 + 0x130,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)puVar8,1,0,0,0,0,0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    FUN_05ca8184(&uStack_a8,uVar9,0);
    *(undefined8 *)(param_1 + 0x148) = uStack_a0;
    *(undefined8 *)(param_1 + 0x140) = uStack_a8;
    *(undefined8 *)(param_1 + 0x150) = uStack_98;
    thunk_FUN_02ee2be8(param_1 + 0x148,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<BlockedUserList>_TypeInfo,0,0,0,0,
                 *(undefined8 *)puVar2,0);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    FUN_05ca8184(&uStack_c0,uVar9,0);
    *(undefined8 *)(param_1 + 0x160) = uStack_b8;
    *(undefined8 *)(param_1 + 0x158) = uStack_c0;
    *(undefined8 *)(param_1 + 0x168) = uStack_b0;
    thunk_FUN_02ee2be8(param_1 + 0x160,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<bool>_TypeInfo,1,0,0,0,0,0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    FUN_05ca8184(&uStack_d8,uVar9,0);
    *(undefined8 *)(param_1 + 0x178) = uStack_d0;
    *(undefined8 *)(param_1 + 0x170) = uStack_d8;
    *(undefined8 *)(param_1 + 0x180) = uStack_c8;
    thunk_FUN_02ee2be8(param_1 + 0x178,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,0,0,0,0,
                 *(undefined8 *)puVar2,0);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    FUN_05ca8184(&uStack_f0,uVar9,0);
    *(undefined8 *)(param_1 + 400) = uStack_e8;
    *(undefined8 *)(param_1 + 0x188) = uStack_f0;
    *(undefined8 *)(param_1 + 0x198) = uStack_e0;
    thunk_FUN_02ee2be8(param_1 + 400,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo,0,0,0,
                 0,*(undefined8 *)puVar4,0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    FUN_05ca8184(&uStack_108,uVar9,0);
    *(undefined8 *)(param_1 + 0x1a8) = uStack_100;
    *(undefined8 *)(param_1 + 0x1a0) = uStack_108;
    *(undefined8 *)(param_1 + 0x1b0) = uStack_f8;
    thunk_FUN_02ee2be8(param_1 + 0x1a8,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<AssetDetails>_TypeInfo,2,0,0,0,0,0);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    FUN_05ca8184(&uStack_120,uVar9,0);
    *(undefined8 *)(param_1 + 0x1c0) = uStack_118;
    *(undefined8 *)(param_1 + 0x1b8) = uStack_120;
    *(undefined8 *)(param_1 + 0x1c8) = uStack_110;
    thunk_FUN_02ee2be8(param_1 + 0x1c0,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<Challenge>_TypeInfo,0,0,0,0,
                 *(undefined8 *)puVar4,0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    FUN_05ca8184(&uStack_138,uVar9,0);
    *(undefined8 *)(param_1 + 0x1d8) = uStack_130;
    *(undefined8 *)(param_1 + 0x1d0) = uStack_138;
    *(undefined8 *)(param_1 + 0x1e0) = uStack_128;
    thunk_FUN_02ee2be8(param_1 + 0x1d8,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<AssetDetailsList>_TypeInfo,0,0,0,0,
                 *(undefined8 *)puVar4,0);
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    FUN_05ca8184(&uStack_150,uVar9,0);
    *(undefined8 *)(param_1 + 0x1f0) = uStack_148;
    *(undefined8 *)(param_1 + 0x1e8) = uStack_150;
    *(undefined8 *)(param_1 + 0x1f8) = uStack_140;
    thunk_FUN_02ee2be8(param_1 + 0x1f0,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo,0,0,
                 0,0,*(undefined8 *)puVar4,0);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    FUN_05ca8184(&uStack_168,uVar9,0);
    *(undefined8 *)(param_1 + 0x208) = uStack_160;
    *(undefined8 *)(param_1 + 0x200) = uStack_168;
    *(undefined8 *)(param_1 + 0x210) = uStack_158;
    thunk_FUN_02ee2be8(param_1 + 0x208,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)
                        Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo,1,0,0,0,0,0)
    ;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    FUN_05ca8184(&uStack_180,uVar9,0);
    *(undefined8 *)(param_1 + 0x220) = uStack_178;
    *(undefined8 *)(param_1 + 0x218) = uStack_180;
    *(undefined8 *)(param_1 + 0x228) = uStack_170;
    thunk_FUN_02ee2be8(param_1 + 0x220,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
    FUN_05c92978(uVar9,*(undefined8 *)Oculus_Platform_Request<AppDownloadProgressResult>_TypeInfo,0,
                 0,0,0,*(undefined8 *)puVar4,0);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    FUN_05ca8184(&uStack_198,uVar9,0);
    *(undefined8 *)(param_1 + 0x238) = uStack_190;
    *(undefined8 *)(param_1 + 0x230) = uStack_198;
    *(undefined8 *)(param_1 + 0x240) = uStack_188;
    thunk_FUN_02ee2be8(param_1 + 0x238,0);
    uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo);
    FUN_06197e04(uVar9,0);
    *(undefined8 *)(param_1 + 0x250) = uVar9;
    thunk_FUN_02ee2be8(param_1 + 0x250,uVar9);
    *(undefined1 *)(param_1 + 0x88) = 1;
    *(undefined2 *)(param_1 + 0x24) = 0x101;
    *(undefined1 *)(param_1 + 0x99) = 1;
    thunk_FUN_062646b0(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


