/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.SpaceWarpFeature$$MetaSetAppSpaceRotation
ENTRY_POINT: 060c98ec
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


void UnityEngine_XR_OpenXR_Features_SpaceWarpFeature__MetaSetAppSpaceRotation(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 *puVar10;
  long unaff_x21;
  undefined8 *puVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  
  puVar4 = Oculus_Platform_Request<AchievementProgressList>_TypeInfo;
  puVar3 = PTR_DAT_06aaae90;
  puVar2 = PTR_DAT_06aaada0;
  puVar1 = PTR_DAT_06a41510;
  puVar11 = *(undefined8 **)(unaff_x21 + 0x368);
  puVar10 = *(undefined8 **)(unaff_x20 + 0x508);
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
  uVar8 = thunk_FUN_02e78ab8(*puVar11);
  FUN_05c92978(uVar8,*puVar10,0,0,0,0,*(undefined8 *)puVar3,0);
  in_stack_00000188 = 0;
  in_stack_00000190 = 0;
  in_stack_00000198 = 0;
  FUN_05ca8184(&stack0x00000188,uVar8,0);
  *(undefined8 *)(param_1 + 0xb8) = in_stack_00000190;
  *(undefined8 *)(param_1 + 0xb0) = in_stack_00000188;
  *(undefined8 *)(param_1 + 0xc0) = in_stack_00000198;
  thunk_FUN_02ee2be8(param_1 + 0xb8,0);
  uVar8 = thunk_FUN_02e78ab8(*puVar11);
  FUN_05c92978(uVar8,*(undefined8 *)puVar1,0,0,0,0,*(undefined8 *)puVar2,0);
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  in_stack_00000180 = 0;
  FUN_05ca8184(&stack0x00000170,uVar8,0);
  *(undefined8 *)(param_1 + 0xd0) = in_stack_00000178;
  *(undefined8 *)(param_1 + 200) = in_stack_00000170;
  *(undefined8 *)(param_1 + 0xd8) = in_stack_00000180;
  thunk_FUN_02ee2be8(param_1 + 0xd0,0);
  lVar9 = thunk_FUN_02e78ab8(*puVar11);
  FUN_05c92978(lVar9,*(undefined8 *)puVar4,1,0,0,0,0,0);
  puVar7 = Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo;
  puVar6 = Oculus_Platform_Request<ApplicationVersion>_TypeInfo;
  puVar5 = Oculus_Platform_Request<AppDownloadResult>_TypeInfo;
  puVar4 = PTR_DAT_06aab698;
  puVar3 = PTR_DAT_06aa9d48;
  puVar2 = PTR_DAT_06aa8b00;
  puVar1 = PTR_DAT_06a993e0;
  if (lVar9 != 0) {
    FUN_05c92914(lVar9,1,0);
    in_stack_00000158 = 0;
    in_stack_00000160 = 0;
    in_stack_00000168 = 0;
    FUN_05ca8184(&stack0x00000158,lVar9,0);
    *(undefined8 *)(param_1 + 0xe8) = in_stack_00000160;
    *(undefined8 *)(param_1 + 0xe0) = in_stack_00000158;
    *(undefined8 *)(param_1 + 0xf0) = in_stack_00000168;
    thunk_FUN_02ee2be8(param_1 + 0xe8,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)puVar4,0,0,0,0,*(undefined8 *)puVar1,0);
    in_stack_00000140 = 0;
    in_stack_00000148 = 0;
    in_stack_00000150 = 0;
    FUN_05ca8184(&stack0x00000140,uVar8,0);
    *(undefined8 *)(param_1 + 0x100) = in_stack_00000148;
    *(undefined8 *)(param_1 + 0xf8) = in_stack_00000140;
    *(undefined8 *)(param_1 + 0x108) = in_stack_00000150;
    thunk_FUN_02ee2be8(param_1 + 0x100,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)puVar5,1,0,0,0,0,0);
    in_stack_00000128 = 0;
    in_stack_00000130 = 0;
    in_stack_00000138 = 0;
    FUN_05ca8184(&stack0x00000128,uVar8,0);
    *(undefined8 *)(param_1 + 0x118) = in_stack_00000130;
    *(undefined8 *)(param_1 + 0x110) = in_stack_00000128;
    *(undefined8 *)(param_1 + 0x120) = in_stack_00000138;
    thunk_FUN_02ee2be8(param_1 + 0x118,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)puVar6,0,0,0,0,*(undefined8 *)puVar2,0);
    in_stack_00000110 = 0;
    in_stack_00000118 = 0;
    in_stack_00000120 = 0;
    FUN_05ca8184(&stack0x00000110,uVar8,0);
    *(undefined8 *)(param_1 + 0x130) = in_stack_00000118;
    *(undefined8 *)(param_1 + 0x128) = in_stack_00000110;
    *(undefined8 *)(param_1 + 0x138) = in_stack_00000120;
    thunk_FUN_02ee2be8(param_1 + 0x130,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)puVar7,1,0,0,0,0,0);
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    FUN_05ca8184(&stack0x000000f8,uVar8,0);
    *(undefined8 *)(param_1 + 0x148) = in_stack_00000100;
    *(undefined8 *)(param_1 + 0x140) = in_stack_000000f8;
    *(undefined8 *)(param_1 + 0x150) = in_stack_00000108;
    thunk_FUN_02ee2be8(param_1 + 0x148,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<BlockedUserList>_TypeInfo,0,0,0,0,
                 *(undefined8 *)puVar2,0);
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f0 = 0;
    FUN_05ca8184(&stack0x000000e0,uVar8,0);
    *(undefined8 *)(param_1 + 0x160) = in_stack_000000e8;
    *(undefined8 *)(param_1 + 0x158) = in_stack_000000e0;
    *(undefined8 *)(param_1 + 0x168) = in_stack_000000f0;
    thunk_FUN_02ee2be8(param_1 + 0x160,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<bool>_TypeInfo,1,0,0,0,0,0);
    in_stack_000000c8 = 0;
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    FUN_05ca8184(&stack0x000000c8,uVar8,0);
    *(undefined8 *)(param_1 + 0x178) = in_stack_000000d0;
    *(undefined8 *)(param_1 + 0x170) = in_stack_000000c8;
    *(undefined8 *)(param_1 + 0x180) = in_stack_000000d8;
    thunk_FUN_02ee2be8(param_1 + 0x178,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo,0,0,0,0,
                 *(undefined8 *)puVar2,0);
    in_stack_000000b0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000c0 = 0;
    FUN_05ca8184(&stack0x000000b0,uVar8,0);
    *(undefined8 *)(param_1 + 400) = in_stack_000000b8;
    *(undefined8 *)(param_1 + 0x188) = in_stack_000000b0;
    *(undefined8 *)(param_1 + 0x198) = in_stack_000000c0;
    thunk_FUN_02ee2be8(param_1 + 400,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo,0,0,0,
                 0,*(undefined8 *)puVar3,0);
    in_stack_00000098 = 0;
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
    FUN_05ca8184(&stack0x00000098,uVar8,0);
    *(undefined8 *)(param_1 + 0x1a8) = in_stack_000000a0;
    *(undefined8 *)(param_1 + 0x1a0) = in_stack_00000098;
    *(undefined8 *)(param_1 + 0x1b0) = in_stack_000000a8;
    thunk_FUN_02ee2be8(param_1 + 0x1a8,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<AssetDetails>_TypeInfo,2,0,0,0,0,0);
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    in_stack_00000090 = 0;
    FUN_05ca8184(&stack0x00000080,uVar8,0);
    *(undefined8 *)(param_1 + 0x1c0) = in_stack_00000088;
    *(undefined8 *)(param_1 + 0x1b8) = in_stack_00000080;
    *(undefined8 *)(param_1 + 0x1c8) = in_stack_00000090;
    thunk_FUN_02ee2be8(param_1 + 0x1c0,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<Challenge>_TypeInfo,0,0,0,0,
                 *(undefined8 *)puVar3,0);
    in_stack_00000068 = 0;
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    FUN_05ca8184(&stack0x00000068,uVar8,0);
    *(undefined8 *)(param_1 + 0x1d8) = in_stack_00000070;
    *(undefined8 *)(param_1 + 0x1d0) = in_stack_00000068;
    *(undefined8 *)(param_1 + 0x1e0) = in_stack_00000078;
    thunk_FUN_02ee2be8(param_1 + 0x1d8,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<AssetDetailsList>_TypeInfo,0,0,0,0,
                 *(undefined8 *)puVar3,0);
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    in_stack_00000060 = 0;
    FUN_05ca8184(&stack0x00000050,uVar8,0);
    *(undefined8 *)(param_1 + 0x1f0) = in_stack_00000058;
    *(undefined8 *)(param_1 + 0x1e8) = in_stack_00000050;
    *(undefined8 *)(param_1 + 0x1f8) = in_stack_00000060;
    thunk_FUN_02ee2be8(param_1 + 0x1f0,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo,0,0,
                 0,0,*(undefined8 *)puVar3,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_05ca8184(&stack0x00000038,uVar8,0);
    *(undefined8 *)(param_1 + 0x208) = in_stack_00000040;
    *(undefined8 *)(param_1 + 0x200) = in_stack_00000038;
    *(undefined8 *)(param_1 + 0x210) = in_stack_00000048;
    thunk_FUN_02ee2be8(param_1 + 0x208,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)
                        Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo,1,0,0,0,0,0)
    ;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_05ca8184(&stack0x00000020,uVar8,0);
    *(undefined8 *)(param_1 + 0x220) = in_stack_00000028;
    *(undefined8 *)(param_1 + 0x218) = in_stack_00000020;
    *(undefined8 *)(param_1 + 0x228) = in_stack_00000030;
    thunk_FUN_02ee2be8(param_1 + 0x220,0);
    uVar8 = thunk_FUN_02e78ab8(*puVar11);
    FUN_05c92978(uVar8,*(undefined8 *)Oculus_Platform_Request<AppDownloadProgressResult>_TypeInfo,0,
                 0,0,0,*(undefined8 *)puVar3,0);
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_05ca8184(&stack0x00000008,uVar8,0);
    *(undefined8 *)(param_1 + 0x238) = in_stack_00000010;
    *(undefined8 *)(param_1 + 0x230) = in_stack_00000008;
    *(undefined8 *)(param_1 + 0x240) = in_stack_00000018;
    thunk_FUN_02ee2be8(param_1 + 0x238,0);
    uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo);
    FUN_06197e04(uVar8,0);
    *(undefined8 *)(param_1 + 0x250) = uVar8;
    thunk_FUN_02ee2be8(param_1 + 0x250,uVar8);
    *(undefined1 *)(param_1 + 0x88) = 1;
    *(undefined2 *)(param_1 + 0x24) = 0x101;
    *(undefined1 *)(param_1 + 0x99) = 1;
    thunk_FUN_062646b0(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


